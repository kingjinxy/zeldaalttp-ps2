	THUMB_FUNC_START sub_080229CC
sub_080229CC: @ 0x080229CC
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #10]
	cmp r0, #2
	bne _080229DE
	ldrb r0, [r5, #28]
	lsl r0, r0, #30
	cmp r0, #0
	beq _08022A74
_080229DE:
	mov r0, #96
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08022A6E
	mov r0, #129
	strb r0, [r4, #27]
	ldrb r1, [r5, #10]
	sub r1, r1, #1
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, #3
	add r1, r4, #0
	add r1, r1, #35
	strb r0, [r1]
	ldrh r0, [r5, #50]
	strh r0, [r4, #50]
	ldrh r0, [r5, #54]
	strh r0, [r4, #54]
	ldrb r1, [r5, #30]
	lsl r1, r1, #28
	lsr r1, r1, #28
	add r1, r1, #1
	mov r0, #15
	and r1, r1, r0
	ldrb r2, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldrb r1, [r5, #29]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r3, [r4, #29]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldrb r1, [r5, #31]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r3, [r4, #31]
	add r0, r2, #0
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r4, #31]
	ldrb r0, [r5, #28]
	lsr r0, r0, #6
	lsl r0, r0, #6
	ldrb r1, [r4, #28]
	and r2, r2, r1
	orr r2, r2, r0
	strb r2, [r4, #28]
	add r0, r5, #0
	add r0, r0, #32
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #32
	strb r1, [r0]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2]
_08022A6E:
	mov r0, #167
	bl play_sound
_08022A74:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080229CC

	.byte 0x00
	.byte 0x00
