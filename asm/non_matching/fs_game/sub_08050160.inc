	THUMB_FUNC_START sub_08050160
sub_08050160: @ 0x08050160
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _080501A0
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	b _080501B6
_080501A0:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #12
	bne _080501B6
	ldr r0, [r7]
	bl sub_08050444
	ldr r0, [r7]
	mov r1, #17
	bl 0x08003E10
_080501B6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08050160

	.byte 0x00
	.byte 0x00
