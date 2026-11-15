	THUMB_FUNC_START sub_080209DC
sub_080209DC: @ 0x080209DC
	push {r4,lr}
	add r4, r0, #0
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #8
	strb r0, [r4, #23]
	str r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #27
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080209DC

