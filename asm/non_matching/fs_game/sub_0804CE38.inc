	THUMB_FUNC_START sub_0804CE38
sub_0804CE38: @ 0x0804CE38
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	ldr r0, _0804CE58  @ =gUnknown_0202A7E0
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #2
	add r2, r2, r1
	lsl r1, r2, #2
	add r0, r0, r1
	ldrb r1, [r0, #2]
	add r0, r1, #0
	b _0804CE5C
_0804CE58:
	.4byte gUnknown_0202A7E0
_0804CE5C:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CE38

