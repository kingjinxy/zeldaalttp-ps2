	THUMB_FUNC_START sub_08056EF4
sub_08056EF4: @ 0x08056EF4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08056F18  @ =gUnknown_08428E88
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
_08056F18:
	.4byte gUnknown_08428E88
	THUMB_FUNC_END sub_08056EF4

