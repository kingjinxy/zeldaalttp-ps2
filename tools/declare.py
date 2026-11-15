#!/usr/bin/env python3
"""Replaces a commented-out placeholder in include/variables.h or include/functions.h with a declaration:

    python3 tools/declare.py 'extern u32 gUnknown_0202E1E4;' 'void sub_0800C4E8(void);' ...

Placeholders look like `//extern gUnknown_0202E1E4;` or `//sub_0800C4E8();`. The symbol name is taken from
the declaration; a name that has no placeholder is an error (declare it by hand where it belongs).
"""
import re, sys

files = {p: open(p).read() for p in ("include/variables.h", "include/functions.h")}
for decl in sys.argv[1:]:
    for name in re.findall(r"[A-Za-z_]\w*", decl):
        pat = re.compile(rf"^//\s*(?:extern\s+)?{name}(?:\(\))?;\s*$", re.M)
        p = next((p for p, t in files.items() if pat.search(t)), None)
        if p:
            files[p] = pat.sub(decl.replace("\\", "\\\\"), files[p], count=1)
            break
    else:
        sys.exit(f"no placeholder in: {decl}")
for p, t in files.items():
    open(p, "w").write(t)
