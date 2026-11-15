	THUMB_FUNC_START sub_0804CFE8
sub_0804CFE8: @ 0x0804CFE8
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #16]
	add r0, r1, #2
	ldrh r1, [r0]
	lsl r0, r1, #16
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #4
	ldrh r2, [r1]
	orr r0, r0, r2
	str r0, [r7, #4]
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl play_sound
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #6
	str r1, [r0, #16]
	mov r0, #1
	b _0804D01C
_0804D01C:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CFE8

