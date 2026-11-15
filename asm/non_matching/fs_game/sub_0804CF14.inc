	THUMB_FUNC_START sub_0804CF14
sub_0804CF14: @ 0x0804CF14
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #2
	ldrh r2, [r1]
	add r1, r2, #0
	ldrb r2, [r0, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #4
	str r1, [r0, #16]
	mov r0, #0
	b _0804CF44
_0804CF44:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CF14

