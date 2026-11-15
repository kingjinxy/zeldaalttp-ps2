	THUMB_FUNC_START sub_0804C088
sub_0804C088: @ 0x0804C088
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #114
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #114
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #114
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804C11A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #114
	ldrh r0, [r1]
	cmp r0, #0
	bne _0804C11A
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #114
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	mov r2, #1
	mov r3, #0
	bl sub_0804CB7C
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804C11A
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #35
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0804C11A:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl 0x08009FCC
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804C15A
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r7]
	bl sub_08000358
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804C15A
	ldr r0, [r7]
	bl sub_0804BFA4
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804C168
_0804C15A:
	ldr r0, [r7]
	ldrh r1, [r0, #44]
	cmp r1, #0
	beq _0804C168
	ldr r0, [r7]
	bl DeleteThisEntity
_0804C168:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804C088

