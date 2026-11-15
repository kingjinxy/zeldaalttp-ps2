	THUMB_FUNC_START sub_08042208
sub_08042208: @ 0x08042208
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #14
	bhi _0804222A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_08003870
	b _08042230
_0804222A:
	ldr r0, [r7]
	bl GetNextFrame
_08042230:
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
	bne _08042260
	ldr r0, [r7]
	bl DeleteThisEntity
_08042260:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08042208

