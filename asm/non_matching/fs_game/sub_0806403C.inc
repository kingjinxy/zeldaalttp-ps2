	THUMB_FUNC_START sub_0806403C
sub_0806403C: @ 0x0806403C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08064060  @ =gUnknown_08429414
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
_08064060:
	.4byte gUnknown_08429414
	THUMB_FUNC_END sub_0806403C

