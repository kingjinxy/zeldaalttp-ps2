	THUMB_FUNC_START sub_08020060
sub_08020060: @ 0x08020060
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #8
	bl sub_08012494
	add r4, r0, #0
	cmp r4, #0
	beq _08020098
	add r0, r5, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #3
	mov r0, #3
	and r0, r0, r1
	lsl r0, r0, #3
	add r3, r4, #0
	add r3, r3, #43
	mov r1, #0
	strb r0, [r3]
	add r3, r3, #51
	ldrb r0, [r3]
	orr r0, r0, r2
	strb r0, [r3]
	str r5, [r4, #84]
	add r0, r5, #0
	add r0, r0, #41
	strb r1, [r0]
	str r4, [r5, #88]
_08020098:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020060

	.byte 0x00
	.byte 0x00
