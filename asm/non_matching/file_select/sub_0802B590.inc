	THUMB_FUNC_START sub_0802B590
sub_0802B590: @ 0x0802B590
	push {r4,lr}
	add r4, r0, #0
	ldr r1, [r4, #84]
	mov r0, #0
	str r0, [r1, #88]
	ldr r0, [r4, #84]
	bl 0x08003E24
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	ldrb r0, [r4, #21]
	add r0, r0, #1
	strb r0, [r4, #21]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B590

