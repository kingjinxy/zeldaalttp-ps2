	THUMB_FUNC_START sub_080FCF58
sub_080FCF58: @ 0x080FCF58
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r3, #3
	ldr r1, _080FCF98  @ =gUnknown_02010990
	mov r12, r1
	ldr r7, _080FCF9C  @ =gUnknown_0817A6E8
	ldr r1, _080FCFA0  @ =gUnknown_03003282
	add r4, r0, r1
	ldr r6, _080FCFA4  @ =gUnknown_0817A708
	mov r5, #31
_080FCF6E:
	lsl r2, r3, #24
	asr r2, r2, #24
	mov r0, r12
	add r3, r2, r0
	ldrb r0, [r4]
	add r1, r2, r6
	ldrb r1, [r1]
	add r0, r0, r1
	and r0, r0, r5
	add r0, r0, r7
	ldrb r0, [r0]
	strb r0, [r3]
	sub r2, r2, #1
	lsl r2, r2, #24
	lsr r3, r2, #24
	cmp r2, #0
	bge _080FCF6E
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FCF98:
	.4byte gUnknown_02010990
_080FCF9C:
	.4byte gUnknown_0817A6E8
_080FCFA0:
	.4byte gUnknown_03003282
_080FCFA4:
	.4byte gUnknown_0817A708
	THUMB_FUNC_END sub_080FCF58

