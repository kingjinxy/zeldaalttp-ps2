	THUMB_FUNC_START sub_0805DAA0
sub_0805DAA0: @ 0x0805DAA0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0805D7D0
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0805DAE8  @ =gUnknown_02016D60
	ldrh r1, [r1, #50]
	ldrh r2, [r2, #38]
	add r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	bl sub_08059A2C
	cmp r0, #0
	bne _0805DADE
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #243
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
_0805DADE:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805DAE8:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0805DAA0

