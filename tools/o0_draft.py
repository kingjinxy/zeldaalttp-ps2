#!/usr/bin/env python3
"""C draft of an agbcc -O0 function (fs_game), as a starting point for matching decomp.

    python3 tools/o0_draft.py FUNC [FUNC ...]     # FUNC = name of an asm/non_matching/*/FUNC.inc

-O0 code keeps every variable in a stack slot and evaluates each statement from scratch, so symbolic
execution of each basic block rebuilds the statements: registers hold expressions, a store is an
assignment, `bl` is a call, `cmp` + branch is `if (...) goto`. The draft keeps gotos and raw offsets
(`this->f_15` where entity.h has no name); bitfield writes (load, and mask, orr, store) become plain
assignments marked `/* bf */`. Not compilable as is; it saves reading the asm.
"""
import glob, os, re, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# Entity field names by offset, from include/entity.h (top level only)
ENTITY = {}
for line in open(os.path.join(ROOT, "include", "entity.h")):
    m = re.match(r"\s*/\* 0x([0-9A-Fa-f]+) \*/\s+(?:const\s+)?(?:struct\s+)?\w+\*?\s*\*?\s*(\w+)", line)
    if m and "union" not in line and not m.group(2).startswith("filler"):
        ENTITY.setdefault(int(m.group(1), 16), m.group(2))
ENTITY.update({0x30: "x.HALF.LO", 0x32: "x.HALF.HI", 0x34: "y.HALF.LO", 0x36: "y.HALF.HI", 0x38: "z.HALF.LO",
               0x3A: "z.HALF.HI"})
FUNCS = {}
import subprocess
for _l in subprocess.run(["arm-none-eabi-nm", os.path.join(ROOT, "zeldaalttp.elf")], capture_output=True,
                         text=True).stdout.splitlines():
    _f = _l.split()
    if len(_f) == 3 and _f[1] in "Tt" and not _f[2].startswith(("_0", "$")):
        FUNCS.setdefault(int(_f[0], 16) & ~1, _f[2])
SIZES = {"gUnknown_03006A30": 0x90}  # arrays of structs: element size

COND = {"beq": "==", "bne": "!=", "bcs": ">=u", "bhs": ">=u", "bcc": "<u", "blo": "<u", "bhi": ">u",
        "bls": "<=u", "bge": ">=", "blt": "<", "bgt": ">", "ble": "<=", "bmi": "<0", "bpl": ">=0"}


class E:
    """Expression tree: op in 'const', 'var', 'load', 'call', or a C operator."""
    def __init__(self, op, *a, size=None):
        self.op, self.a, self.size = op, a, size

    def __eq__(self, o):
        return isinstance(o, E) and (self.op, self.a, self.size) == (o.op, o.a, o.size)

    def __hash__(self):
        return hash((self.op, self.a, self.size))


def const(v):
    return E("const", v & 0xFFFFFFFF)


def is_c(e, v=None):
    return e.op == "const" and (v is None or e.a[0] == v)


def linear(e):
    """e as (base terms, constant): {expr: factor}, c."""
    if e.op == "const":
        return {}, e.a[0]
    if e.op == "+":
        t1, c1 = linear(e.a[0])
        t2, c2 = linear(e.a[1])
        for k, v in t2.items():
            t1[k] = t1.get(k, 0) + v
        return t1, c1 + c2
    if e.op == "-" and is_c(e.a[1]):
        t, c = linear(e.a[0])
        return t, c - e.a[1].a[0]
    if e.op == "*" and is_c(e.a[1]):
        t, c = linear(e.a[0])
        f = e.a[1].a[0]
        return {k: v * f for k, v in t.items()}, c * f
    if e.op == "<<" and is_c(e.a[1]):
        t, c = linear(e.a[0])
        f = 1 << e.a[1].a[0]
        return {k: v * f for k, v in t.items()}, c * f
    return {e: 1}, 0


