	THUMB_FUNC_START sub_08045068
sub_08045068: @ 0x08045068
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strb r1, [r0]
	mov r0, #3
	bl sub_08012468
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080450B2
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_080450B2:
	mov r0, #3
	bl sub_08012468
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _08045104
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #50]
	sub r1, r2, #6
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #8]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_08045104:
	ldr r1, [r7, #4]
	ldr r2, [r7, #8]
	ldr r0, [r7]
	bl sub_08044198
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	ldrsb r1, [r0, r1]
	cmp r1, #2
	bne _08045126
	ldr r0, [r7, #4]
	ldr r1, [r7, #8]
	str r1, [r0, #84]
	ldr r0, [r7, #8]
	ldr r1, [r7, #4]
	str r1, [r0, #84]
_08045126:
	ldr r0, [r7]
	ldr r1, [r0, #96]
	cmp r1, #0
	beq _0804515E
	ldr r1, [r7]
	ldr r0, [r1, #96]
	ldr r1, [r7]
	ldr r3, [r1, #96]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #98
	add r2, r7, #0
	add r2, r2, #12
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1]
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #98
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_0804515E:
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080451BC
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	sub r1, r2, #4
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_080451BC:
	ldr r0, [r7]
	bl DeleteThisEntity
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08045068

	.byte 0x00
	.byte 0x00
