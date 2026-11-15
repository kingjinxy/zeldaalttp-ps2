	THUMB_FUNC_START sub_08064E38
sub_08064E38: @ 0x08064E38
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, _08064E80  @ =gUnknown_0842947C
	ldr r0, [r7]
	mov r2, #120
	bl sub_0803D7E8
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08064E80:
	.4byte gUnknown_0842947C
	THUMB_FUNC_END sub_08064E38

