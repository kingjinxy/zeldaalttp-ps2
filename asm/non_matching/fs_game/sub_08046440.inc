	THUMB_FUNC_START sub_08046440
sub_08046440: @ 0x08046440
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_08047538
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #110
	ldrh r0, [r1]
	cmp r0, #0
	bne _08046488
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #28
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #30
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_08046488:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08046440

