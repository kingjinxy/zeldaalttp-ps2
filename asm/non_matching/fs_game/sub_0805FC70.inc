	THUMB_FUNC_START sub_0805FC70
sub_0805FC70: @ 0x0805FC70
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #76]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #76]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrh r3, [r2, #58]
	add r1, r3, #0
	sub r1, r1, #18
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7]
	mov r1, #0
	ldr r2, [r7]
	ldr r3, [r2, #76]
	add r2, r3, #0
	add r3, r3, #35
	ldrb r2, [r3]
	cmp r2, #165
	beq _0805FCE6
	ldr r2, [r7]
	ldr r3, [r2, #76]
	add r2, r3, #0
	add r3, r3, #35
	ldrb r2, [r3]
	cmp r2, #169
	beq _0805FCE6
	mov r1, #1
_0805FCE6:
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	ldr r1, _0805FD48  @ =gUnknown_03006C80
	ldr r2, [r7]
	ldr r3, [r2, #76]
	ldrb r2, [r3, #10]
	add r3, r1, #0
	add r1, r1, #92
	add r2, r1, r2
	ldrb r0, [r0, #23]
	ldrb r1, [r2]
	cmp r0, r1
	beq _0805FD68
	ldr r0, [r7]
	ldr r1, _0805FD48  @ =gUnknown_03006C80
	ldr r2, [r7]
	ldr r3, [r2, #76]
	ldrb r2, [r3, #10]
	add r3, r1, #0
	add r4, r1, #0
	add r4, r4, #92
	add r1, r4, r2
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r1, [r7]
	ldrb r0, [r1, #23]
	cmp r0, #0
	beq _0805FD60
	cmp r0, #0
	blt _0805FD60
	cmp r0, #4
	bgt _0805FD60
	b _0805FD4C
_0805FD48:
	.4byte gUnknown_03006C80
_0805FD4C:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	sub r0, r1, #1
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl 0x08003870
	b _0805FD68
_0805FD60:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805FD68
_0805FD68:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805FC70

