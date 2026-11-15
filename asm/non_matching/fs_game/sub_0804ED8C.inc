	THUMB_FUNC_START sub_0804ED8C
sub_0804ED8C: @ 0x0804ED8C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804EDB8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _0804EDB0
	ldr r0, [r7]
	bl sub_0804EDBC
_0804EDB0:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0804EDB8:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0804ED8C

