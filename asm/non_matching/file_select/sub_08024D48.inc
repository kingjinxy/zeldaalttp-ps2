	THUMB_FUNC_START sub_08024D48
sub_08024D48: @ 0x08024D48
	push {lr}
	add r3, r0, #0
	add r3, r3, #110
	ldrh r2, [r3]
	mov r1, #63
	and r1, r1, r2
	strh r1, [r3]
	ldr r1, [r0, #84]
	ldrb r2, [r1, #30]
	lsl r2, r2, #28
	lsr r2, r2, #28
	lsl r1, r2, #4
	orr r1, r1, r2
	strb r1, [r0, #30]
	ldr r3, [r0, #112]
	ldrb r2, [r3, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	strb r1, [r3, #28]
	mov r1, #3
	bl sub_08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024D48

	.byte 0x00
	.byte 0x00
