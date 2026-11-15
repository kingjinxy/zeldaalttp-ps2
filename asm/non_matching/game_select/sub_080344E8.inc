	THUMB_FUNC_START sub_080344E8
sub_080344E8: @ 0x080344E8
	push {lr}
	add r3, r0, #0
	ldrb r0, [r3, #20]
	cmp r0, #0
	beq _080344F8
	cmp r0, #1
	beq _08034536
	b _08034548
_080344F8:
	mov r0, #1
	mov r2, #1
	strb r0, [r3, #20]
	ldrb r1, [r3, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #28]
	ldrb r2, [r3, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3, #31]
	ldrb r0, [r3, #29]
	and r1, r1, r0
	strb r1, [r3, #29]
	ldrb r0, [r3, #23]
	cmp r0, #0
	beq _0803452C
	ldr r0, _08034528  @ =0x0000021E
	bl play_sound
	b _08034548
	.byte 0x00
	.byte 0x00
_08034528:
	.4byte 0x0000021E
_0803452C:
	mov r0, #251
	lsl r0, r0, #1
	bl play_sound
	b _08034548
_08034536:
	ldrb r0, [r3, #11]
	sub r0, r0, #1
	strb r0, [r3, #11]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034548
	add r0, r3, #0
	bl DeleteThisEntity
_08034548:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080344E8

