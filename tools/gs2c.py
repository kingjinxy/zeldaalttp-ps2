# gs2c.py OBJ.o NAMES OUT.c: "global state" translation for the functions asm2c.py can't turn into C-ABI C
# (hand-written asm, register conventions, code entered past its start, layout-bound code).
# The functions stay assembled in OBJ.o as copies named NAME__asm (data and layout unchanged); this decodes the
# Thumb machine code of those copies and writes C that runs it on one global CPU state (gs.h, at a fixed EWRAM
# address):
# - void gs_NAME(u32 entry): registers are locals synced with gCpu around calls and jumps; `entry` is the offset
#   it is entered at (0, or a label other code jumps to).
# - u32 NAME(u32 r0..r3, 4 stack words): the C-ABI wrapper that other code and data pointers use.
# - calls and returns keep real return addresses in lr; a return sets gCpu.pc and every caller frame checks it,
#   so code that returns past its caller unwinds right.
# - indirect jumps and calls go through gs_run(addr): a table (.gstable) maps wrapper addresses and copy
#   addresses to entries; other addresses are C functions.
# NAMES: one function name per line (all GS functions of the build; those in OBJ are translated).
# shortcut: wrappers pass 4 stack words to the GS code whatever the callee takes (extra words are garbage).
import re, struct, subprocess, sys

CONDS = ["eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt", "le"]
COND_C = {"eq": "z", "ne": "!z", "cs": "c", "cc": "!c", "mi": "n", "pl": "!n", "vs": "v", "vc": "!v",
          "hi": "(c && !z)", "ls": "(!c || z)", "ge": "(n == v)", "lt": "(n != v)", "gt": "(!z && n == v)",
          "le": "(z || n != v)"}
