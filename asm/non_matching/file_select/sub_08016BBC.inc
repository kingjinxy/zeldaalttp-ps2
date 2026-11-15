	THUMB_FUNC_START sub_08016BBC
sub_08016BBC: @ 0x08016BBC
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #128
	bne _08016BFC
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl 0x08009EA4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl 0x08009308
	mov r0, #49
	bl 0x08003DFC
_08016BFC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016BBC

	.byte 0x00
	.byte 0x00
