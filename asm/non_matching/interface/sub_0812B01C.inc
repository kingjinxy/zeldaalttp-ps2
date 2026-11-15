	THUMB_FUNC_START sub_0812B01C
sub_0812B01C: @ 0x0812B01C
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #1]
	cmp r0, #1
	bne _0812B066
	ldrb r4, [r5, #10]
	lsl r4, r4, #7
	ldr r2, [r5, #4]
	ldr r1, [r2, #8]
	ldrh r0, [r1, #52]
	mul r4, r0, r4
	lsr r4, r4, #8
	add r0, r1, #0
	add r0, r0, #64
	ldrb r0, [r0]
	mul r4, r0, r4
	lsr r4, r4, #7
	add r1, r1, #65
	ldrb r0, [r1]
	mul r4, r0, r4
	lsr r4, r4, #8
	add r0, r2, #0
	add r0, r0, #77
	ldrb r0, [r0]
	mul r4, r0, r4
	lsr r4, r4, #8
	add r2, r2, #78
	ldrb r0, [r2]
	mul r4, r0, r4
	lsr r4, r4, #15
	add r0, r5, #0
	bl sub_0812AEEC
	mul r4, r0, r4
	lsr r4, r4, #11
	str r4, [r5, #20]
	b _0812B078
_0812B066:
	add r0, r5, #0
	add r0, r0, #88
	ldrb r0, [r0]
	add r0, r0, #230
	ldr r1, [r5, #20]
	mul r0, r1, r0
	lsr r0, r0, #9
	str r0, [r5, #20]
	add r4, r0, #0
_0812B078:
	lsl r0, r4, #1
	add r4, r0, r4
	lsr r4, r4, #9
	add r0, r4, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812B01C

	.byte 0x00
	.byte 0x00
