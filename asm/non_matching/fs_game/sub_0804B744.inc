	THUMB_FUNC_START sub_0804B744
sub_0804B744: @ 0x0804B744
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804B784  @ =gUnknown_0813F8CC
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _0804B77A
	ldr r0, [r7]
	bl sub_0804CA20
	ldr r0, [r7]
	bl DeleteThisEntity
_0804B77A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804B784:
	.4byte gUnknown_0813F8CC
	THUMB_FUNC_END sub_0804B744

