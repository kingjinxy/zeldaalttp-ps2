	THUMB_FUNC_START sub_0804E9B4
sub_0804E9B4: @ 0x0804E9B4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804E9D8  @ =gUnknown_08428934
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0804E9D8:
	.4byte gUnknown_08428934
	THUMB_FUNC_END sub_0804E9B4

