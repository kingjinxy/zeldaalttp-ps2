	THUMB_FUNC_START sub_0804CF84
sub_0804CF84: @ 0x0804CF84
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #16]
	add r0, r1, #2
	ldrh r1, [r0]
	add r0, r1, #0
	bl sub_0800D67C
	ldr r0, _0804CFDC  @ =gUnknown_02000010
	ldrb r1, [r0, #3]
	mov r2, #224
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #3]
	ldr r0, _0804CFDC  @ =gUnknown_02000010
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #4
	ldrh r2, [r1]
	add r1, r2, #0
	mov r2, #31
	and r1, r1, r2
	ldrb r2, [r0, #4]
	mov r3, #224
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #4]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #6
	str r1, [r0, #16]
	mov r0, #0
	b _0804CFE0
_0804CFDC:
	.4byte gUnknown_02000010
_0804CFE0:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CF84

