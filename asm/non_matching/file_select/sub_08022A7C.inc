	THUMB_FUNC_START sub_08022A7C
sub_08022A7C: @ 0x08022A7C
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #63
	mov r3, #0
	mov r0, #61
	strb r0, [r1]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #117
	strb r3, [r0]
	mov r0, #192
	lsl r0, r0, #2
	str r0, [r4, #12]
	mov r0, #192
	lsl r0, r0, #10
	str r0, [r4, #16]
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #32
	strb r0, [r4, #23]
	strb r3, [r4, #24]
	ldrb r0, [r4, #10]
	cmp r0, #1
	bls _08022ADE
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	mov r0, #128
	lsl r0, r0, #18
	add r1, r1, r0
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	b _08022AE6
_08022ADE:
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
_08022AE6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022A7C

