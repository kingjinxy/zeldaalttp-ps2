	THUMB_FUNC_START sub_08034A60
sub_08034A60: @ 0x08034A60
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #21]
	add r0, r0, #1
	strb r0, [r4, #21]
	ldr r0, _08034AC4  @ =0x0000FF60
	strh r0, [r4, #58]
	mov r0, #60
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #8
	bl sub_0804CE00
	mov r0, #35
	bl sub_0802C2DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #15
	and r0, r0, r1
	ldrb r2, [r4, #30]
	mov r1, #16
	neg r1, r1
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r4, #30]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #12
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #104
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	str r4, [r0, #84]
	mov r0, #104
	mov r1, #2
	mov r2, #4
	bl sub_0804C8A8
	str r4, [r0, #84]
	ldr r0, _08034AC8  @ =0x00000215
	bl play_sound
	pop {r4}
	pop {r0}
	bx r0
_08034AC4:
	.4byte 0x0000FF60
_08034AC8:
	.4byte 0x00000215
	THUMB_FUNC_END sub_08034A60

