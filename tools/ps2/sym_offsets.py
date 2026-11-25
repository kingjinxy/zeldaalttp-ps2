#!/usr/bin/env python3
"""Lists asm literals written as SYMBOL+offset whose target lies past SYMBOL's own function or data (in another
function). The GBA link gives the same address either way; the PS2 build doesn't: there SYMBOL is its own object
(a C entry, a global-state copy, an ARM port), so the offset lands in the wrong place (walkthrough steps 61-62).
Run after `make compare` (reads zeldaalttp.map). Name the target instead: the function itself when the offset is 0
or the Thumb bit, else the absolute ROM address (the PS2 maps the original ROM at 0x08000000).
asm/crt0.s's two IWRAM-table entries are known: src/ps2/glue/arm_ports.c handles them."""
import re,glob,bisect,sys
addr={}
for l in open('zeldaalttp.map'):
    r=re.match(r'\s+0x0*([0-9a-f]{7,8})\s+(\w+)\s*$',l)
    if r: addr[r[2]]=int(r[1],16)
# function starts in ROM code: every map symbol in 0x08000000-0x08137B04 (data symbols included: a target past the next symbol)
starts=sorted((a,n) for n,a in addr.items() if 0x08000000<=a<0x09000000)
A=[a for a,_ in starts]
bad=[]
for f in glob.glob('asm/**/*.inc',recursive=True)+glob.glob('asm/*.s')+glob.glob('data/*.s'):
    for i,l in enumerate(open(f,errors='replace')):
        for m in re.finditer(r'\b([A-Za-z_]\w*)\s*\+\s*(0x[0-9a-fA-F]+|\d+)\b',l):
            sym,off=m[1],int(m[2],0)
            if sym not in addr or not (0x08000000<=addr[sym]<0x09000000): continue
            t=addr[sym]+off
            j=bisect.bisect_right(A,t)-1
            if starts[j][1]!=sym and starts[j][0]!=addr[sym]:
                bad.append((f,i+1,sym,off,t,starts[j][1],t-starts[j][0]))
bad=[b for b in bad if b[0]!='asm/crt0.s']  # its two IWRAM-table entries: arm_ports.c handles them
for b in bad: print('%s:%d %s+0x%x = %08X -> %s+0x%x'%b)
sys.exit(1 if bad else 0)
