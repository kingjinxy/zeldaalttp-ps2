#!/usr/bin/env python3
"""Mechanical Thumb -> C translation of the functions still in asm/non_matching, for the PC/PS2 build
(not matching, not readable: a stand-in until each function is decompiled).

    python3 tools/thumb2c.py OUTDIR [NAME ...]      # NAME = src/NAME.c (default: all)

Writes OUTDIR/NAME_tr.c holding every function NAME.c still includes from asm, plus OUTDIR/report.txt with
the functions it could not translate (each becomes a stub that calls gba_untranslated()).

Model (see include/gba_tr.h):
- every translated function is `u32 f(u32 r0, u32 r1, u32 r2, u32 r3)`; r4-r12, lr and the flags are
  locals; the stack lives in GBA memory with its pointer in the global gba_sp, so stack arguments and
  callee-saved pushes behave as on the GBA.
- memory goes through RD8/RD16/RD32/WR8/WR16/WR32 (gba_tr.h maps GBA address ranges to the host).
- literal-pool symbols become the symbol's address; a call is a C call; `bl _call_via_rN` is an indirect
  call; `mov pc, rN` is a jump through a table of label addresses (GCC computed goto); `bx` and
  `pop {pc}` return r0.
shortcut: unaligned ldr/ldrh do not rotate as on the ARM7; r1-r3 after a call are left as before the
call (only r0 is the result). Upgrade if a comparison run against mGBA shows a difference there.
"""
import collections, glob, os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ALU_S = {"movs", "adds", "subs", "lsls", "lsrs", "asrs", "rors", "ands", "orrs", "eors", "bics", "mvns",
         "negs", "muls", "adcs", "sbcs", "rsbs"}
COND = {"eq": "Z", "ne": "!Z", "cs": "C", "hs": "C", "cc": "!C", "lo": "!C", "mi": "N", "pl": "!N",
        "vs": "V", "vc": "!V", "hi": "(C && !Z)", "ls": "(!C || Z)", "ge": "(N == V)", "lt": "(N != V)",
        "gt": "(!Z && N == V)", "le": "(Z || N != V)"}
REGS = {f"r{i}": f"r{i}" for i in range(13)}
REGS.update({"sp": "sp", "lr": "lr", "r13": "sp", "r14": "lr", "ip": "r12", "fp": "r11", "sl": "r10",
             "sb": "r9"})


class Unsupported(Exception):
    pass


ROM = open(os.path.join(ROOT, "baserom.gba"), "rb").read()
VALUE_NAMES = {}  # address -> data or function symbol, for words read straight from the ROM
NAME_ADDRS = {}
EXTRA = set()  # called addresses inside other functions
ALL_TR = set()  # every translated entry point (called through gba_cpu, not the C ABI)


def rom_word(a):
    o = a - 0x08000000
    if not 0 <= o <= len(ROM) - 4:
        raise Unsupported(f"read outside the ROM at {a:#x}")
    return int.from_bytes(ROM[o:o + 4], "little")


def addr_names():
    out = {}
    nm = subprocess.run(["arm-none-eabi-nm", os.path.join(ROOT, "zeldaalttp.elf")], capture_output=True,
                        text=True).stdout
    for line in nm.splitlines():
        f = line.split()
        if len(f) != 3 or f[2].startswith((".", "$")):
            continue
        a = int(f[0], 16)
        NAME_ADDRS.setdefault(f[2], a & ~1)
        if f[1] in "Tt" and not f[2].startswith("_0"):
            out.setdefault(a & ~1, f[2])
        if f[1] in "TtDdBbRr" and not f[2].startswith("_"):
            VALUE_NAMES.setdefault(a, f[2])
    return out


def num(s):
    s = s.strip().lstrip("#")
    return int(s, 0)


def reg(s):
    s = s.strip().lower()
    if s not in REGS:
        raise Unsupported(f"register {s}")
    return REGS[s]


