	THUMB_FUNC_START sub_080605EC
sub_080605EC: @ 0x080605EC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #124]
	ldrb r0, [r1]
	cmp r0, #0
	beq _0806062E
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #124]
	add r2, r0, #0
	add r0, r0, #120
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_0806062E:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080605EC

	.byte 0x00
	.byte 0x00
