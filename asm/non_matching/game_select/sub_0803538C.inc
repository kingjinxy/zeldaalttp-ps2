	THUMB_FUNC_START sub_0803538C
sub_0803538C: @ 0x0803538C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #10]
	bl sub_08013D20
	str r0, [r4, #96]
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	ldrb r1, [r4, #23]
	bl sub_08012F84
	str r0, [r4, #100]
	ldrh r0, [r4, #50]
	strb r0, [r4, #24]
	ldrh r0, [r4, #54]
	strb r0, [r4, #22]
	ldrb r0, [r4, #11]
	lsr r0, r0, #5
	add r1, r4, #0
	add r1, r1, #104
	strb r0, [r1]
	ldrb r1, [r4, #11]
	mov r0, #31
	and r0, r0, r1
	strb r0, [r4, #11]
	ldrh r0, [r4, #50]
	lsl r0, r0, #16
	asr r0, r0, #24
	mov r1, #1
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #106
	strh r0, [r1]
	mov r3, #128
	lsl r3, r3, #8
	add r2, r3, #0
	cmp r0, #0
	bne _080353E6
	mov r0, #128
	lsl r0, r0, #7
	add r2, r0, #0
_080353E6:
	strh r2, [r1]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803538C

	.byte 0x00
	.byte 0x00
