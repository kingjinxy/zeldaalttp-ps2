	THUMB_FUNC_START sub_0804ED44
sub_0804ED44: @ 0x0804ED44
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804ED70  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_0804EF98
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0804ED70:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0804ED44

