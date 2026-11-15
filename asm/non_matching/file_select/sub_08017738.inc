	THUMB_FUNC_START sub_08017738
sub_08017738: @ 0x08017738
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	bl 0x0800099C
	mov r1, #48
	and r0, r0, r1
	add r0, r0, #32
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017738