R = ["r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "sp", "lr", "pc"]


class Fail(Exception):
    pass


def readelf(args, obj):
    return subprocess.run(["arm-none-eabi-readelf"] + args + [obj], capture_output=True, text=True).stdout


def load(obj):
    secs = {}
    for l in readelf(["-SW"], obj).splitlines():
        m = re.match(r"\s*\[\s*(\d+)\]\s+(\S+)\s+\S+\s+[0-9a-f]+\s+([0-9a-f]+)\s+([0-9a-f]+)", l)
        if m:
            secs[m.group(2)] = (int(m.group(1)), int(m.group(3), 16), int(m.group(4), 16))
    idx, off, size = secs[".text"]
    data = open(obj, "rb").read()[off:off + size]
    syms = []  # (value, name, type, ndx)
    for l in readelf(["-sW"], obj).splitlines():
        p = l.split()
        if len(p) >= 8 and p[0].endswith(":") and p[6].isdigit() and int(p[6]) == idx:
            syms.append((int(p[1], 16), p[7], p[3]))
    relocs = {}  # offset -> (type, symbol name, symbol value or None)
    sec = None
    for l in readelf(["-rW"], obj).splitlines():
        m = re.match(r"Relocation section '(\S+)'", l)
        if m:
            sec = m.group(1)
            continue
        p = l.split()
        if sec == ".rel.text" and len(p) >= 5 and re.fullmatch(r"[0-9a-f]{8}", p[0]):
            relocs[int(p[0], 16)] = (p[2], p[4], int(p[3], 16))
    return data, syms, relocs


def h(data, o):
    return struct.unpack_from("<H", data, o)[0]


def w(data, o):
    return struct.unpack_from("<I", data, o)[0]


def sx(v, bits):
    return v - (1 << bits) if v & (1 << (bits - 1)) else v


def decode(data, o, relocs):
    """-> dict(kind, ...) for the Thumb instruction at o"""
    x = h(data, o)
    t = x >> 11
    if t <= 2:  # shift by immediate
        return dict(k="shift", op=["lsl", "lsr", "asr"][t], d=x & 7, m=(x >> 3) & 7, imm=(x >> 6) & 31, n=2)
    if t == 3:
        op = "sub" if x & 0x200 else "add"
        if x & 0x400:
            return dict(k="addsub_i", op=op, d=x & 7, s=(x >> 3) & 7, imm=(x >> 6) & 7, n=2)
        return dict(k="addsub_r", op=op, d=x & 7, s=(x >> 3) & 7, m=(x >> 6) & 7, n=2)
    if 4 <= t <= 7:
        return dict(k="imm8", op=["mov", "cmp", "add", "sub"][t - 4], d=(x >> 8) & 7, imm=x & 0xFF, n=2)
    if x >> 10 == 0x10:
        ops = ["and", "eor", "lsl", "lsr", "asr", "adc", "sbc", "ror", "tst", "neg", "cmp", "cmn", "orr", "mul",
               "bic", "mvn"]
        return dict(k="alu", op=ops[(x >> 6) & 15], d=x & 7, m=(x >> 3) & 7, n=2)
    if x >> 10 == 0x11:
        op = (x >> 8) & 3
        d = (x & 7) | ((x >> 4) & 8)
        m = (x >> 3) & 15
        return dict(k="hi", op=["add", "cmp", "mov", "bx"][op], d=d, m=m, n=2)
    if t == 9:
        return dict(k="ldr_pc", d=(x >> 8) & 7, imm=(x & 0xFF) * 4, n=2)
    if x >> 12 == 5:
        op = (x >> 9) & 7
        names = ["str", "strh", "strb", "ldrsb", "ldr", "ldrh", "ldrb", "ldrsh"]
        return dict(k="mem_r", op=names[op], d=x & 7, b=(x >> 3) & 7, m=(x >> 6) & 7, n=2)
    if x >> 13 == 3:
        b, l = (x >> 12) & 1, (x >> 11) & 1
        imm = (x >> 6) & 31
        return dict(k="mem_i", op=("ldr" if l else "str") + ("b" if b else ""), d=x & 7, b=(x >> 3) & 7,
                    imm=imm if b else imm * 4, n=2)
    if x >> 12 == 8:
        return dict(k="mem_i", op="ldrh" if x & 0x800 else "strh", d=x & 7, b=(x >> 3) & 7,
                    imm=((x >> 6) & 31) * 2, n=2)
    if x >> 12 == 9:
        return dict(k="mem_sp", op="ldr" if x & 0x800 else "str", d=(x >> 8) & 7, imm=(x & 0xFF) * 4, n=2)
    if x >> 12 == 10:
        return dict(k="addr", src="sp" if x & 0x800 else "pc", d=(x >> 8) & 7, imm=(x & 0xFF) * 4, n=2)
    if x >> 8 == 0xB0:
        v = (x & 0x7F) * 4
        return dict(k="addsp", imm=-v if x & 0x80 else v, n=2)
    if (x >> 12) == 0xB and (x >> 9) & 3 == 2:
        rl = [i for i in range(8) if x & (1 << i)]
        if x & 0x800:
            return dict(k="pop", regs=rl + ([15] if x & 0x100 else []), n=2)
        return dict(k="push", regs=rl + ([14] if x & 0x100 else []), n=2)
    if x >> 12 == 0xC:
        return dict(k="ldm" if x & 0x800 else "stm", b=(x >> 8) & 7, regs=[i for i in range(8) if x & (1 << i)],
                    n=2)
    if x >> 12 == 0xD:
        c = (x >> 8) & 15
        if c == 15:
            return dict(k="swi", imm=x & 0xFF, n=2)
        if c == 14:
            raise Fail("undefined instruction %04X" % x)
        return reloc_branch(dict(k="bcc", cond=CONDS[c], target=o + 4 + sx(x & 0xFF, 8) * 2, n=2), o,
                            sx(x & 0xFF, 8) * 2, relocs)
    if t == 0x1C:
        return reloc_branch(dict(k="b", target=o + 4 + sx(x & 0x7FF, 11) * 2, n=2), o, sx(x & 0x7FF, 11) * 2, relocs)
    if t == 0x1E:
        y = h(data, o + 2)
        if y >> 11 != 0x1F:
            raise Fail("bl pair %04X %04X" % (x, y))
        off = (sx(x & 0x7FF, 11) << 12) | ((y & 0x7FF) << 1)
        r = relocs.get(o)
        sym = r[1] if r and r[0] in ("R_ARM_THM_CALL", "R_ARM_THM_PC22") else None
        return dict(k="bl", target=o + 4 + off, sym=sym, n=4)
    raise Fail("instruction %04X" % x)


LOCAL = {}  # symbol name -> offset in this object's .text


def reloc_branch(d, o, field, relocs):
    """b/bcc to a symbol: the instruction holds the REL addend; the target is the symbol + addend + 4"""
    r = relocs.get(o)
    if not r:
        return d
    if r[1] in LOCAL:
        d["target"] = (LOCAL[r[1]] & ~1) + field + 4
    else:
        d["target"] = None
        d["sym"], d["symoff"] = r[1], field + 4
    return d


def main():
    obj, namesf, outc = sys.argv[1:4]
    gsnames, extra = set(), {}
    for l in open(namesf):  # "NAME" or "NAME OFFSET" (an entry other code uses, from asm2c.py)
        p = l.split()
        if p:
            gsnames.add(p[0])
            if len(p) > 1:
                extra.setdefault(p[0], set()).add(int(p[1], 16))
    tag = re.sub(r"\W", "_", obj.split("/")[-1].split(".")[0])
    data, syms, relocs = load(obj)
    for v, n, t in syms:
        LOCAL.setdefault(n, v)
    funcs = sorted((v & ~1, n) for v, n, t in syms if t == "FUNC")
    starts = sorted({v for v, n in funcs})
    mine = [(v, n[:-5]) for v, n in funcs if n.endswith("__asm") and n[:-5] in gsnames]
    # code addresses other code takes (relocated words pointing into this .text): entries
    taken = set()
    for o, (typ, name, val) in relocs.items():
        if typ == "R_ARM_ABS32" and o + 4 <= len(data):
            sv = next((v for v, n, t in syms if n == name), None)
            if sv is not None:
                taken.add((sv + w(data, o)) & ~1)
    for v, n in mine:
        taken |= {v + e for e in extra.get(n, ())}
    if obj.endswith("rom1.main.o"):  # rom1 sits at its original address (right after crt0): raw Thumb pointers
        base = 0x08000000 + int(readelf(["-SW"], "asm/crt0.o").split(".text")[1].split()[3], 16)
        for o in range(0, len(data) - 3, 4):
            x = w(data, o)
            if x & 1 and base <= x - 1 < base + len(data):
                taken.add(x - 1 - base)
    ranges = []
    for v, n in mine:
        ranges.append((v, next((x for x in starts if x > v), len(data)), n))
    # pass 1: branches from one function into another of this object are entries there
    for v, end, n in ranges:
        try:
            taken |= translate(data, relocs, v, end, n, taken, gsnames, set(), set(), tag)[2]
        except Fail:
            pass
    # sp always lives in gCpu: entries from C code or interrupts build their frames below it
    out = ['#include "gs.h"', "#define sp (gCpu.r[13])", ""]
    decls, swis, tables, bodies, failed, sizes = set(), set(), [], [], [], {}
    for v, end, n in ranges:
        try:
            body, entries, _ = translate(data, relocs, v, end, n, taken, gsnames, decls, swis, tag)
        except Fail as e:
            failed.append((n, str(e)))
            continue
        bodies += body
        tables.append((n, entries))
        sizes[n] = end - v
    for k in sorted(swis):  # BIOS calls: r0-r3 from gCpu, swi, back
        out.append('asm(".thumb\\n.align 1\\n.global gs_swi_%s_%X\\n.thumb_func\\ngs_swi_%s_%X:\\n'
                   'push {r4, lr}\\nldr r4, =0x0203C000\\nldmia r4!, {r0-r3}\\nsub r4, #16\\nswi 0x%X\\n'
                   'stmia r4!, {r0-r3}\\npop {r4}\\npop {r0}\\nbx r0\\n.pool");' % (tag, k, tag, k, k))
        out.append("void gs_swi_%s_%X(void);" % (tag, k))
    out += sorted(decls)
    for n, _ in tables:
        out.append("extern u8 %s__base[];" % n)
        out.append("void gs_%s(u32);" % n)
        out.append("void %s(void);  /* gs wrapper */" % n)
    out += [""] + bodies + [""]
    if tables or failed:  # gs_enter: the caller's registers in, the GS code's registers out (gs.h gs_enter_c)
        out += ["void gs_enter_c_%s(void (*fn)(u32), u32 *f) { gs_enter_c(fn, f); }" % tag,
                'asm(".thumb\\n.align 1\\n.thumb_func\\ngs_enter_%s:\\n'
                'push {r0-r3}\\nmov r0, r8\\nmov r1, r9\\nmov r2, r10\\nmov r3, r11\\npush {r0-r3}\\n'
                'push {r5-r7}\\nmov r0, r4\\nmov r1, sp\\nbl gs_enter_c_%s\\npop {r5-r7}\\npop {r0-r3}\\n'
                'mov r8, r0\\nmov r9, r1\\nmov r10, r2\\nmov r11, r3\\nldr r0, [sp, #20]\\nmov r12, r0\\n'
                'pop {r0-r3}\\npop {r4}\\nadd sp, #4\\nbx r12");' % (tag, tag)]
    for n, _ in tables:  # the C-visible NAME: transparent for registers (hand-written callers keep working)
        out.append('asm(".thumb\\n.align 2\\n.global %s\\n.thumb_func\\n%s:\\npush {r4, lr}\\n'
                   'ldr r4, 1f\\nbl gs_enter_%s\\n.align 2\\n1: .4byte gs_%s");' % (n, n, tag, n))
    if tables:
        out.append("const struct GsEntry gGsTable_%s[] __attribute__((section(\".gstable\"))) = {" % tag)
        for n, entries in tables:
            for e in sorted(x for x in entries if x < sizes[n]):  # the end is the next function's start
                out.append("    { (u32)%s__base + 0x%X, gs_%s, 0x%X }," % (n, e, n, e))
        out.append("};")
        out.append("const struct GsEntry gGsTableW_%s[] __attribute__((section(\".gstablew\"))) = {" % tag)
        for n, _ in tables:
            out.append("    { (u32)%s, gs_%s, 0 }," % (n, n))
        out.append("};")
    # functions that didn't decode (ARM inside): NAME runs the copy natively, as before; GS callers reach it
    # through the C calling convention
    for n, e in failed:  # the copy gets its own name back as a second label, then OBJ is assembled again
        q = "src/auto/gs/%s.inc" % n
        t = open(q).read()
        if "\n%s:\n" % n not in t:
            t = t.replace("\n%s__base:" % n, "\n%s__base:\n.global %s\n.thumb_func\n%s:" % (n, n, n), 1)
            open(q, "w").write(t)
    if failed:
        sfile = obj.replace(".main.o", ".s")
        subprocess.run(["arm-none-eabi-as", "-mcpu=arm7tdmi", "-mthumb-interwork", "-Iasminclude", sfile, "-o", obj],
                       check=True)
    for n, e in failed:
        out += ["extern u8 %s__base[];" % n, "void gs_%s(u32 e)" % n, "{",
                "    u32 s = gCpu.r[13];",
                "    gCpu.r[0] = ((u32 (*)())((u32)%s__base + e + 1))(gCpu.r[0], gCpu.r[1], gCpu.r[2], gCpu.r[3]," % n,
                "        R32(s), R32(s + 4), R32(s + 8), R32(s + 12));",
                "    gCpu.r[15] = gCpu.r[14];", "}"]
    open(outc, "w").write("\n".join(out) + "\n")
    for n, e in failed:
        print("gs2c: kept native %s: %s" % (n, e), file=sys.stderr)
    print("gs2c: %d functions in global-state C, %d native" % (len(tables), len(failed)), file=sys.stderr)


def translate(data, relocs, start, end, name, taken, gsnames, decls, swis, tag):
    size = end - start
    possible = sorted({a - start for a in taken if start <= a < end} - {0})
    entries = {0}
    ins, ext, rets = {}, set(), set()
    targets = set(entries)
    # entry 0 must decode; other addresses taken by pointers may be data (tables inside the code): try them
    flow(data, relocs, start, end, [0], ins, targets, entries, ext, rets)
    for p in possible:
        trial = (dict(ins), set(targets), set(entries), set(ext), set(rets))
        try:
            entries.add(p)
            targets.add(p)
            flow(data, relocs, start, end, [p], ins, targets, entries, ext, rets)
        except Fail:
            ins, targets, entries, ext, rets = trial
    return finish(data, relocs, start, end, name, gsnames, decls, swis, tag, ins, targets, entries, ext, rets)


def flow(data, relocs, start, end, work, ins, targets, entries, ext, rets):
    while work:
        o = start + work.pop()
        after_call = False
        while start <= o < end and o not in ins:
            try:
                d = decode(data, o, relocs)
            except Fail:
                if after_call:  # a call that doesn't return (data follows it)
                    break
                raise
            after_call = d["k"] == "bl"
            ins[o] = d
            k = d["k"]
            if k in ("b", "bcc") and d["target"] is None:  # to a symbol of another object
                if k == "b":
                    break
                o += d["n"]
                continue
            if k in ("b", "bcc") or (k == "bl" and d["sym"] is None):
                if not start <= d["target"] < end:
                    ext.add(d["target"])
            if k in ("b", "bcc"):
                if start <= d["target"] < end:
                    targets.add(d["target"] - start)
                    work.append(d["target"] - start)
                if k == "b":
                    break
            if k == "bl" and d["sym"] is None and start <= d["target"] < end:
                # a call to a helper inside (or agbcc's far jump: then what follows may not decode)
                targets.add(d["target"] - start)
                work.append(d["target"] - start)
            if k == "bl":
                targets.add(o + 4 - start)  # return point: a local entry (a return can resume here)
                if o + 4 - start not in entries:
                    rets.add(o + 4 - start)
                entries.add(o + 4 - start)
            if k == "pop" and 15 in d["regs"]:
                break
            if k == "hi" and d["op"] == "bx" or (k == "hi" and d["op"] == "mov" and d["d"] == 15):
                break
            if k == "hi" and d["op"] == "add" and d["d"] == 15:
                break
            o += d["n"]


def finish(data, relocs, start, end, name, gsnames, decls, swis, tag, ins, targets, entries, ext, rets):
    for o, d in ins.items():  # jumps into code copied to RAM (the m4a mixer) carry all registers: stay native
        if d["k"] == "ldr_pc":
            v = w(data, ((o + 4) & ~3) + d["imm"])
            if 0x02000000 <= v < 0x02040000 or 0x03000000 <= v < 0x03008000:
                if v & 1 or (v & 3) == 0 and 0x03000000 <= v and any(x["k"] == "hi" and x["op"] == "bx" for x in ins.values()):
                    if v & 1:
                        raise Fail("jumps into Thumb code in RAM (%08X)" % v)
    size = end - start
    decoded = {o - start for o in ins}
    # return points that didn't decode (calls that don't return, data after them) aren't entries
    for x in list(rets):
        if x not in decoded and x != size:
            rets.discard(x), entries.discard(x), targets.discard(x)
    B = "((u32)%s__base)" % name
    lines = ["", "void gs_%s(u32 e)" % name, "{", "    GS_LOCALS;", "    GS_LOAD();",
             "dispatch:", "    GS_TRACE(%s + e);" % B, "    switch (e) {"]
    for e in sorted(entries):
        lines.append("    case 0x%X: goto L_%X;" % (e, e))
    lines += ["    default: gs_bad(%s + e); return;" % B, "    }"]
    for o in sorted(ins):
        rel = o - start
        if rel in targets or rel in entries:
            lines.append("L_%X:" % rel)
        lines += ["    " + x for x in emit(ins[o], o, rel, start, end, B, name, gsnames, decls, data)]
        nxt = o + ins[o]["n"]
        if nxt not in ins and not terminal(ins[o]) and not (ins[o]["k"] == "bl" and nxt - start in rets and nxt < end):
            # falls through to code not decoded: a following function (shared code)
            lines += ["    GS_STORE(); gs_run(%s %s); return;" % (B, soff(nxt - start))]
    for x in sorted((targets | entries) - {o - start for o in ins}):
        # a label we didn't decode (the end of the function: code running on into the next one)
        lines += ["L_%X:" % x, "    GS_STORE(); gs_run(%s %s); return;" % (B, soff(x))]
    lines.append("}")
    text = "\n".join(lines)
    text = text.replace("GS_JUMP(", "GS_JUMP_IN(%s, 0x%X, " % (B, size))
    text = text.replace("GS_RETURNED(", "GS_RETURNED_IN(%s, 0x%X, " % (B, size))
    for m in re.findall(r"gs_swi_TAG_([0-9A-F]+)\(\)", text):
        swis.add(int(m, 16))
    text = text.replace("gs_swi_TAG_", "gs_swi_%s_" % tag)
    # entries reached from other functions are table entries; return points only need the local switch
    return text.split("\n"), entries, ext


def terminal(d):
    k = d["k"]
    return (k == "b" or (k == "pop" and 15 in d["regs"]) or (k == "hi" and d["op"] == "bx")
            or (k == "hi" and d["op"] in ("mov", "add") and d["d"] == 15)
            or (k == "bl" and d["sym"] is None and False))


def flags_add(a, b, res, carry_in=None):
    c = "(%s < %s)" % (res, a) if carry_in is None else "((u64)%s + %s + %s > 0xFFFFFFFFu)" % (a, b, carry_in)
    return ["c = %s; v = (~(%s ^ %s) & (%s ^ %s)) >> 31; n = %s >> 31; z = %s == 0;" % (c, a, b, a, res, res, res)]


def flags_sub(a, b, res, borrow=None):
    c = "(%s >= %s)" % (a, b) if borrow is None else "((u64)%s >= (u64)%s + !c)" % (a, b)
    return ["c = %s; v = ((%s ^ %s) & (%s ^ %s)) >> 31; n = %s >> 31; z = %s == 0;" % (c, a, b, a, res, res, res)]


def nz(r):
    return ["n = %s >> 31; z = %s == 0;" % (r, r)]


def emit(d, o, rel, start, end, B, name, gsnames, decls, data):
    k = d["k"]
    pcv = "(%s + 0x%X)" % (B, rel + 4)
    if k == "shift":
        rd, rm, i, op = R[d["d"]], R[d["m"]], d["imm"], d["op"]
        if op == "lsl":
            if i == 0:
                return ["%s = %s;" % (rd, rm)] + nz(rd)
            return ["c = (%s >> %d) & 1; %s = %s << %d;" % (rm, 32 - i, rd, rm, i)] + nz(rd)
        i = i or 32
        if op == "lsr":
            return ["c = (%s >> %d) & 1; %s = %s;" % (rm, i - 1, rd, "0" if i == 32 else "%s >> %d" % (rm, i))] + nz(rd)
        return ["c = (%s >> %d) & 1; %s = (u32)((s32)%s >> %d);" % (rm, i - 1, rd, rm, min(i, 31))] + nz(rd)
    if k in ("addsub_i", "addsub_r"):
        rd, rs = R[d["d"]], R[d["s"]]
        b = "0x%Xu" % d["imm"] if k == "addsub_i" else R[d["m"]]
        f = flags_add if d["op"] == "add" else flags_sub
        return ["{ u32 ta = %s, tb = %s, t = ta %s tb;" % (rs, b, "+" if d["op"] == "add" else "-")] + \
               ["  " + x for x in f("ta", "tb", "t")] + ["  %s = t; }" % rd]
    if k == "imm8":
        rd, i, op = R[d["d"]], "0x%Xu" % d["imm"], d["op"]
        if op == "mov":
            return ["%s = %s;" % (rd, i)] + nz(rd)
        f = flags_add if op == "add" else flags_sub
        return ["{ u32 ta = %s, tb = %s, t = ta %s tb;" % (rd, i, "+" if op == "add" else "-")] + \
               ["  " + x for x in f("ta", "tb", "t")] + (["  %s = t; }" % rd] if op != "cmp" else ["  }"])
    if k == "alu":
        rd, rm, op = R[d["d"]], R[d["m"]], d["op"]
        if op in ("and", "eor", "orr", "bic", "mul"):
            e = {"and": "%s & %s", "eor": "%s ^ %s", "orr": "%s | %s", "bic": "%s & ~%s", "mul": "%s * %s"}[op]
            return ["%s = %s;" % (rd, e % (rd, rm))] + nz(rd)
        if op == "tst":
            return ["{ u32 t = %s & %s; n = t >> 31; z = t == 0; }" % (rd, rm)]
        if op == "mvn":
            return ["%s = ~%s;" % (rd, rm)] + nz(rd)
        if op in ("lsl", "lsr", "asr", "ror"):
            F = op.upper()
            return ["{ u32 s = %s & 0xFF; c = %s_C(%s, s, c); %s = %s(%s, s); }" % (rm, F, rd, rd, F, rd)] + nz(rd)
        if op in ("adc", "sbc"):
            if op == "adc":
                return ["{ u32 ta = %s, tb = %s, t = ta + tb + c;" % (rd, rm)] + \
                       ["  " + x for x in flags_add("ta", "tb", "t", "c")] + ["  %s = t; }" % rd]
            return ["{ u32 ta = %s, tb = %s, t = ta - tb - !c;" % (rd, rm)] + \
                   ["  " + x for x in flags_sub("ta", "tb", "t", True)] + ["  %s = t; }" % rd]
        if op == "neg":
            return ["{ u32 ta = 0, tb = %s, t = ta - tb;" % rm] + ["  " + x for x in flags_sub("ta", "tb", "t")] + \
                   ["  %s = t; }" % rd]
        if op in ("cmp", "cmn"):
            f = flags_sub if op == "cmp" else flags_add
            return ["{ u32 ta = %s, tb = %s, t = ta %s tb;" % (rd, rm, "-" if op == "cmp" else "+")] + \
                   ["  " + x for x in f("ta", "tb", "t")] + ["  }"]
    if k == "hi":
        op, rd, rm = d["op"], d["d"], d["m"]
        src = pcv if rm == 15 else R[rm]
        if op == "bx":  # bit 0 clear: ARM state, run natively (gs_run)
            return ["{ u32 t = %s; if (!(t & 1)) { GS_STORE(); gCpu.r[15] = t; return; } GS_JUMP(t); }" % src]
        if op in ("mov", "add") and rd == 15:
            t = src if op != "add" else "(%s + %s)" % (pcv, src)
            return ["{ u32 t = %s; GS_JUMP(t); }" % t]
        if op == "mov":
            return ["%s = %s;" % (R[rd], src)]
        if op == "add":
            return ["%s = %s + %s;" % (R[rd], pcv if rd == 15 else R[rd], src)]
        if op == "cmp":
            return ["{ u32 ta = %s, tb = %s, t = ta - tb;" % (R[rd], src)] + \
                   ["  " + x for x in flags_sub("ta", "tb", "t")] + ["  }"]
    if k == "ldr_pc":
        a = ((o + 4) & ~3) + d["imm"] - start
        return ["%s = R32(%s + 0x%X);" % (R[d["d"]], B, a)]
    if k in ("mem_r", "mem_i", "mem_sp"):
        op = d["op"]
        if k == "mem_r":
            a = "%s + %s" % (R[d["b"]], R[d["m"]])
        elif k == "mem_i":
            a = "%s + %d" % (R[d["b"]], d["imm"])
        else:
            a = "sp + %d" % d["imm"]
        rd = R[d["d"]]
        sz = {"ldr": "32", "str": "32", "ldrb": "8", "strb": "8", "ldrh": "16", "strh": "16", "ldrsb": "S8",
              "ldrsh": "S16"}[op]
        if op.startswith("ld"):
            return ["%s = R%s(%s);" % (rd, sz, a)]
        return ["W%s(%s, %s);" % (sz, a, rd)]
    if k == "addr":
        if d["src"] == "sp":
            return ["%s = sp + %d;" % (R[d["d"]], d["imm"])]
        return ["%s = %s + 0x%X;" % (R[d["d"]], B, ((o + 4) & ~3) + d["imm"] - start)]
    if k == "addsp":
        return ["sp += %d;" % d["imm"]]
    if k == "push":
        n = len(d["regs"])
        out = ["sp -= %d;" % (4 * n)]
        out += ["W32(sp + %d, %s);" % (4 * i, R[r]) for i, r in enumerate(d["regs"])]
        return out
    if k == "pop":
        out, n = [], len(d["regs"])
        for i, r in enumerate(d["regs"]):
            if r == 15:
                out.append("{ u32 t = R32(sp + %d); sp += %d; GS_JUMP(t); }" % (4 * i, 4 * n))
                return out
            out.append("%s = R32(sp + %d);" % (R[r], 4 * i))
        out.append("sp += %d;" % (4 * n))
        return out
    if k in ("ldm", "stm"):
        b, rl = R[d["b"]], d["regs"]
        out = ["{ u32 a = %s;" % b]
        for i, r in enumerate(rl):
            out.append("  %s = R32(a + %d);" % (R[r], 4 * i) if k == "ldm" else "  W32(a + %d, %s);" % (4 * i, R[r]))
        if not (k == "ldm" and d["b"] in rl):
            out.append("  %s = a + %d;" % (b, 4 * len(rl)))
        out.append("}")
        return out
    if k == "swi":
        return ["GS_STORE(); gs_swi_TAG_%X(); GS_LOAD();" % d["imm"]]
    if k in ("b", "bcc") and d["target"] is None:
        sym, off = d["sym"], d["symoff"]
        base = sym[:-5] if sym.endswith("__asm") else sym
        tgt = "(u32)%s__base" % base if base in gsnames else "(u32)%s" % sym
        decls.add("extern u8 %s__base[];" % base if base in gsnames else "extern u8 %s[];" % sym)
        j = "{ GS_STORE(); gs_run(%s %s); return; }" % (tgt, soff(off))
        return ["if (%s) %s" % (COND_C[d["cond"]], j)] if k == "bcc" else [j]
    if k == "bcc":
        return ["if (%s) %s" % (COND_C[d["cond"]], jump_to(d["target"], start, end, B))]
    if k == "b":
        return [jump_to(d["target"], start, end, B)]
    if k == "bl":
        ret = "(%s + 0x%X)" % (B, rel + 4 + 1)
        t, sym = d["target"], d["sym"]
        if sym is None and start <= t < end:
            return ["lr = %s; goto L_%X;" % (ret, t - start)]
        if sym is None:
            return ["lr = %s; GS_STORE(); gs_run(%s %s); GS_LOAD(); GS_RETURNED(%s);" % (ret, B, soff(t - start), ret)]
        m = re.fullmatch(r"_call_via_(\w+)", sym)
        if m:
            reg = {"ip": "r12", "sl": "r10", "sb": "r9", "fp": "r11"}.get(m.group(1), m.group(1))
            return ["lr = %s; GS_STORE(); gs_run(%s); GS_LOAD(); GS_RETURNED(%s);" % (ret, reg, ret)]
        off = sx(((h(data, o) & 0x7FF) << 12) | ((h(data, o + 2) & 0x7FF) << 1), 23) + 4  # REL addend + 4
        base = sym[:-5] if sym.endswith("__asm") else sym
        if off and base in gsnames:
            decls.add("extern u8 %s__base[];" % base)
            return ["lr = %s; GS_STORE(); gs_run((u32)%s__base + 0x%X); GS_LOAD(); GS_RETURNED(%s);" % (ret, base, off, ret)]
        if off:
            decls.add("extern u8 %s[];" % sym)
            return ["lr = %s; GS_STORE(); gs_run((u32)%s + 0x%X); GS_LOAD(); GS_RETURNED(%s);" % (ret, sym, off, ret)]
        if base in gsnames:
            decls.add("void gs_%s(u32);" % base)
            return ["lr = %s; GS_STORE(); gs_%s(0); GS_LOAD(); GS_RETURNED(%s);" % (ret, base, ret)]
        decls.add("u32 %s();" % sym)
        return ["lr = %s; r0 = %s(r0, r1, r2, r3, R32(sp), R32(sp + 4), R32(sp + 8), R32(sp + 12));" % (ret, sym)]
    raise Fail("emit " + k)


def soff(x):
    return "+ 0x%X" % x if x >= 0 else "- 0x%X" % -x


def jump_to(t, start, end, B):
    if start <= t < end:
        return "goto L_%X;" % (t - start)
    return "{ GS_STORE(); gs_run(%s %s); return; }" % (B, soff(t - start))


main()
