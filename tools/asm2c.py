# asm2c.py OUT.c INC...: mechanically translates agbcc Thumb functions (asm/non_matching/*/*.inc) into C for
# NONMATCHING builds. Registers become u32 locals, flags are computed where a later branch reads them, the stack
# is a local array laid out like the original frame, and memory goes through the R8/W32... macros of
# include/auto.h. Functions it can't translate are listed on stderr and stay asm.
# Calls use the C ABI: r0-r3 (plus the first 4 stack words for callees taking more than 4 arguments) and r0 back.
# shortcut: a value returned in r1 (64-bit returns) isn't passed back; no function seen needs it.
import re, subprocess, sys

COND = {"eq": "z", "ne": "!z", "cs": "c", "hs": "c", "cc": "!c", "lo": "!c", "mi": "n", "pl": "!n",
        "vs": "v", "vc": "!v", "hi": "(c && !z)", "ls": "(!c || z)", "ge": "(n == v)", "lt": "(n != v)",
        "gt": "(!z && n == v)", "le": "(z || n != v)"}
ALIAS = {"sb": "r9", "sl": "r10", "fp": "r11", "ip": "r12"}
REGS = ["r%d" % i for i in range(13)] + ["lr"]


class Fail(Exception):
    pass


def bl_targets(paths):
    out = set()
    for p in paths:
        for l in open(p):
            m = re.match(r"\s*bl?\s+([A-Za-z]\w*)\s*(@.*)?$", l)
            if m:
                out.add(m.group(1))
    return out


def proto_arity():
    ar = {}
    for l in open("include/functions.h"):
        m = re.match(r"\s*[\w\s\*]+?\b(\w+)\s*\(([^)]*)\)\s*;", l)
        if m:
            a = m.group(2).strip()
            ar[m.group(1)] = 0 if a in ("", "void") else a.count(",") + 1
    return ar


def reg(s):
    s = s.strip().lower()
    s = ALIAS.get(s, s)
    if s in REGS or s in ("sp", "pc"):
        return s
    raise Fail("register " + s)


def reglist(s):
    out = []
    for part in s.strip("{} ").split(","):
        part = part.strip()
        if "-" in part:
            a, b = part.split("-")
            a, b = int(reg(a)[1:]), int(reg(b)[1:])
            out += ["r%d" % i for i in range(a, b + 1)]
        elif part:
            out.append(reg(part))
    return out


def imm(s):
    s = s.strip()
    if s.startswith("#"):
        s = s[1:]
    try:
        return int(s, 0)
    except ValueError:
        raise Fail("immediate " + s)


def parse(path):
    """-> name, list of items: ('label', name) | ('ins', mnem, ops, line) | ('word', expr) | ('byte',)"""
    items, name = [], None
    for raw in open(path):
        l = raw.split("@")[0].strip()
        if not l:
            continue
        if l.startswith(("THUMB_FUNC_START", "thumb_func_start", "ARM_FUNC_START", "arm_func_start")):
            if l.lower().startswith("arm"):
                raise Fail("ARM function")
            continue
        if l.lower().startswith(("thumb_func_end", ".syntax", ".thumb", ".align", ".global",
                                 ".thumb_func", ".balign", ".type")):
            continue
        if l.startswith(".arm"):
            raise Fail("ARM code")
        m = re.match(r"([\w.]+):(.*)", l)
        if m:
            if name is None:
                name = m.group(1)
            else:
                items.append(("label", m.group(1)))
            l = m.group(2).strip()
            if not l:
                continue
        if l.startswith(".4byte") or l.startswith(".word"):
            items.append(("word", l.split(None, 1)[1].strip()))
            continue
        if l.startswith(".byte") or l.startswith(".2byte") or l.startswith(".hword"):
            items.append(("byte",))
            continue
        if l.startswith("."):
            raise Fail("directive " + l)
        p = l.split(None, 1)
        mn = p[0].lower()
        if mn.endswith((".n", ".w")):
            mn = mn[:-2]
        ops = [o.strip() for o in re.split(r",(?![^{\[]*[}\]])", p[1])] if len(p) > 1 else []
        items.append(("ins", mn, ops, l))
    return name, items


FLAGSET = {"cmp", "cmn", "tst"}


def sets_flags(mn, ops):
    base = mn[:-1] if mn.endswith("s") and mn[:-1] in ("mov", "add", "sub", "lsl", "lsr", "asr", "ror", "and",
                                                        "orr", "eor", "bic", "mvn", "neg", "mul", "adc", "sbc",
                                                        "rsb") else mn
    if base in FLAGSET:
        return True
    if base in ("mov", "add"):
        # Thumb-1: mov/add with a high register (or sp/pc) don't set flags
        return all(o.startswith("#") or re.fullmatch(r"r[0-7]", ALIAS.get(o.lower(), o.lower())) for o in ops)
    return base in ("sub", "lsl", "lsr", "asr", "ror", "and", "orr", "eor", "bic", "mvn", "neg", "mul", "adc",
                    "sbc", "rsb")


def reads_flags(mn):
    return (mn.startswith("b") and mn[1:] in COND) or mn in ("adc", "adcs", "sbc", "sbcs")


