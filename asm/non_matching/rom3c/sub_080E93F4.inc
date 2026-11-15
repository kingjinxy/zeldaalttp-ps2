	THUMB_FUNC_START sub_080E93F4
sub_080E93F4: @ 0x080E93F4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080E9430  @ =gRam
	ldr r1, _080E9434  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E9440
	cmp r0, #28
	bne _080E941C
	add r1, r1, #32
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E95CC
_080E941C:
	ldr r0, _080E9438  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080E943C  @ =gUnknown_08177ACC
	ldrb r0, [r5]
	lsr r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080E9450
_080E9430:
	.4byte gRam
_080E9434:
	.4byte 0x00000FC2
_080E9438:
	.4byte 0x00000F92
_080E943C:
	.4byte gUnknown_08177ACC
_080E9440:
	ldr r1, _080E9458  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #127
	strb r0, [r5]
_080E9450:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9458:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E93F4

