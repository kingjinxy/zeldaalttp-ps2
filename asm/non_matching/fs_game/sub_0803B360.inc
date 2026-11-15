	THUMB_FUNC_START sub_0803B360
sub_0803B360: @ 0x0803B360
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #21]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #21]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #244
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803B3B2
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0803B3B2:
	mov r0, #1
	b _0803B3B6
_0803B3B6:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803B360

	.byte 0x00
	.byte 0x00