def reglist(s):
    out = []
    for part in s.strip().strip("{}").split(","):
        part = part.strip()
        if "-" in part:
            a, b = (int(x.strip()[1:]) for x in part.split("-"))
            out += [f"r{i}" for i in range(a, b + 1)]
        elif part:
            out.append(reg(part) if part.lower() not in ("pc", "r15") else "pc")
    return out


def split_ops(s):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "[{":
            depth += 1
        elif ch in "]}":
            depth -= 1
        if ch == "," and depth == 0:
            out.append(cur.strip())
            cur = ""
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def parse_inc(path):
    """-> (entries, items): items are ('label', name) / ('insn', mnemonic, ops, text) / ('data', size, expr)."""
    items, entries, pending_func = [], [], False
    for raw in open(path):
        line = raw.split("@")[0].rstrip()
        if not line.strip():
            continue
        s = line.strip()
        m = re.match(r"(THUMB_FUNC_START(?:_NOALIGN)?|ARM_FUNC_START|thumb_func_start|arm_func_start)\s+(\w+)", s)
        if m:
            if m.group(1).lower().startswith("arm"):
                raise Unsupported("ARM function")
            entries.append(m.group(2))
            continue
        if s.startswith((".thumb_func",)):
            pending_func = True
            continue
        if s.lower().startswith(("thumb_func_end", "arm_func_end", ".syntax", ".thumb", ".align", ".global",
                                 ".pool", ".section", ".text", ".balign", ".size", ".type")):
            continue
        if s.startswith(".arm"):
            raise Unsupported("ARM code")
        m = re.match(r"^(\w+):(.*)$", s)
        if m:
            name = m.group(1)
            if pending_func or (not name.startswith("_") and name not in entries):
                if name not in entries:
                    entries.append(name)
            pending_func = False
            items.append(("label", name))
            if m.group(2).strip():
                s = m.group(2).strip()
            else:
                continue
        m = re.match(r"^\.(4byte|word|2byte|hword|short|byte)\s+(.*)$", s, re.I)
        if m:
            size = {"4byte": 4, "word": 4, "2byte": 2, "hword": 2, "short": 2, "byte": 1}[m.group(1).lower()]
            for e in split_ops(m.group(2)):
                items.append(("data", size, e))
            continue
        if s.startswith("."):
            raise Unsupported(f"directive {s.split()[0]}")
        parts = s.split(None, 1)
        items.append(("insn", parts[0].lower(), split_ops(parts[1]) if len(parts) > 1 else [], s))
    return entries, items