def simplify(e):
    if e.op in ("+", "-", "<<", "*") and all(isinstance(x, E) for x in e.a):
        t, c = linear(e)
        t = {k: v for k, v in t.items() if v}
        if not t:
            return const(c)
        out = None
        for k, v in sorted(t.items(), key=lambda kv: -1 if kv[0].op == "sym" else kv[1]):
            term = k if v == 1 else E("*", k, const(v))
            out = term if out is None else E("+", out, term)
        c = c & 0xFFFFFFFF
        if c:
            out = E("-", out, const(-c & 0xFFFFFFFF)) if c >= 0x80000000 else E("+", out, const(c))
        return out
    return e


def fmt(e, prec=99):
    op = e.op
    if op == "const":
        v = e.a[0]
        return str(v) if v < 10 else (f"-{-(v - (1 << 32))}" if v >= 0xFFFF0000 else hex(v))
    if op in ("var", "sym"):
        return e.a[0]
    if op == "frame":
        return f"&v{e.a[0]}"
    if op == "call":
        return f"{e.a[0]}({', '.join(fmt(x) for x in e.a[1])})"
    if op == "load":
        return lvalue(e.a[0], e.size)
    if op == "cast":
        return f"({e.a[0]}){fmt(e.a[1], 2)}"
    if op == "~":
        return f"~{fmt(e.a[0], 2)}"
    p = {"*": 3, "+": 4, "-": 4, "<<": 5, ">>": 5, ">>s": 5, "&": 8, "^": 9, "|": 10}[op]
    sym = ">>" if op == ">>s" else op
    s = f"{fmt(e.a[0], p)} {sym} {fmt(e.a[1], p - 1)}"
    return f"({s})" if p >= prec else s


def lvalue(addr, size):
    t = {1: "u8", 2: "u16", 4: "u32", -1: "s8", -2: "s16"}[size]
    terms, c = linear(addr)
    if len(terms) == 1:
        (base, f), = terms.items()
        if f == 1 and base.op == "var" and base.a[0] in ENTITY_VARS:
            name = ENTITY.get(c, f"f_{c:X}")
            return f"{base.a[0]}->{name}"
        if f == 1 and base.op == "sym":
            return f"{base.a[0]}" if c == 0 else f"{base.a[0]}.f_{c:X}"
    # array of structs: sym + i * size + c
    syms = [k for k in terms if k.op == "sym"]
    if len(syms) == 1 and terms[syms[0]] == 1 and len(terms) == 2:
        g = syms[0].a[0]
        (idx, f), = [(k, v) for k, v in terms.items() if k is not syms[0] and k != syms[0]]
        if SIZES.get(g) == f or (g not in SIZES and abs(size) == f and c == 0):
            if g in SIZES:
                return f"{g}[{fmt(idx)}].f_{c:X}"
            return f"{g}[{fmt(idx)}]"
    return f"*({t} *)({fmt(simplify(addr))})"


ENTITY_VARS = {"this"}


