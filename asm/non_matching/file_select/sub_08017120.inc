	THUMB_FUNC_START sub_08017120
sub_08017120: @ 0x08017120
	push {r4,lr}
	add r4, r0, #0
	bl sub_08009664
	add r0, r4, #0
	bl GetNextFrame
	mov r1, #136
	lsl r1, r1, #5
	add r0, r4, #0
	bl sub_08003594
	cmp r0, #0
	bne _08017154
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #6
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
_08017154:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017120

	.byte 0x00
	.byte 0x00