class Func:
    def __init__(self, entries, items, names, local_funcs):
        self.entries, self.items, self.names, self.local_funcs = entries, items, names, local_funcs
        self.externs = set()
        self.cur = None
        self.prev = None
        self.pool = {}       # label -> C expression of the first word stored there
        self.tables = {}     # label -> [labels] for jump tables
        self.used_labels = set()
        labels = [it[1] for it in items if it[0] == "label"]
        self.addr = {}  # index in items -> address
        a = NAME_ADDRS.get(entries[0])
        for k, it in enumerate(items):
            if it[0] == "label":
                m = re.fullmatch(r"_(0[89][0-9A-Fa-f]{6})", it[1])
                a = int(m.group(1), 16) if m else NAME_ADDRS.get(it[1], a)
                continue
            if a is None:
                continue
            if it[0] == "insn" and a & 1:
                a += 1
            self.addr[k] = a
            a += it[1] if it[0] == "data" else (4 if it[1] == "bl" else 2)
        # second entry points that other code calls by address get a label (and their own C function)
        new_items, new_addr = [], {}
        for k, it in enumerate(items):
            a = self.addr.get(k)
            if it[0] == "insn" and a in EXTRA and names.get(a) not in entries:
                new_items.append(("label", names[a]))
                entries.append(names[a])
            if a is not None:
                new_addr[len(new_items)] = a
            new_items.append(it)
        self.items = items = new_items
        self.addr = new_addr
        labels = [it[1] for it in items if it[0] == "label"]
        self.labels = set(labels)
        # data following a label: literal pools and jump tables
        i = 0
        while i < len(items):
            if items[i][0] == "label":
                j = i + 1
                words = []
                while j < len(items) and items[j][0] == "data":
                    words.append(items[j])
                    j += 1
                if words:
                    if all(w[1] == 4 and w[2] in self.labels for w in words):
                        self.tables[items[i][1]] = [w[2] for w in words]
                    if words[0][1] == 4:
                        self.pool[items[i][1]] = words[0][2]
                i = j
            else:
                i += 1

    def sym(self, name):
        if name in self.labels:
            m = re.fullmatch(r"_(0[89][0-9A-Fa-f]{6})", name)
            if not m:
                raise Unsupported(f"address of label {name}")
            return f"0x{m.group(1).upper()}u"  # tables in ROM are read from the ROM image
        if name not in self.local_funcs:
            self.externs.add(name)
        return f"SYM({name})"

    def expr(self, e):
        e = e.strip()
        if re.fullmatch(r"-?(0x[0-9a-fA-F]+|\d+)", e):
            return f"0x{int(e, 0) & 0xFFFFFFFF:X}u"
        m = re.fullmatch(r"(\w+)\s*([+-])\s*(0x[0-9a-fA-F]+|\d+)", e)
        if m:
            return f"({self.sym(m.group(1))} {m.group(2)} {int(m.group(3), 0)})"
        if re.fullmatch(r"\w+", e):
            return self.sym(e)
        raise Unsupported(f"data expression {e}")

    def rom_value(self, a):
        v = rom_word(a)
        if v in VALUE_NAMES:
            return self.sym(VALUE_NAMES[v]) if VALUE_NAMES[v] not in self.labels else f"0x{v:X}u"
        return f"0x{v:X}u"

    def operand(self, o):
        o = o.strip()
        if o.startswith("#"):
            return f"0x{num(o) & 0xFFFFFFFF:X}u"
        return reg(o)

    def call(self, target):
        target = target.strip()
        m = re.fullmatch(r"_call_via_(\w+)", target)
        if m:
            return f"{self.link()} SAVE_REGS; gba_call_ptr({reg(m.group(1))}); LOAD_REGS;"
        if re.fullmatch(r"0x[0-9a-fA-F]+|_0[89][0-9A-Fa-f]{6}", target):
            a = int(target.lstrip("_"), 16)
            if a & ~1 not in self.names:
                raise Unsupported(f"call to unnamed address {target}")
            target = self.names[a & ~1]
        if target in ALL_TR:
            self.externs.add(("tr", target))
            return f"{self.link()} SAVE_REGS; {target}_tr(); LOAD_REGS;"
        self.externs.add(("func", target))
        return f"gba_cpu.sp = sp; r0 = {target}(r0, r1, r2, r3);"

    def link(self):
        # bl sets lr to the next instruction (Thumb bit set); callees may push it and pop it into a register
        return f"lr = 0x{self.cur + 5:08X}u;" if self.cur is not None else "lr = 0;"

    def mem(self, op, ops):
        size = {"ldr": 32, "str": 32, "ldrb": 8, "strb": 8, "ldrh": 16, "strh": 16, "ldrsb": 8, "ldsb": 8,
                "ldrsh": 16, "ldsh": 16}[op]
        rd = reg(ops[0])
        addr = ops[1]
        if not addr.startswith("["):
            # ldr rd, label (literal pool)
            lab = addr.strip()
            if lab.startswith("="):
                return f"{rd} = {self.expr(lab[1:])};"
            if lab not in self.pool:
                m = re.fullmatch(r"_(0[89][0-9A-Fa-f]{6})", lab)
                if not m:
                    raise Unsupported(f"pc-relative load from {lab}")
                return f"{rd} = {self.rom_value(int(m.group(1), 16))};"
            return f"{rd} = {self.expr(self.pool[lab])};"
        inner = split_ops(addr.strip()[1:-1])
        base = inner[0].strip().lower()
        if base in ("pc", "r15"):
            if op != "ldr" or self.cur is None or len(inner) != 2:
                raise Unsupported("raw pc-relative access")
            return f"{rd} = {self.rom_value(((self.cur + 4) & ~3) + num(inner[1]))};"
        a = reg(base)
        if len(inner) > 1:
            off = inner[1].strip()
            a = f"({a} + {self.operand(off)})"
        if op.startswith("st"):
            return f"WR{size}({a}, {rd});"
        if op in ("ldrsb", "ldsb"):
            return f"{rd} = (u32)(s32)(s8)RD8({a});"
        if op in ("ldrsh", "ldsh"):
            return f"{rd} = (u32)(s32)(s16)RD16({a});"
        return f"{rd} = RD{size}({a});"

    def insn(self, op, ops, text):
        if op.endswith(".n") or op.endswith(".w"):
            op = op[:-2]
        if op in ALU_S:
            op = op[:-1]
        if op == "rsb":
            op = "neg"
        if op == "swi":
            op = "svc"
        if op == "ldm" or op == "ldmia":
            op = "ldmia"
        if op == "stm" or op == "stmia":
            op = "stmia"
        n = len(ops)
        if op in ("b",) or (op[0] == "b" and op[1:] in COND):
            lab = ops[0]
            if lab not in self.labels:
                if re.fullmatch(r"0x[0-9a-fA-F]+|_0[89][0-9A-Fa-f]{6}", lab):
                    if int(lab.lstrip("_"), 16) & ~1 not in self.names:
                        raise Unsupported(f"branch into another function {lab}")
                    lab = self.names[int(lab.lstrip("_"), 16) & ~1]
                if lab in self.local_funcs or lab in self.names.values() or re.fullmatch(r"\w+", lab):
                    # tail jump to another function
                    if lab in ALL_TR:
                        self.externs.add(("tr", lab))
                        tail = f"{{ SAVE_REGS; {lab}_tr(); return; }}"
                    else:
                        self.externs.add(("func", lab))
                        tail = f"{{ gba_cpu.sp = sp; r0 = {lab}(r0, r1, r2, r3); SAVE_REGS; return; }}"
                    return tail if op == "b" else f"if ({COND[op[1:]]}) {tail}"
                raise Unsupported(f"branch to {lab}")
            self.used_labels.add(lab)
            return f"goto L{lab};" if op == "b" else f"if ({COND[op[1:]]}) goto L{lab};"
        if op == "bl":
            return self.call(ops[0])
        if op == "bx":
            r = ops[0].strip().lower()
            p = self.prev
            if r in ("lr", "r14") or (p and p[1] in ("pop", "ldmfd") and r in reglist(p[2][-1])):
                return "SAVE_REGS; return;"
            # jump through a register (function table): a call whose return goes straight to our caller
            return f"SAVE_REGS; gba_call_ptr({reg(r)}); return;"
        if op in ("push", "stmfd") or (op == "stmdb" and ops[0].lower().startswith("sp")):
            rl = reglist(ops[-1])
            out = [f"sp -= {4 * len(rl)};"]
            for k, r in enumerate(rl):
                out.append(f"WR32(sp + {4 * k}, {'0' if r == 'pc' else r});")
            return " ".join(out)
        if op in ("pop", "ldmfd"):
            rl = reglist(ops[-1])
            out = []
            for k, r in enumerate(rl):
                if r == "pc":
                    continue
                out.append(f"{r} = RD32(sp + {4 * k});")
            out.append(f"sp += {4 * len(rl)};")
            if "pc" in rl:
                out.append("SAVE_REGS; return;")
            return " ".join(out)
        if op in ("ldmia", "stmia"):
            base = ops[0].rstrip("!").strip()
            wb = ops[0].strip().endswith("!")
            b = reg(base)
            rl = reglist(ops[1])
            out = [f"{{ u32 a_ = {b};"]
            for k, r in enumerate(rl):
                out.append(f"{r} = RD32(a_ + {4 * k});" if op == "ldmia" else f"WR32(a_ + {4 * k}, {r});")
            if wb and not (op == "ldmia" and b in rl):
                out.append(f"{b} = a_ + {4 * len(rl)};")
            out.append("}")
            return " ".join(out)
        if op in ("ldr", "str", "ldrb", "strb", "ldrh", "strh", "ldrsb", "ldsb", "ldrsh", "ldsh"):
            return self.mem(op, ops)
        if op == "svc":
            return f"gba_swi({num(ops[0])}, &r0, &r1, &r2, &r3);"
        if op == "mov":
            d = ops[0].strip().lower()
            if d in ("pc", "r15") and ops[1].strip().lower() in ("lr", "r14"):
                return "SAVE_REGS; return;"
            if d in ("pc", "r15"):
                targets = sorted({it[2] for it in self.items if it[0] == "data" and it[2] in self.labels})
                if not targets or not all(re.fullmatch(r"_0[89][0-9A-Fa-f]{6}", t) for t in targets):
                    raise Unsupported("jump without a table")
                self.used_labels.update(targets)
                cases = " ".join(f"case 0x{t[1:].upper()}u: goto L{t};" for t in targets)
                return f"switch ({reg(ops[1])} & ~1u) {{ {cases} default: gba_bad_jump({reg(ops[1])}); return; }}"
            rd, src = reg(ops[0]), self.operand(ops[1])
            if ops[1].startswith("#"):
                return f"{rd} = {src}; N = 0; Z = {rd} == 0;"
            if src == "pc":
                raise Unsupported("mov from pc")
            low = re.fullmatch(r"r[0-7]", rd) and re.fullmatch(r"r[0-7]", src)
            return f"{rd} = {src};" + (f" N = {rd} >> 31; Z = {rd} == 0; C = 0; V = 0;" if low else "")
        if op in ("add", "sub", "adc", "sbc"):
            if n == 2:
                if ops[0].strip().lower() in ("sp", "r13"):
                    return f"sp {'+' if op == 'add' else '-'}= {self.operand(ops[1])};"
                ops = [ops[0], ops[0], ops[1]]
            rd = reg(ops[0])
            if ops[1].strip().lower() in ("pc", "r15"):
                raise Unsupported("add from pc")
            a, b = reg(ops[1]), self.operand(ops[2])
            hi = not all(re.fullmatch(r"r[0-7]", x) for x in (rd, a) if True) or rd == "sp" or a == "sp"
            if op == "add" and hi:
                return f"{rd} = {a} + {b};"
            if op == "sub" and (rd == "sp" or a == "sp"):
                return f"{rd} = {a} - {b};"
            fn = {"add": "ADDS", "sub": "SUBS", "adc": "ADCS", "sbc": "SBCS"}[op]
            return f"{rd} = {fn}({a}, {b});"
        if op in ("cmp", "cmn"):
            a, b = reg(ops[0]), self.operand(ops[1])
            return f"{'SUBS' if op == 'cmp' else 'ADDS'}({a}, {b});"
        if op == "tst":
            return f"{{ u32 t_ = {reg(ops[0])} & {self.operand(ops[1])}; N = t_ >> 31; Z = t_ == 0; }}"
        if op == "neg":
            rd, rm = reg(ops[0]), reg(ops[1])
            return f"{rd} = SUBS(0, {rm});"
        if op in ("and", "orr", "eor", "bic", "mul", "mvn"):
            if op == "mvn":
                rd, val = reg(ops[0]), f"~{reg(ops[1])}"
            else:
                if n == 2:
                    ops = [ops[0], ops[0], ops[1]]
                rd, a, b = reg(ops[0]), reg(ops[1]), self.operand(ops[2])
                val = {"and": f"{a} & {b}", "orr": f"{a} | {b}", "eor": f"{a} ^ {b}", "bic": f"{a} & ~{b}",
                       "mul": f"{a} * {b}"}[op]
            return f"{rd} = {val}; N = {rd} >> 31; Z = {rd} == 0;"
        if op in ("lsl", "lsr", "asr", "ror"):
            if n == 2:
                ops = [ops[0], ops[0], ops[1]]
            rd, rm, s = reg(ops[0]), reg(ops[1]), self.operand(ops[2])
            fn = {"lsl": "LSLS", "lsr": "LSRS", "asr": "ASRS", "ror": "RORS"}[op]
            if ops[2].startswith("#") and op in ("lsr", "asr") and num(ops[2]) == 0:
                s = "32u"
            return f"{rd} = {fn}({rm}, {s});"
        if op == "nop":
            return ";"
        raise Unsupported(f"instruction {text}")

    def fall_through(self):
        """C for running on into the next function when the code does not end in a jump or return."""
        last = max((k for k, it in enumerate(self.items) if it[0] == "insn"), default=None)
        if last is None:
            return None
        op, ops = self.items[last][1], self.items[last][2]
        op = op[:-2] if op.endswith((".n", ".w")) else op
        if op in ("b", "bx") or (op in ("pop", "ldmfd") and "pc" in reglist(ops[-1])) or \
                (op == "mov" and ops[0].strip().lower() in ("pc", "r15")):
            return None
        a = self.addr.get(last)
        if a is None:
            raise Unsupported("falls through at an unknown address")
        a += 4 if op == "bl" else 2
        if a not in self.names or self.names[a] not in ALL_TR:
            raise Unsupported(f"falls through into {a:#x}")
        self.externs.add(("tr", self.names[a]))
        return f"{{ SAVE_REGS; {self.names[a]}_tr(); return; }}  /* falls through into the next function */"

    def body(self):
        out = []
        for k, it in enumerate(self.items):
            self.cur = self.addr.get(k)
            if it[0] == "label":
                out.append(("label", it[1]))
            elif it[0] == "insn":
                out.append(("code", self.insn(it[1], it[2], it[3]), it[3]))
                self.prev = it
        ft = self.fall_through()
        if ft:
            out.append(("code", ft, "(end)"))
        return out


