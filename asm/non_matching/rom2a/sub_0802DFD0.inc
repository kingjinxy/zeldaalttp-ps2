	THUMB_FUNC_START sub_0802DFD0
sub_0802DFD0: @ 0x0802DFD0
	push {r4,lr}
	ldr r0, _0802E010  @ =gUnknown_03000450
	ldr r1, [r0]
	add r4, r0, #0
	cmp r1, #0
	beq _0802E020
	ldrh r0, [r1, #54]
	sub r0, r0, #80
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r0, #0
	bge _0802DFEA
	mov r1, #0
_0802DFEA:
	lsl r0, r1, #16
	asr r0, r0, #16
	mov r2, #176
	lsl r2, r2, #1
	cmp r0, r2
	ble _0802DFF8
	add r1, r2, #0
_0802DFF8:
	ldrh r3, [r4, #34]
	mov r0, #34
	ldrsh r2, [r4, r0]
	lsl r0, r1, #16
	asr r0, r0, #16
	cmp r2, r0
	beq _0802E018
	add r1, r4, #0
	cmp r2, r0
	bge _0802E014
	add r0, r3, #1
	b _0802E016
_0802E010:
	.4byte gUnknown_03000450
_0802E014:
	sub r0, r3, #1
_0802E016:
	strh r0, [r1, #34]
_0802E018:
	ldr r1, _0802E028  @ =gUnknown_030004A0
	ldrh r0, [r4, #34]
	strh r0, [r1, #48]
	strh r0, [r1, #36]
_0802E020:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802E028:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_0802DFD0

