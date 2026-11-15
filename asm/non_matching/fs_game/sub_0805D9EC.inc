	THUMB_FUNC_START sub_0805D9EC
sub_0805D9EC: @ 0x0805D9EC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #4
	beq _0805DA66
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #243
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
_0805DA66:
	ldr r0, [r7]
	bl sub_0805D7D0
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0805DA9C  @ =gUnknown_02016D60
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
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	ldr r0, [r7]
	bl sub_08003870
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805DA9C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0805D9EC

