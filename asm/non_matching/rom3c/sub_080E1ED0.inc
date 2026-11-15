	THUMB_FUNC_START sub_080E1ED0
sub_080E1ED0: @ 0x080E1ED0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E2614
	add r0, r4, #0
	bl sub_080E2094
	ldr r5, _080E1F28  @ =gRam
	ldr r1, _080E1F2C  @ =0x00000FC2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080E1F38
	cmp r0, #0
	blt _080E1F44
	lsr r0, r0, #27
	mov r1, #7
	and r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	strb r0, [r1]
	ldr r6, _080E1F30  @ =0x00001082
	add r2, r5, r6
	add r2, r4, r2
	ldr r3, _080E1F34  @ =gUnknown_08176938
	sub r6, r6, #208
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	orr r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _080E1F44
_080E1F28:
	.4byte gRam
_080E1F2C:
	.4byte 0x00000FC2
_080E1F30:
	.4byte 0x00001082
_080E1F34:
	.4byte gUnknown_08176938
_080E1F38:
	mov r0, #32
	strb r0, [r1]
	ldr r1, _080E1F4C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
_080E1F44:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E1F4C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E1ED0