def draft(path):
    lines = [l.split("@")[0].rstrip() for l in open(path)]
    insns = []
    for l in lines:
        s = l.strip()
        if not s or s.startswith((".", "THUMB_FUNC", "thumb_func")):
            if s.startswith(".4byte") and insns and insns[-1][0] == "label":
                insns.append(("word", s.split(None, 1)[1]))
            continue
        m = re.match(r"^(\w+):$", s)
        if m:
            insns.append(("label", m.group(1)))
            continue
        op, _, rest = s.partition(" ")
        insns.append(("insn", op, [x.strip() for x in re.split(r",\s*(?![^\[]*\])", rest)] if rest else []))
    pool, cur = {}, None
    for it in insns:
        if it[0] == "label":
            cur = it[1]
        elif it[0] == "word" and cur and cur not in pool:
            pool[cur] = it[1]
    name = os.path.basename(path)[:-4]
    out, regs, slots, params = [], {}, {}, []
    flags = None
    started = False
    used_labels = {a[2][0] for a in insns if a[0] == "insn" and a[1].startswith("b") and a[2]}

    fresh = set()  # registers written since the last statement (store or call)

    def R(r):
        return regs.get(r, E("var", r))

    def val(o):
        o = o.strip()
        if o.startswith("#"):
            return const(int(o[1:], 0))
        return R(o)

    def slot_name(off):
        return slots.setdefault(off, f"v{off}")

    for it in insns:
        if it[0] == "label":
            if it[1] in used_labels:
                out.append(f"{it[1]}:")
                regs = {}
            continue
        if it[0] != "insn":
            continue
        op, ops = it[1], it[2]
        if op in ("push", "pop") or (op == "mov" and ops == ["r7", "sp"]):
            continue
        if op in ("sub", "add") and ops[0] == "sp":
            continue
        if op == "bx":
            continue
        if op == "str" and re.fullmatch(r"\[r7(, #\d+)?\]", ops[1]) and ops[0] in ("r0", "r1", "r2", "r3") \
                and not started and ops[0] not in regs:
            off = int(re.search(r"#(\d+)", ops[1]).group(1)) if "#" in ops[1] else 0
            pname = "this" if ops[0] == "r0" else f"a{ops[0][1]}"
            slots[off] = pname
            params.append(pname)
            continue
        started = True
        rd = ops[0] if ops else None
        if op in ("ldr", "ldrb", "ldrh", "ldrsh", "ldrsb", "ldsh", "ldsb", "str", "strb", "strh"):
            size = {"ldr": 4, "str": 4, "ldrb": 1, "strb": 1, "ldrh": 2, "strh": 2, "ldrsh": -2, "ldsh": -2,
                    "ldrsb": -1, "ldsb": -1}[op]
            a = ops[1]
            if not a.startswith("["):
                lab = a
                w = pool.get(lab, lab)
                regs[rd] = const(int(w, 0)) if re.fullmatch(r"-?(0x[0-9a-fA-F]+|\d+)", w) else E("sym", w)
                continue
            inner = [x.strip() for x in a[1:-1].split(",")]
            if inner[0] == "r7":
                off = int(inner[1][1:], 0) if len(inner) > 1 else 0
                if op.startswith("st"):
                    out.append(f"    {slot_name(off)} = {fmt(R(rd))};")
                    fresh.clear()
                else:
                    fresh.add(rd)
                    regs[rd] = E("var", slot_name(off))
                continue
            addr = R(inner[0]) if len(inner) == 1 else simplify(E("+", R(inner[0]), val(inner[1])))
            if addr.op == "frame":  # a local addressed through a register
                v = E("var", slot_name(addr.a[0]))
                if op.startswith("st"):
                    out.append(f"    {v.a[0]} = {fmt(R(rd))};")
                    fresh.clear()
                else:
                    regs[rd] = v
                    fresh.add(rd)
                continue
            if op.startswith("st"):
                v = R(rd)
                # bitfield write: (load(addr) & mask) | value  ->  addr = value
                note = ""
                def strip_mask(x):
                    if x.op == "&" and x.a[0].op == "load" and x.a[0].a[0] == addr and is_c(x.a[1]):
                        return x.a[1].a[0]
                    return None
                if v.op == "|" and strip_mask(v.a[0]) is not None:
                    mask = strip_mask(v.a[0])
                    v, note = v.a[1], f"  /* bf, keep {mask:#x} */" if mask else "  /* bf */"
                elif strip_mask(v) == 0:
                    v, note = const(0), "  /* bf */"
                out.append(f"    {lvalue(addr, abs(size))} = {fmt(v)};{note}")
                fresh.clear()
            else:
                regs[rd] = E("load", addr, size=size)
                fresh.add(rd)
            continue
        if op == "bl":
            n = max([i + 1 for i in range(4) if f"r{i}" in fresh] or [0])
            args = [R(f"r{i}") for i in range(n)]
            target = ops[0]
            if re.fullmatch(r"0x[0-9a-fA-F]+", target):
                target = FUNCS.get(int(target, 16) & ~1, target)
            call = E("call", target, tuple(args))
            fresh.clear()
            out.append(f"    {fmt(call)};")
            regs = {"r0": E("var", f"ret_{target}")}
            continue
        if op in ("cmp", "cmn"):
            flags = (R(ops[0]), val(ops[1]))
            continue
        if op in COND and flags:
            c = COND[op]
            a, b = flags
            if c in ("<0", ">=0"):
                out.append(f"    if ({fmt(a)} {c[0:-1]} 0) goto {ops[0]};")
            else:
                sign = "" if c.endswith("u") or c in ("==", "!=") else "(s32)"
                out.append(f"    if ({sign}{fmt(a)} {c.rstrip('u')} {fmt(b)}) goto {ops[0]};")
            continue
        if op == "b":
            out.append(f"    goto {ops[0]};")
            continue
        if op == "mov":
            regs[rd] = val(ops[1])
            fresh.add(rd)
            continue
        if op in ("add", "sub", "and", "orr", "eor", "bic", "mul", "lsl", "lsr", "asr"):
            if len(ops) == 2:
                ops = [ops[0], ops[0], ops[1]]
            a, b = val(ops[1]), val(ops[2])
            if op == "add" and ops[1] == "r7":
                regs[rd] = E("frame", b.a[0])
                fresh.add(rd)
                continue
            if op == "add" and a.op == "frame" and is_c(b):
                regs[rd] = E("frame", a.a[0] + b.a[0])
                fresh.add(rd)
                continue
            if op == "lsr" and a.op == "<<" and is_c(a.a[1]) and is_c(b):
                k, j = a.a[1].a[0], b.a[0]
                if k == j and k in (16, 24):
                    regs[rd] = E("cast", "u8" if k == 24 else "u16", a.a[0])
                    continue
            if op == "asr" and a.op == "<<" and is_c(a.a[1]) and is_c(b) and a.a[1].a[0] == b.a[0] in (16, 24):
                regs[rd] = E("cast", "s8" if b.a[0] == 24 else "s16", a.a[0])
                continue
            o = {"add": "+", "sub": "-", "and": "&", "orr": "|", "eor": "^", "mul": "*", "lsl": "<<",
                 "lsr": ">>", "asr": ">>s"}.get(op)
            if op == "bic":
                regs[rd] = E("&", a, E("~", b))
            elif op == "add" and is_c(b, 0):
                regs[rd] = a
            elif op == "lsl" and is_c(b) and b.a[0] >= 16:
                regs[rd] = E("<<", a, b)  # kept: lsl/lsr or lsl/asr pairs are casts
            else:
                regs[rd] = simplify(E(o, a, b)) if o in ("+", "-", "<<", "*") else E(o, a, b)
            fresh.add(rd)
            continue
        if op == "neg":
            regs[rd] = simplify(E("-", const(0), val(ops[1])))
            continue
        if op == "mvn":
            regs[rd] = E("~", val(ops[1]))
            continue
        out.append(f"    /* {op} {', '.join(ops)} */")
    head = f"void {name}({', '.join(('struct Entity *' if p == 'this' else 'u32 ') + p for p in params)})"
    locs = sorted(o for o in slots if slots[o] not in params)
    decl = [f"    u32 {slots[o]};" for o in locs]
    return "\n".join([head, "{"] + decl + out + ["}"])


def main():
    for f in sys.argv[1:]:
        p = glob.glob(os.path.join(ROOT, "asm", "non_matching", "*", f + ".inc"))
        if not p:
            print(f"// {f}: no asm file")
            continue
        print(draft(p[0]))
        print()


if __name__ == "__main__":
    main()
