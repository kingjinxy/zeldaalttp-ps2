	THUMB_FUNC_START sub_08084720
sub_08084720: @ 0x08084720
	push {r4,lr}
	ldr r3, _08084794  @ =0x000007FF
	mov r4, #1
_08084726:
	ldr r0, _08084798  @ =gUnknown_0200CBA0
	add r2, r3, r0
	ldrb r1, [r2]
	add r0, r1, #0
	sub r0, r0, #102
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _0808473E
	add r0, r1, #0
	eor r0, r0, r4
	strb r0, [r2]
_0808473E:
	ldr r0, _0808479C  @ =gUnknown_0200D3A0
	add r2, r3, r0
	ldrb r1, [r2]
	add r0, r1, #0
	sub r0, r0, #102
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08084756
	add r0, r1, #0
	eor r0, r0, r4
	strb r0, [r2]
_08084756:
	ldr r0, _080847A0  @ =gUnknown_0200DBA0
	add r2, r3, r0
	ldrb r1, [r2]
	add r0, r1, #0
	sub r0, r0, #102
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _0808476E
	add r0, r1, #0
	eor r0, r0, r4
	strb r0, [r2]
_0808476E:
	ldr r0, _080847A4  @ =gUnknown_0200E3A0
	add r2, r3, r0
	ldrb r1, [r2]
	add r0, r1, #0
	sub r0, r0, #102
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08084786
	add r0, r1, #0
	eor r0, r0, r4
	strb r0, [r2]
_08084786:
	sub r3, r3, #1
	cmp r3, #0
	bge _08084726
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08084794:
	.4byte 0x000007FF
_08084798:
	.4byte gUnknown_0200CBA0
_0808479C:
	.4byte gUnknown_0200D3A0
_080847A0:
	.4byte gUnknown_0200DBA0
_080847A4:
	.4byte gUnknown_0200E3A0
	THUMB_FUNC_END sub_08084720

