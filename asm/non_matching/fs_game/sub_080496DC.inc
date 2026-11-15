	THUMB_FUNC_START sub_080496DC
sub_080496DC: @ 0x080496DC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _08049704  @ =gUnknown_08147514
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #112]
	ldr r0, [r7]
	bl sub_080494B8
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08049704:
	.4byte gUnknown_08147514
	THUMB_FUNC_END sub_080496DC

