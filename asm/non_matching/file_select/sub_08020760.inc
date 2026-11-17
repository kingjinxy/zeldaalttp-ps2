	THUMB_FUNC_START sub_08020760
sub_08020760: @ 0x08020760
	push {r4,lr}
	add r4, r0, #0
	mov r0, #2
	strb r0, [r4, #20]
	mov r1, #60
	strb r1, [r4, #23]
	add r0, r4, #0
	add r0, r0, #116
	strb r1, [r0]
	mov r0, #4
	strb r0, [r4, #24]
	bl sub_0800099C
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020760

