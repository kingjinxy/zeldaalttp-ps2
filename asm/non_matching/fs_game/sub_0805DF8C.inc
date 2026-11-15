	THUMB_FUNC_START sub_0805DF8C
sub_0805DF8C: @ 0x0805DF8C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _0805DFD6
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #11]
_0805DFD6:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805DF8C

	.byte 0x00
	.byte 0x00