def emit_function(name, entry_label, entries, body, func, first):
    lines = [f"void {name}_tr(void);",
             f"u32 {name}(u32 a, u32 b, u32 c, u32 d) {{ return gba_enter({name}_tr, a, b, c, d); }}",
             f"void {name}_tr(void)", "{",
             "    u32 r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, sp, lr, N, Z, C, V;",
             "    LOAD_REGS;"]
    if not first:
        lines.append(f"    goto L{entry_label};")
        func.used_labels.add(entry_label)
    for kind, *rest in body:
        if kind == "label":
            lines.append(f"L{rest[0]}:;")
        else:
            lines.append(f"    {rest[0]}  /* {rest[1]} */")
    lines.append("    SAVE_REGS;")
    lines.append("}")
    return lines


def translate_inc(path, names, local_funcs, report):
    try:
        entries, items = parse_inc(path)
        if not entries:
            raise Unsupported("no entry point")
        func = Func(entries, items, names, local_funcs)
        body = func.body()
    except Unsupported as e:
        stem = os.path.basename(path)[:-4]
        report.append(f"{path}: {e}")
        return [stem], [f"void {stem}_tr(void);", f"u32 {stem}(u32 a, u32 b, u32 c, u32 d) {{ return gba_enter({stem}_tr, a, b, c, d); }}",
                        f"void {stem}_tr(void) {{ gba_untranslated(\"{stem}\"); }}"], set()
    lines = []
    for k, e in enumerate(entries):
        lines += emit_function(e, e, entries, body, func, k == 0)
    # jump tables reference their table by label: JUMP_TABLE needs the table of the function
    text = "\n".join(lines)
    # remove label definitions that nothing jumps to (avoids -Wunused-label noise)
    out = []
    for l in text.splitlines():
        m = re.fullmatch(r"L(\w+):;", l)
        if m and m.group(1) not in func.used_labels:
            continue
        out.append(l)
    return entries, out, func.externs


