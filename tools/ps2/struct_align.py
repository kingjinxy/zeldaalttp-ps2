#!/usr/bin/env python3
"""PS2 build filter: gives every struct/union definition that isn't packed __attribute__((aligned(4))).

    tools/ps2/struct_align.py IN OUT

agbcc (GCC 2.95 for ARM, STRUCTURE_SIZE_BOUNDARY 32) aligns every struct and union to 4 bytes and pads its size to
a multiple of 4 (struct { s16 a, b; u16 c; } takes 8); MIPS GCC doesn't, so layouts differ without this.
__attribute__((packed)) types keep their size on both and are left alone.
Also rewrites cast-as-lvalue increments, and removes the ARM-only bits of hand-written C: asm(".include") lines (those functions come from src/auto),
register clobber statements and register-variable asm names.
"""
import re, sys

src = open(sys.argv[1]).read()
src = re.sub(r'^asm\("\.(include|INCLUDE) .*\n', '', src, flags=re.M)
src = re.sub(r'^\s*asm\s*\(""\s*:.*\n', '', src, flags=re.M)
src = re.sub(r'\basm\s*\("r\d+"\)', '', src)
# GCC 2.95's cast-as-lvalue: *((T *)x)++ -> *(*(T **)&(x))++
src = re.sub(r'\*\(\((\w+\s*\*)\)\s*([\w.\->\[\]]+)\)\+\+', r'*(*(\1*)&(\2))++', src)

# walk the text, matching braces of struct/union bodies
stack, res, pos = [], [], 0
tok = re.compile(r'\b(?:struct|union)\b(?:\s+\w+)?\s*\{|\{|\}|"(?:[^"\\\n]|\\.)*"|\'(?:[^\'\\\n]|\\.)*\'|//[^\n]*|/\*.*?\*/', re.S)
for m in tok.finditer(src):
    t = m.group(0)
    if t.endswith('{') and (t.startswith('struct') or t.startswith('union')):
        stack.append(m.end())
    elif t == '{':
        stack.append(None)
    elif t == '}':
        start = stack.pop() if stack else None
        if start is not None and not re.match(r'\s*__attribute__\s*\(\(\s*packed', src[m.end():]):
            res.append(src[pos:m.end()] + ' __attribute__((aligned(4)))')
            pos = m.end()
open(sys.argv[2], 'w').write(''.join(res) + src[pos:])
