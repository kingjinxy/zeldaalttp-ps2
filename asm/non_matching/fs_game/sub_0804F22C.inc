	THUMB_FUNC_START sub_0804F22C
sub_0804F22C: @ 0x0804F22C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804F250  @ =gUnknown_084289D8
	ldr r1, [r7]
	ldrb r2, [r1, #20]
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
_0804F250:
	.4byte gUnknown_084289D8
	THUMB_FUNC_END sub_0804F22C

