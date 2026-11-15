	THUMB_FUNC_START sub_08047B70
sub_08047B70: @ 0x08047B70
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	bl GetNextFrame
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	bl GetNextFrame
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08047C04
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r2, [r0, #84]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #112
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	bl DeleteThisEntity
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	bl DeleteThisEntity
_08047C04:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08047B70

