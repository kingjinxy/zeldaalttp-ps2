	THUMB_FUNC_START sub_0803DD0C
sub_0803DD0C: @ 0x0803DD0C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0803DD88  @ =gUnknown_03000488
	ldr r1, [r7]
	ldr r2, [r1, #120]
	add r1, r2, #0
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _0803DD88  @ =gUnknown_03000488
	ldr r1, [r7]
	ldr r2, [r1, #124]
	add r1, r2, #0
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r0, _0803DD88  @ =gUnknown_03000488
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r0, _0803DD88  @ =gUnknown_03000488
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #26
	lsr r1, r3, #27
	add r2, r1, #0
	lsl r1, r2, #5
	ldr r2, _0803DD8C  @ =gUnknown_03005E26
	add r1, r1, r2
	mov r2, #1
	mov r3, #8
	bl ObjAffineSet
	ldr r0, _0803DD88  @ =gUnknown_03000488
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #26
	lsr r1, r3, #27
	add r2, r1, #0
	lsl r1, r2, #5
	ldr r2, _0803DD90  @ =gUnknown_03006226
	add r1, r1, r2
	mov r2, #1
	mov r3, #8
	bl ObjAffineSet
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0803DD88:
	.4byte gUnknown_03000488
_0803DD8C:
	.4byte gUnknown_03005E26
_0803DD90:
	.4byte gUnknown_03006226
	THUMB_FUNC_END sub_0803DD0C

