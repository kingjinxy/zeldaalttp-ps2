	THUMB_FUNC_START sub_0803DC68
sub_0803DC68: @ 0x0803DC68
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	bl 0x08003B94
	ldr r0, _0803DD00  @ =gUnknown_03000488
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _0803DD00  @ =gUnknown_03000488
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r0, _0803DD00  @ =gUnknown_03000488
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r0, _0803DD00  @ =gUnknown_03000488
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #26
	lsr r1, r3, #27
	add r2, r1, #0
	lsl r1, r2, #5
	ldr r2, _0803DD04  @ =gUnknown_03005E26
	add r1, r1, r2
	mov r2, #1
	mov r3, #8
	bl ObjAffineSet
	ldr r0, _0803DD00  @ =gUnknown_03000488
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #26
	lsr r1, r3, #27
	add r2, r1, #0
	lsl r1, r2, #5
	ldr r2, _0803DD08  @ =gUnknown_03006226
	add r1, r1, r2
	mov r2, #1
	mov r3, #8
	bl ObjAffineSet
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803DD00:
	.4byte gUnknown_03000488
_0803DD04:
	.4byte gUnknown_03005E26
_0803DD08:
	.4byte gUnknown_03006226
	THUMB_FUNC_END sub_0803DC68