class Func:
    def __init__(s, path, funcs, arity, stackargs):
        s.path, s.funcs, s.arity, s.stackargs = path, funcs, arity, stackargs
        s.name, s.items = parse(path)
        if s.name is None:
            raise Fail("no function label")
        kinds = [it[0] for it in s.items]
        if "ins" not in kinds:
            raise Fail("no instructions")
        s.labels = {it[1] for it in s.items if it[0] == "label"}
        # pool: label -> word expr (the .4byte right after the label)
        s.pool = {}
        for i, it in enumerate(s.items):
            if it[0] == "label" and i + 1 < len(s.items) and s.items[i + 1][0] == "word":
                s.pool[it[1]] = i + 1
        s.used_labels, s.callees, s.data = set(), set(), set()

    # ---- operands
    def value(s, expr):
        """C expression for a .4byte expression"""
        e = expr.strip()
        m = re.fullmatch(r"(-?(?:0x[0-9a-fA-F]+|\d+))", e)
        if m:
            return "0x%Xu" % (int(e, 0) & 0xFFFFFFFF)
        m = re.fullmatch(r"([A-Za-z_]\w*)\s*(?:([+-])\s*(0x[0-9a-fA-F]+|\d+))?", e)
        if not m:
            raise Fail("pool expr " + e)
        sym, sg, off = m.groups()
        if sym in s.labels or sym.startswith("_08"):
            raise Fail("code address in pool " + e)
        if sym in s.funcs:
            s.callees.add(sym)
            base = "(u32)%s" % sym
        else:
            s.data.add(sym)
            base = "(u32)%s" % sym
        if off:
            base = "(%s %s %s)" % (base, sg, off)
        return base

    def opnd(s, o):
        o = o.strip()
        if o.startswith("#"):
            return "0x%Xu" % (imm(o) & 0xFFFFFFFF)
        return reg(o)

    # ---- stack depth (bytes pushed since entry) per item, by following the control flow
    def depths(s):
        lab = {it[1]: i for i, it in enumerate(s.items) if it[0] == "label"}
        d = [None] * len(s.items)
        work = [(0, 0)]
        while work:
            i, dep = work.pop()
            while i < len(s.items):
                if d[i] is not None:
                    if d[i] != dep:
                        raise Fail("inconsistent stack depth")
                    break
                d[i] = dep
                it = s.items[i]
                if it[0] == "byte":
                    raise Fail("code bytes")  # reached by control flow: raw machine code, not padding
                if it[0] == "word":
                    raise Fail("runs into data")
                if it[0] == "ins":
                    mn, ops = it[1], it[2]
                    if mn == "push":
                        dep += 4 * len(reglist(ops[0]))
                    elif mn == "pop":
                        rl = reglist(ops[0])
                        dep -= 4 * len(rl)
                        if dep < 0:
                            raise Fail("pops the caller's frame")
                        if "pc" in rl:
                            break
                    elif mn in ("sub", "add") and ops and reg(ops[0]) == "sp":
                        n = imm(ops[-1])
                        if len(ops) == 3 and reg(ops[1]) != "sp":
                            raise Fail("sp from register")
                        if len(ops) == 2 and not ops[1].startswith("#"):
                            raise Fail("sp from register")
                        dep += n if mn == "sub" else -n
                    elif mn == "mov" and reg(ops[0]) == "sp":
                        raise Fail("mov sp")
                    elif mn == "b" or (mn == "bl" and ops[0] in lab):
                        t = ops[0]
                        if t in lab:
                            work.append((lab[t], dep))
                        break
                    elif mn.startswith("b") and mn[1:] in COND:
                        if ops[0] in lab:
                            work.append((lab[ops[0]], dep))
                    elif mn == "mov" and reg(ops[0]) == "pc" and reg(ops[1]) != "lr":
                        prev = s.prev_ins(i)
                        if not (prev and prev[1] == "pop"):  # jump table: follow every case
                            for c in s.table_cases(i):
                                if c not in lab:
                                    raise Fail("jump table target " + c)
                                work.append((lab[c], dep))
                        break
                    elif mn in ("bx",) or (mn == "mov" and reg(ops[0]) == "pc"):
                        break
                i += 1
        return d

    def translate(s):
        d = s.depths()
        dead = [it[3] for i, it in enumerate(s.items) if it[0] == "ins" and d[i] is None and it[1] not in ("b", "nop")]
        if dead:  # code no path reaches (an entry we don't see?): don't drop it silently
            raise Fail("unreachable code: " + dead[0])
        maxd = max(x for x in d if x is not None)
        # incoming stack arguments: sp-relative loads reaching at or above the entry sp
        nargs = 0
        for i, it in enumerate(s.items):
            if it[0] == "ins" and d[i] is not None:
                m = re.search(r"\[sp(?:,\s*#(\w+))?\]", ",".join(it[2]))
                if m:
                    off = int(m.group(1) or "0", 0) - d[i]
                    if off >= 0:
                        nargs = max(nargs, off // 4 + 1)
                if it[1] == "add" and len(it[2]) == 3 and it[2][1].strip() == "sp" and d[i] is not None:
                    if imm(it[2][2]) - d[i] >= 0:
                        nargs = max(nargs, 4)
        if nargs > 4:
            raise Fail("more than 8 arguments")
        s.nargs = nargs
        # which flag setters feed a reader
        need = set()
        n = len(s.items)
        for i, it in enumerate(s.items):
            if it[0] == "ins" and sets_flags(it[1], it[2]):
                for j in range(i + 1, n):
                    jt = s.items[j]
                    if jt[0] in ("word", "byte"):
                        break
                    if jt[0] == "label":
                        continue
                    if reads_flags(jt[1]):
                        need.add(i)
                        break
                    if sets_flags(jt[1], jt[2]) or jt[1] in ("b", "bx", "bl") or \
                            (jt[1] == "pop" and "pc" in jt[2][0]):
                        break
        s.need = need
        s.skip, s.tables = set(), {}
        for i, it in enumerate(s.items):
            if it[0] == "ins" and it[1] == "mov" and reg(it[2][0]) == "pc" and reg(it[2][1]) != "lr":
                prev = s.prev_ins(i)
                if not (prev and prev[1] == "pop"):
                    s.tables[i] = s.jumptable(i, reg(it[2][1]))
        body = []
        for i, it in enumerate(s.items):
            if it[0] == "label":
                body.append("%s:" % s.clab(it[1]))
                continue
            if it[0] != "ins" or i in s.skip:
                continue
            if d[i] is None:
                continue  # unreachable
            try:
                body += ["    " + x for x in s.ins(i, it[1], it[2], i in need)]
            except Fail as e:
                raise Fail("%s: %s" % (it[3], e))
        # drop unused labels (agbcc warns otherwise, and a label before '}' needs a statement)
        out = []
        for l in body:
            m = re.fullmatch(r"(L_\w+):", l)
            if m and m.group(1) not in s.used_labels:
                continue
            out.append(l)
        words = maxd // 4 + 4
        sig = ", ".join("u32 r%d" % k for k in range(4))
        if nargs:
            sig += ", " + ", ".join("u32 a%d" % k for k in range(nargs))
        head = ["u32 %s(%s)" % (s.name, sig), "{",
                "    u32 r4, r5, r6, r7, r8, r9, r10, r11, r12, lr, sp, n, z, c, v;",
                "    u32 frame[%d];" % words,
                "    sp = (u32)&frame[%d];" % (maxd // 4)]
        for k in range(nargs):
            head.append("    frame[%d] = a%d;" % (maxd // 4 + k, k))
        head.append("    r4 = r5 = r6 = r7 = r8 = r9 = r10 = r11 = r12 = lr = n = z = c = v = 0;")
        if out and out[-1].endswith(":"):
            out.append("    ;")
        return head + out + ["}"]

    def clab(s, l):
        return "L_" + l.lstrip("_").replace(".", "_")

    def goto(s, l):
        if l not in s.labels:
            raise Fail("branch out of function " + l)
        s.used_labels.add(s.clab(l))
        return "goto %s;" % s.clab(l)

    def call(s, t, ret=True):
        if t in s.labels:  # agbcc's long branch within a function
            return s.goto(t)
        if re.fullmatch(r"_08[0-9A-Fa-f]+", t):
            raise Fail("call to a local label of another function")
        m = re.fullmatch(r"_call_via_(\w+)", t)
        if m:
            fn = "ICALL(%s)" % reg(m.group(1))
            na = 4
        else:
            mo = re.fullmatch(r"(\w+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)", t)
            if mo:  # a call into a function past its start (the target stays asm)
                s.data.add(mo.group(1))
                fn = "ICALL((u32)%s + %s)" % (mo.group(1), mo.group(2))
                na = 4
            else:
                s.callees.add(t)
                fn = t
                na = s.stackargs.get(t, max(4, s.arity.get(t, 4)))
        args = ["r0", "r1", "r2", "r3"] + ["R32(sp + %d)" % (4 * k) for k in range(max(0, min(na, 8) - 4))]
        return "r0 = %s(%s);" % (fn, ", ".join(args))

    def flags_nz(s, r):
        return ["n = %s >> 31; z = %s == 0;" % (r, r)]

    def ins(s, i, mn, ops, fl):
        u = mn
        if u.endswith("s") and u[:-1] in ("mov", "add", "sub", "lsl", "lsr", "asr", "ror", "and", "orr", "eor",
                                          "bic", "mvn", "neg", "mul", "adc", "sbc", "rsb"):
            u = u[:-1]
        if u == "lsls":
            u = "lsl"
        o = ops
        if u.startswith("b") and u[1:] in COND:
            return ["if (%s) %s" % (COND[u[1:]], s.goto(o[0]))]
        if u == "b":
            if o[0] in s.labels:
                return [s.goto(o[0])]
            if o[0] in s.funcs:  # tail call
                return [s.call(o[0]), "return r0;"]
            raise Fail("branch target " + o[0])
        if u == "bl":
            return [s.call(o[0])]
        if u == "bx" or (u == "mov" and reg(o[0]) == "pc"):
            r = reg(o[-1])
            if r == "lr":
                return ["return r0;"]
            # pop {rX}; bx rX epilogue
            prev = s.prev_ins(i)
            if prev and prev[1] == "pop" and r in reglist(prev[2][0]):
                return ["return r0;"]
            if u == "mov":
                return s.tables[i]
            raise Fail("indirect jump")
        if u == "push":
            rl = reglist(o[0])
            out = ["sp -= %d;" % (4 * len(rl))]
            for k, r in enumerate(rl):
                out.append("W32(sp + %d, %s);" % (4 * k, "0" if r == "lr" else r))
            return out
        if u == "pop":
            rl = reglist(o[0])
            out = []
            for k, r in enumerate(rl):
                if r != "pc":
                    out.append("%s = R32(sp + %d);" % (r, 4 * k))
            out.append("sp += %d;" % (4 * len(rl)))
            if "pc" in rl:
                out.append("return r0;")
            return out
        if u in ("ldm", "ldmia", "stm", "stmia"):
            b = o[0].rstrip("!").strip()
            b = reg(b)
            rl = reglist(o[1])
            out = []
            for k, r in enumerate(rl):
                if u.startswith("ld"):
                    out.append("%s = R32(%s + %d);" % (r, b, 4 * k) if r != b else "tmp_ldm = R32(%s + %d);" % (b, 4 * k))
                else:
                    out.append("W32(%s + %d, %s);" % (b, 4 * k, r))
            if u.startswith("ld") and b in rl:
                out = ["{ u32 tmp_ldm;"] + out + ["%s = tmp_ldm; }" % b]
            elif o[0].strip().endswith("!"):
                out.append("%s += %d;" % (b, 4 * len(rl)))
            return out
        if u in ("ldr", "ldrb", "ldrh", "ldrsb", "ldrsh", "str", "strb", "strh"):
            return s.mem(u, o)
        if u == "swi" or u == "svc":
            raise Fail("swi")
        # data processing
        d = reg(o[0])
        if d == "pc":
            raise Fail("write to pc")
        if u == "mov":
            src = s.opnd(o[1])
            out = ["%s = %s;" % (d, src)]
            if fl:
                out += s.flags_nz(d)
            return out
        if u == "mvn":
            out = ["%s = ~%s;" % (d, s.opnd(o[1]))]
            return out + (s.flags_nz(d) if fl else [])
        if u in ("neg", "rsb"):
            a = s.opnd(o[1])
            return s.arith("sub", d, "0", a, fl)
        if u in ("add", "sub", "adc", "sbc"):
            if len(o) == 2:
                a, b = d, s.opnd(o[1])
            else:
                a, b = s.opnd(o[1]), s.opnd(o[2])
            if a == "pc":
                raise Fail("pc-relative add")
            return s.arith(u, d, a, b, fl)
        if u in ("cmp", "cmn"):
            return s.arith("sub" if u == "cmp" else "add", None, reg(o[0]), s.opnd(o[1]), True)
        if u == "tst":
            return ["{ u32 t = %s & %s; n = t >> 31; z = t == 0; }" % (reg(o[0]), s.opnd(o[1]))]
        if u in ("and", "orr", "eor", "bic", "mul"):
            if len(o) == 2:
                a, b = d, s.opnd(o[1])
            else:
                a, b = s.opnd(o[1]), s.opnd(o[2])
            op = {"and": "&", "orr": "|", "eor": "^", "mul": "*"}.get(u)
            e = "%s & ~%s" % (a, b) if u == "bic" else "%s %s %s" % (a, op, b)
            return ["%s = %s;" % (d, e)] + (s.flags_nz(d) if fl else [])
        if u in ("lsl", "lsr", "asr", "ror"):
            if len(o) == 2:
                a, b = d, o[1]
            else:
                a, b = reg(o[1]), o[2]
            out = []
            if b.strip().startswith("#"):
                k = imm(b)
                if u == "lsl":
                    if fl and k:
                        out.append("c = (%s >> %d) & 1;" % (a, 32 - k))
                    out.append("%s = %s << %d;" % (d, a, k) if k else "%s = %s;" % (d, a))
                else:
                    if k == 0:
                        k = 32
                    if fl:
                        out.append("c = (%s >> %d) & 1;" % (a, k - 1))
                    if u == "lsr":
                        out.append("%s = %s;" % (d, "0" if k == 32 else "%s >> %d" % (a, k)))
                    elif u == "asr":
                        out.append("%s = (u32)((s32)%s >> %d);" % (d, a, min(k, 31)))
                    else:
                        out.append("%s = (%s >> %d) | (%s << %d);" % (d, a, k % 32, a, (32 - k) % 32))
            else:
                b = reg(b)
                fnm = {"lsl": "LSL", "lsr": "LSR", "asr": "ASR", "ror": "ROR"}[u]
                if fl:
                    out.append("c = %s_C(%s, %s, c);" % (fnm, a, b))
                out.append("%s = %s(%s, %s);" % (d, fnm, a, b))
            return out + (s.flags_nz(d) if fl else [])
        raise Fail("instruction " + mn)

    def arith(s, u, d, a, b, fl):
        if u == "adc":
            e = "%s + %s + c" % (a, b)
        elif u == "sbc":
            e = "%s - %s - !c" % (a, b)
        else:
            e = "%s %s %s" % (a, "+" if u == "add" else "-", b)
        if not fl:
            return ["%s = %s;" % (d, e)]
        t = {"add": "ta + tb", "sub": "ta - tb", "adc": "ta + tb + c", "sbc": "ta - tb - !c"}[u]
        out = ["{ u32 ta = %s, tb = %s, t = %s;" % (a, b, t)]
        if u in ("add", "adc"):
            out.append("  c = %s; v = (~(ta ^ tb) & (ta ^ t)) >> 31;" %
                       ("t < ta" if u == "add" else "(u64)ta + tb + c > 0xFFFFFFFFu"))
        else:
            out.append("  c = %s; v = ((ta ^ tb) & (ta ^ t)) >> 31;" %
                       ("ta >= tb" if u == "sub" else "(u64)ta >= (u64)tb + !c"))
        out.append("  n = t >> 31; z = t == 0;%s }" % (" %s = t;" % d if d else ""))
        return out

    def mem(s, u, o):
        r = reg(o[0])
        addr = ",".join(o[1:]).strip()
        if not addr.startswith("["):
            # pc-relative literal: ldr rX, _label
            if u != "ldr":
                raise Fail("literal " + u)
            if addr.startswith("="):
                return ["%s = %s;" % (r, s.value(addr[1:]))]
            lab = addr
            if lab in s.pool:
                return ["%s = %s;" % (r, s.value(s.items[s.pool[lab]][1]))]
            if lab in GPOOL:  # a pool in another function
                return ["%s = %s;" % (r, s.value(GPOOL[lab]))]
            raise Fail("literal " + lab)
        m = re.fullmatch(r"\[\s*(\w+)\s*(?:,\s*(#?[\w-]+))?\s*\]", addr)
        if not m:
            raise Fail("address " + addr)
        b = reg(m.group(1))
        if b == "pc":
            raise Fail("pc-relative load")
        off = m.group(2)
        if off is None:
            a = b
        elif off.startswith("#") or re.fullmatch(r"-?\d+|0x\w+", off):
            k = imm(off)
            a = "%s + %d" % (b, k) if k else b
        else:
            a = "%s + %s" % (b, reg(off))
        sz = {"ldr": "32", "str": "32", "ldrb": "8", "strb": "8", "ldrh": "16", "strh": "16", "ldrsb": "S8",
              "ldrsh": "S16"}[u]
        if u.startswith("ld"):
            return ["%s = R%s(%s);" % (r, sz, a)]
        return ["W%s(%s, %s);" % (sz, a, r)]

    def prev_ins(s, i):
        for j in range(i - 1, -1, -1):
            if s.items[j][0] == "ins":
                return s.items[j]
            if s.items[j][0] == "label":
                return None
        return None

    def table_cases(s, i):
        seq = [j for j in range(i - 1, max(-1, i - 8), -1) if s.items[j][0] == "ins"][:4]
        if len(seq) < 4 or s.items[seq[2]][1] != "ldr":
            raise Fail("jump table shape")
        lab = s.items[seq[2]][2][1].strip()
        if lab not in s.pool:
            raise Fail("jump table pool")
        cases, j = [], s.pool[lab] + 1
        while j < len(s.items) and s.items[j][0] == "word":
            cases.append(s.items[j][1].strip())
            j += 1
        return cases

    def jumptable(s, i, r):
        """lsl rA, rK, #2; ldr rB, =table; add rA, rA, rB; ldr rA, [rA]; mov pc, rA  ->  switch (rK)"""
        seq = [j for j in range(i - 1, max(-1, i - 8), -1) if s.items[j][0] == "ins"][:4]
        if len(seq) < 4:
            raise Fail("jump table")
        ld2, add, ld1, lsl = [s.items[j] for j in seq]
        if not (ld2[1] == "ldr" and lsl[1] == "lsl" and add[1] == "add" and ld1[1] == "ldr"):
            raise Fail("jump table shape")
        k = "(%s >> 2)" % reg(lsl[2][0])  # the shifted index; the table load itself is dropped
        lab = ld1[2][1].strip()
        if lab not in s.pool:
            raise Fail("jump table pool")
        e = s.items[s.pool[lab]][1].replace(" ", "")
        m = re.fullmatch(r"(_\w+)\+0x4", e)
        if not m or m.group(1) != lab:
            raise Fail("jump table expr " + e)
        cases, j = [], s.pool[lab] + 1
        while j < len(s.items) and s.items[j][0] == "word":
            cases.append(s.items[j][1].strip())
            j += 1
        # the 3 instructions before mov pc only compute the table address; drop them
        for jj in seq[:3]:
            s.skip.add(jj)
        out = ["switch (%s) {" % k]
        for n, c in enumerate(cases):
            out.append("case %d: %s" % (n, s.goto(c)))
        out.append("}")
        out.append("return r0;  /* not reached */")
        return out


GPOOL = {}
BUILTINS = {"memcpy", "memset", "memcmp", "strcpy", "strcmp", "strlen", "abs", "labs"}


CALLEE_SAVED = {"r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11"}


def follows_abi(path):
    """agbcc-style function: r4-r11 are written before read, and saved (push / mov rLo, rHi; push) if written.
    Linear order stands in for the control flow."""
    name, items = parse(path)
    ins = [it for it in items if it[0] == "ins"]
    saved, defined, written = set(), set(), set()
    k = 0
    while k < len(ins) and ins[k][1] in ("push", "mov", "sub", "add"):  # prologue
        mn, ops = ins[k][1], ins[k][2]
        if mn == "push":
            saved |= set(reglist(ops[0])) & CALLEE_SAVED
        elif mn == "mov" and len(ops) == 2 and not ops[1].startswith("#") and reg(ops[1]) in CALLEE_SAVED - {"r4", "r5", "r6", "r7"}:
            saved.add(reg(ops[1]))  # mov r7, r8 before its push
            defined.add(reg(ops[0]))
        elif mn in ("sub", "add") and reg(ops[0]) == "sp":
            pass
        else:
            break
        k += 1
    for mn, ops in ((it[1], it[2]) for it in ins[k:]):
        regs = []
        for o in ops:
            regs += re.findall(r"\b(r1[01]|r[4-9]|sb|sl|fp)\b", o.lower())
        regs = [ALIAS.get(r, r) for r in regs]
        if not regs:
            continue
        if mn in ("push", "pop"):
            continue
        if mn.startswith(("str", "cmp", "cmn", "tst")) or mn.startswith("b"):
            srcs, dsts = regs, []
        elif mn.startswith("ldm") or mn.startswith("stm"):
            srcs, dsts = regs[:1], (regs[1:] if mn.startswith("ldm") else [])
        else:
            first = re.findall(r"\b(r1[01]|r[0-9]|sb|sl|fp|r12|ip|lr|sp|pc)\b", ops[0].lower())
            d0 = ALIAS.get(first[0], first[0]) if first else None
            two_op = len(ops) == 2 and mn not in ("mov", "mvn", "neg") and not mn.startswith("ld")
            srcs = [r for r in regs[1:]] + ([d0] if two_op and d0 in CALLEE_SAVED else [])
            dsts = [d0] if d0 in CALLEE_SAVED else []
        for r in srcs:
            if r not in defined:
                return False
        for r in dsts:
            defined.add(r)
            written.add(r)
    return written <= saved


def pinned_functions(incs):
    """Functions that must stay asm: other code enters them past their start (a branch or pool load from
    another function, a sym+offset reference, an extra global label) or reads data inside them."""
    owner, refs, pins = {}, {}, set()
    for p in incs:
        lines = [l.split("@")[0].strip() for l in open(p)]
        name, prev = None, None
        for l in lines:
            m = re.match(r"([\w.]+):", l)
            if m:
                if name is None:
                    name = m.group(1)
                owner[m.group(1)] = p
                prev = m.group(1)
            elif l and prev:
                m = re.match(r"\.4byte\s+(.+)", l)
                if m and prev not in GPOOL:
                    GPOOL[prev] = m.group(1).strip()
                prev = None
        refs[p] = set(re.findall(r"\b(_08[0-9A-Fa-f]+|[A-Za-z]\w*)\b(\s*\+\s*0x[0-9a-fA-F]+)?",
                                 "\n".join(re.sub(r"^\S+:", "", l) for l in lines)))
    funcnames = {}
    for p in incs:
        for l in open(p):
            m = re.match(r"(\w+):", l)
            if m:
                funcnames[p] = m.group(1)
                break
    byname = {v: k for k, v in funcnames.items()}
    starts = {}
    for p in incs:
        m = re.search(r"(?m)^\w+:\s*@\s*0[xX]([0-9a-fA-F]+)", open(p).read())
        if m:
            starts[p] = int(m.group(1), 16)
    order = sorted(starts, key=starts.get)
    import os, glob
    for p in order:  # hard-coded code addresses (.4byte 0x08xxxxxx) need their whole object laid out as before
        for v in re.findall(r"(?m)^\s*\.4byte\s+(0x0?8[0-9a-fA-F]{6})\s*$", open(p).read()):
            a = int(v, 16) & ~1
            if 0x08000000 <= a < 0x08137B04:
                o = max(((st, q) for q, st in starts.items() if st <= a), default=(0, None))[1]
                if o:
                    g = os.path.dirname(o)
                    pins.update(q for q in incs if os.path.dirname(q) == g)
    byfunc = {funcnames[q]: starts[q] for q in starts if q in funcnames}
    srcs = incs + glob.glob("data/*.s") + glob.glob("asm/*.s")
    for p in srcs:  # sym+offset (other than a jump table's +4): everything from sym to the target keeps its place
        for sym, off in re.findall(r"\b(_08[0-9A-Fa-f]{6}|[A-Za-z]\w*)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\b", open(p).read()):
            n = int(off, 0)
            a = int(sym[1:], 16) if sym.startswith("_08") else byfunc.get(sym)
            if a is None or (n == 4 and sym.startswith("_08")):
                continue
            pins.update(q for q in order if a - 4 <= starts[q] <= a + n)
    for p in order:  # raw pc-relative reads (ldr rX, [pc, #N] / add rX, pc, #N) span fixed distances: keep all
        t = open(p).read()  # functions from here to the target
        for n in re.findall(r"(?m)^\s*(?:ldr\s+\w+,\s*\[pc,\s*#|add\s+\w+,\s*pc,\s*#)(\w+)", t):
            lo = starts[p]
            hi = lo + 2 * t.count("\n") + int(n, 0) + 8
            pins.update(q for q in order if lo <= starts[q] <= hi)
    for k, p in enumerate(order):  # code running off its end into the next function: keep both
        last = None
        for l in open(p):
            l = l.split("@")[0].strip()
            if l and not l.startswith(".") and not re.match(r"[\w.]+:\s*$", l) and not l.lower().startswith("thumb_func"):
                last = re.sub(r"^[\w.]+:\s*", "", l).lower()
            elif l.startswith((".4byte", ".word", ".byte", ".2byte", ".hword")):
                last = "data"
        if last is None or not (last == "data" or re.match(r"(b|b\.n|bx|b\.w)\s", last) or
                                re.match(r"pop\s.*pc", last) or re.match(r"mov\s+pc", last)):
            pins.add(p)
            if k + 1 < len(order):
                pins.add(order[k + 1])
    # functions outside the C calling convention (r4-r11 read before written, or changed without being saved)
    # and their callers
    odd = set()
    for p in incs:
        try:
            if not follows_abi(p):
                odd.add(p)
        except Fail:
            pass
    pins |= odd
    oddnames = {funcnames[p] for p in odd if p in funcnames}
    for p in incs:
        if set(re.findall(r"(?m)^\s*bl\s+(\w+)", open(p).read())) & oddnames:
            pins.add(p)
    hand = set()
    for p in incs:  # hand-written asm (unified syntax; agbcc never emits it) may not follow the C calling convention
        t = open(p).read()
        if hand_written(t):
            hand.add(p)
        if (re.search(r"(?m)^\s*(movs|lsls|lsrs|asrs|rors|adds|adcs|subs|sbcs|ands|orrs|eors|bics|mvns|negs|muls|rsbs)\s", t)
                or re.search(r"(?m)^\s*(thumb_func_start|THUMB_FUNC_START_NOALIGN)\b", t)):
            pins.add(p)
    for p in incs:  # a function split over two files (THUMB_FUNC_END of the other one): keep both
        for x in re.findall(r"(?i)thumb_func_end\s+(\w+)", open(p).read()):
            if x != funcnames.get(p):
                pins.add(p)
                if x in byname:
                    pins.add(byname[x])
    for p in incs:  # short branches (b, bcc) into another function: the target keeps its place next to us
        for t in re.findall(r"(?m)^\s*b(?:[a-z]{2})?(?:\.n|\.w)?\s+(\w+)\s*(?:\+\s*\w+)?\s*(?:@.*)?$",
                            open(p).read()):
            if re.fullmatch(r"0x[0-9a-fA-F]+", t):  # absolute address: keep us and the function holding it
                a = int(t, 16) & ~1
                o = max(((st, q) for q, st in starts.items() if st <= a), default=(0, None))[1]
                pins.add(p)
                if o:
                    pins.add(o)
                continue
            o = owner.get(t)
            if o and o != p:
                pins.add(o)
    for p, rs in refs.items():
        for sym, off in rs:
            o = owner.get(sym)
            if o is None:
                continue
            if o != p and (sym != funcnames.get(o) or off):
                pins.add(o)
    # references from other assembly and the linker script
    import glob
    other = (glob.glob("data/*.s") + glob.glob("asm/*.s") + glob.glob("asm/*/*.s") + ["ldscript.txt"] +
             glob.glob("src/*.c") + glob.glob("src/*/*.c") + glob.glob("include/*.h"))
    for f in other:
        for sym, off in re.findall(r"\b(_08[0-9A-Fa-f]+|[A-Za-z]\w*)\b(\s*\+\s*0x[0-9a-fA-F]+)?", open(f).read()):
            o = owner.get(sym)
            if o and (sym != funcnames.get(o) or off):
                pins.add(o)
    # functions hand-written asm calls or takes the address of: it may rely on more than the C convention
    for p in hand:
        for sym in set(re.findall(r"\b(sub_[0-9A-Fa-f]{8}|[A-Za-z]\w+)\b", open(p).read())):
            if sym in byname and byname[sym] != p:
                pins.add(byname[sym])
    # pointer tables (runs of .4byte sym) holding a hand-written function: the same caller runs them all
    handnames = {funcnames[p] for p in hand if p in funcnames}
    for f in glob.glob("data/*.s") + incs:
        run = []
        for l in open(f).read().splitlines() + [""]:
            m = re.match(r"\s*\.4byte\s+(\w+)\s*$", l)
            if m:
                run.append(m.group(1))
                continue
            if set(run) & handnames:
                pins.update(byname[x] for x in run if x in byname)
            run = []
    # callers reading r1-r3/r12 after `bl X` before writing them rely on X leaving them alone: keep X asm
    for p in incs:
        lines = [l.split("@")[0].strip() for l in open(p)]
        for k, l in enumerate(lines):
            m = re.match(r"bl\s+(\w+)\s*$", l)
            if not m or m.group(1) not in byname:
                continue
            live = {"r1", "r2", "r3", "r12"}
            for l2 in lines[k + 1:k + 12]:
                if re.match(r"[\w.]+:\s*$", l2) or not l2:
                    continue  # falling through a label
                if l2.startswith("."):
                    break
                mm = re.match(r"(\w+)(?:\.n)?\s*(.*)", l2)
                mn, ops = mm.group(1).lower(), [o.strip() for o in re.split(r",(?![^{\[]*[}\]])", mm.group(2))] if mm.group(2) else []
                rr = lambda o: {ALIAS.get(x, x) for x in re.findall(r"\b(r1[0-2]|r[0-9]|ip)\b", o.lower())}
                if mn in ("bl", "b", "bx", "pop") or mn.startswith("b") and mn[1:] in COND:
                    used = set().union(*[rr(o) for o in ops]) if ops else set()
                    if used & live and mn in ("bx",):
                        pins.add(byname[m.group(1)])
                    break
                if mn.startswith(("str", "cmp", "cmn", "tst", "push")):
                    srcs, dst = set().union(*[rr(o) for o in ops]), set()
                elif ops:
                    dst = rr(ops[0]) if not mn.startswith("ldm") else set()
                    srcs = set().union(*[rr(o) for o in ops[1:]]) if len(ops) > 1 else set()
                    if len(ops) == 2 and mn not in ("mov", "mvn", "neg") and not mn.startswith("ld"):
                        srcs |= dst
                    if mn.startswith("ldr") and ops and "[" in ",".join(ops[1:]):
                        srcs = set().union(*[rr(o) for o in ops[1:]])
                else:
                    srcs, dst = set(), set()
                if srcs & live:
                    pins.add(byname[m.group(1)])
                    break
                live -= dst
    return pins


def hand_written(t):
    return bool(re.search(r"(?m)^\s*(movs|lsls|lsrs|asrs|rors|adds|adcs|subs|sbcs|ands|orrs|eors|bics|mvns|negs|muls|rsbs)\s", t)
                or re.search(r"(?m)^\s*(thumb_func_start|THUMB_FUNC_START_NOALIGN)\b", t))


def nonmatching_c_incs():
    """asm includes replaced by C under #ifdef NONMATCHING (the #else part of those blocks)"""
    import glob
    out = set()
    for c in glob.glob("src/*.c") + glob.glob("src/*/*.c"):
        t = open(c).read()
        for b in re.finditer(r"^#ifdef NONMATCHING\n", t, re.M):
            e1, e2 = t.find("\n#else\n", b.end()), t.find("\n#endif", b.end())
            if e1 != -1 and e1 < e2:
                out |= set(re.findall(r'asm\("\.include \\"([^\\]+)\\""\)', t[e1:e2]))
    return out


def gstate_list(outp):
    """asm2c.py --gs-list OUT: the functions of the build that get global-state C (tools/gstate2c.py): those the
    C-ABI translation can't take, minus ARM code (stays native) and those with NONMATCHING C. Lines "NAME" and
    "NAME OFFSET" (an entry other code jumps to). Honours AUTO_C_FILES and AUTO_C_SKIP (those stay native)."""
    import glob, os
    allinc = sorted(glob.glob("asm/non_matching/*/*.inc"))
    only = os.environ.get("AUTO_C_FILES", "").split()
    skip = set(os.environ.get("AUTO_C_SKIP", "").split())
    nmc = nonmatching_c_incs()
    funcs, arity = bl_targets(allinc), proto_arity()
    pins = pinned_functions(allinc)
    names, starts, gs = {}, {}, []
    for p in allinc:
        t = open(p).read()
        m = re.search(r"(?m)^(\w+):\s*(?:@\s*0[xX]([0-9a-fA-F]+))?", t)
        if not m:
            continue
        names[p] = m.group(1)
        if m.group(2):
            starts[p] = int(m.group(2), 16)
        if p in nmc or os.path.basename(p)[:-4] in skip:
            continue
        if only and os.path.basename(os.path.dirname(p)) not in only:
            continue
        if re.search(r"(?mi)^\s*(\.arm\b|arm_func_start)", t):
            continue
        if p not in pins:
            try:
                Func(p, funcs, arity, {}).translate()
                continue  # C-ABI translation
            except Fail:
                pass
        gs.append(p)
    # entries: labels of a global-state function that other code names, sym+offset targets, hard-coded addresses
    order = sorted(starts, key=starts.get)
    def owner(a):
        best = None
        for q in order:
            if starts[q] <= a:
                best = q
            else:
                break
        return best
    gsset = set(gs)
    ent = {p: set() for p in gs}
    srcs = allinc + glob.glob("data/*.s") + glob.glob("asm/*.s")
    for f in srcs:
        t = open(f).read()
        for lab in set(re.findall(r"\b_(08[0-9A-Fa-f]{6})\b(?!:)", t)):
            a = int(lab, 16)
            o = owner(a)
            if o in gsset and o != f and a != starts[o]:
                ent[o].add(a - starts[o])
        for sym, off in re.findall(r"\b(_08[0-9A-Fa-f]{6}|[A-Za-z]\w*)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\b", t):
            a = int(sym[1:], 16) if sym.startswith("_08") else next((starts[q] for q in starts if names.get(q) == sym), None)
            if a is None:
                continue
            a += int(off, 0)
            o = owner(a & ~1)
            if o in gsset:
                ent[o].add((a & ~1) - starts[o])
        for v in re.findall(r"(?m)^\s*\.4byte\s+(0x0?8[0-9a-fA-F]{6})\s*$", t):
            a = int(v, 16) & ~1
            o = owner(a)
            if o in gsset and a < 0x08137B04:
                ent[o].add(a - starts[o])
    with open(outp, "w") as fo:
        for p in gs:
            fo.write(names[p] + "\n")
            for e in sorted(ent[p]):
                if e:
                    fo.write("%s %X\n" % (names[p], e))
    print("asm2c: %d functions for global-state C" % len(gs), file=sys.stderr)


def gstate_copy(p, gsnames):
    """src/auto/gstate/NAME.inc: the asm of a global-state function with every global-state function name renamed NAME__asm (except
    plain data pointers, which go to the C wrapper) and a NAME__base data label at its start"""
    import os
    t = open(p).read()
    name = re.search(r"(?m)^(\w+):", t).group(1)
    pat = re.compile(r"\b(%s)\b" % "|".join(sorted(gsnames, key=len, reverse=True)))
    out = []
    for l in t.splitlines():
        if re.match(r"\s*\.4byte\s+\w+\s*$", l):
            out.append(l)
            continue
        l2 = pat.sub(lambda m: m.group(1) + "__asm", l)
        out.append(l2)
        if re.match(r"%s__asm:" % name, l2):
            out.append(".global %s__base\n%s__base:" % (name, name))
    os.makedirs("src/auto/gstate", exist_ok=True)
    q = "src/auto/gstate/%s.inc" % name
    open(q, "w").write("\n".join(out) + "\n")
    return q


def main():
    # asm2c.py OUT.c INC...  |  asm2c.py --s FILE.s OUT.c [--gs LIST]: translate the asm includes left in FILE.s
    # (compiler output) and remove the translated ones from it; with LIST, global-state functions become renamed copies
    if sys.argv[1] == "--gs-list":
        return gstate_list(sys.argv[2])
    if sys.argv[1] == "--s":
        sfile, outp = sys.argv[2], sys.argv[3]
        st = open(sfile).read()
        incs = re.findall(r'^\s*\.include\s+"(asm/non_matching/[^"]+\.inc)"', st, re.M)
    else:
        sfile, outp, incs = None, sys.argv[1], sys.argv[2:]
    import glob
    allinc = sorted(glob.glob("asm/non_matching/*/*.inc"))
    funcs, arity = bl_targets(allinc), proto_arity()
    pins = pinned_functions(allinc)
    fs, bad = [], []
    stackargs = {}
    import os
    skip = set(os.environ.get("AUTO_C_SKIP", "").split())  # bisecting: function names to keep as asm
    for p in incs:
        if os.path.basename(p)[:-4] in skip:
            bad.append((p, "AUTO_C_SKIP"))
            continue
        if p in pins:
            bad.append((p, "entered or read from elsewhere"))
            continue
        try:
            f = Func(p, funcs, arity, {})
            f.translate()
            stackargs[f.name] = 4 + f.nargs
            fs.append(p)
        except Fail as e:
            bad.append((p, str(e)))
    done, lines, callees, data = [], [], set(), set()
    for p in fs:
        f = Func(p, funcs, arity, stackargs)
        try:
            body = f.translate()
        except Fail as e:
            bad.append((p, str(e)))
            continue
        lines += [""] + body
        callees |= f.callees
        data |= f.data
        done.append((p, f.name))
    names = {n for _, n in done}
    hdr = ['#include "auto.h"', ""]
    for c in sorted(callees - names):
        if c in BUILTINS:  # agbcc knows these names; declare under another C name
            hdr.append('u32 auto_%s() asm("%s");' % (c, c))
            lines = [re.sub(r"\b%s\(" % c, "auto_%s(" % c, l) for l in lines]
        else:
            hdr.append("u32 %s();" % c)
    for _, n in done:
        hdr.append("u32 %s(u32, u32, u32, u32%s);" % (n, ", u32" * (stackargs[n] - 4)))
    for x in sorted(data - callees - names):
        hdr.append("extern u8 %s[];" % x)
    open(outp, "w").write("\n".join(hdr + lines) + "\n")
    for p, e in bad:
        print("asm2c: kept asm %s: %s" % (p, e), file=sys.stderr)
    if sfile:
        gone = {p for p, _ in done}
        gsnames = set()
        if "--gs" in sys.argv:
            gsnames = {l.split()[0] for l in open(sys.argv[sys.argv.index("--gs") + 1]) if l.strip()}
        def repl(m):
            p = m.group(1)
            if p in gone:
                return ""
            n = os.path.basename(p)[:-4]
            if n in gsnames or (gsnames and re.search(r"\b(%s)\b" % "|".join(gsnames), open(p).read())):
                # global-state functions, and native asm naming them (its branches keep reaching the copies)
                return '.include "%s"\n' % gstate_copy(p, gsnames)
            return m.group(0)
        st = re.sub(r'^\s*\.include\s+"(asm/non_matching/[^"]+\.inc)"\s*\n', repl, st, flags=re.M)
        open(sfile, "w").write(st)
    print("asm2c: %d translated, %d kept as asm" % (len(done), len(bad)), file=sys.stderr)


main()
