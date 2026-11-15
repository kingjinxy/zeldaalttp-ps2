	THUMB_FUNC_START sub_080E5470
sub_080E5470: @ 0x080E5470
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080E54B0  @ =gRam
	ldr r1, _080E54B4  @ =0x00000F12
	add r0, r2, r1
	add r4, r5, r0
	mov r7, #150
	lsl r7, r7, #4
	add r0, r2, r7
	ldrb r3, [r4]
	ldrb r0, [r0]
	sub r0, r3, r0
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r1, r1, #16
	add r0, r2, r1
	add r0, r5, r0
	add r7, r7, #1
	add r1, r2, r7
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r6, #0
	beq _080E54BC
	lsl r0, r6, #24
	cmp r0, #0
	blt _080E54B8
	sub r0, r3, #1
	b _080E54BA
_080E54B0:
	.4byte gRam
_080E54B4:
	.4byte 0x00000F12
_080E54B8:
	add r0, r3, #1
_080E54BA:
	strb r0, [r4]
_080E54BC:
	cmp r1, #0
	beq _080E54E4
	lsl r0, r1, #24
	cmp r0, #0
	blt _080E54D8
	ldr r0, _080E54D4  @ =0x00000F22
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	b _080E54E2
	.byte 0x00
	.byte 0x00
_080E54D4:
	.4byte 0x00000F22
_080E54D8:
	ldr r7, _080E54F0  @ =0x00000F22
	add r1, r2, r7
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
_080E54E2:
	strb r0, [r1]
_080E54E4:
	add r0, r5, #0
	bl sub_080E5654
	pop {r4-r7}
	pop {r0}
	bx r0
_080E54F0:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080E5470