def main():
    outdir = sys.argv[1]
    want = sys.argv[2:]
    os.makedirs(outdir, exist_ok=True)
    names = addr_names()
    for inc in glob.glob(os.path.join(ROOT, "asm", "non_matching", "*", "*.inc")):
        text = open(inc).read()
        here = set(re.findall(r"^(_0[89][0-9A-Fa-f]{6}):", text, re.M))
        for m in re.finditer(r"^\s+(b[\w.]*)\s+(0x[0-9a-fA-F]+|_0[89][0-9A-Fa-f]{6})\s*$", text, re.M):
            t = m.group(2)
            if t.startswith("_") and t in here and m.group(1) != "bl":
                continue
            a = int(t.lstrip("_"), 16) & ~1
            if a not in names:
                EXTRA.add(a)
                names[a] = f"sub_{a:08X}"
    for inc in glob.glob(os.path.join(ROOT, "asm", "non_matching", "*", "*.inc")):
        try:
            ALL_TR.update(parse_inc(inc)[0])
        except Unsupported:
            ALL_TR.add(os.path.basename(inc)[:-4])
    ALL_TR.update(names[a] for a in EXTRA)
    report, total, bad = [], 0, 0
    for src in sorted(glob.glob(os.path.join(ROOT, "src", "*.c"))):
        stem = os.path.basename(src)[:-2]
        if want and stem not in want:
            continue
        incs = re.findall(r'^asm\("\.include \\"(asm/non_matching/[^"\\]+\.inc)\\""\);', open(src).read(), re.M)
        if not incs:
            continue
        local = set()
        for inc in incs:
            try:
                local.update(parse_inc(os.path.join(ROOT, inc))[0])
            except Unsupported:
                local.add(os.path.basename(inc)[:-4])
        body, externs = [], set()
        for inc in incs:
            n0 = len(report)
            ents, lines, ex = translate_inc(os.path.join(ROOT, inc), names, local, report)
            total += 1
            bad += len(report) != n0
            body += lines + [""]
            externs |= ex
        head = ["/* Generated by tools/thumb2c.py from asm/non_matching: do not edit. */", '#include "gba_tr.h"', ""]
        funcs = set(e[1] for e in externs if isinstance(e, tuple)) | local
        for f in sorted(funcs):
            head.append(f"u32 {f}(u32, u32, u32, u32);")
        for f in sorted(set(e[1] for e in externs if isinstance(e, tuple) and e[0] == "tr") | local):
            head.append(f"void {f}_tr(void);")
        for d in sorted(e for e in externs if isinstance(e, str)):
            if d not in funcs:
                head.append(f"extern char {d}[];")
        open(os.path.join(outdir, f"{stem}_tr.c"), "w").write("\n".join(head + [""] + body))
    # entry points inside asm files that did not translate
    defined, wanted = set(), set()
    for c in glob.glob(os.path.join(outdir, "*_tr.c")):
        if c.endswith("missing_tr.c"):
            continue
        t = open(c).read()
        defined |= set(re.findall(r"^void (\w+)_tr\(void\)$|^void (\w+)_tr\(void\) \{", t, re.M) and
                       [a or b for a, b in re.findall(r"^void (\w+)_tr\(void\)$|^void (\w+)_tr\(void\) \{", t, re.M)])
        wanted |= set(re.findall(r"\b(\w+)_tr\(\);", t))
    miss = ['#include "gba_tr.h"'] + [
        f"void {f}_tr(void) {{ gba_untranslated(\"{f}\"); }}\nu32 {f}(u32 a, u32 b, u32 c, u32 d) "
        f"{{ return gba_enter({f}_tr, a, b, c, d); }}" for f in sorted(wanted - defined)]
    open(os.path.join(outdir, "missing_tr.c"), "w").write("\n".join(miss) + "\n")
    open(os.path.join(outdir, "report.txt"), "w").write("\n".join(report) + "\n")
    print(f"{total} asm files, {bad} not translated (see {outdir}/report.txt)")


if __name__ == "__main__":
    main()
