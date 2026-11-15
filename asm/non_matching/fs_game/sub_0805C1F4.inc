	THUMB_FUNC_START sub_0805C1F4
sub_0805C1F4: @ 0x0805C1F4
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0805C20E
	ldr r0, [r7]
	mov r1, #3
	bl 0x080037EC
	b _0805C214
_0805C20E:
	ldr r0, [r7]
	bl GetNextFrame
_0805C214:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _0805C2A0
	ldr r0, _0805C29C  @ =gUnknown_03000488
	ldr r2, _0805C29C  @ =gUnknown_03000488
	ldr r1, [r7]
	ldrb r4, [r1, #23]
	add r3, r4, #0
	mov r4, #128
	lsl r4, r4, #1
	add r1, r3, r4
	ldrh r3, [r2, #2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	add r3, r1, #0
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2, #2]
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0805C29C  @ =gUnknown_03000488
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r1, _0805C29C  @ =gUnknown_03000488
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0803D770
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	lsr r1, r2, #4
	add r2, r1, #0
	lsl r1, r2, #24
	lsr r2, r1, #24
	add r1, r2, #0
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #4
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	b _0805C2CE
	.byte 0x00
	.byte 0x00
_0805C29C:
	.4byte gUnknown_03000488
_0805C2A0:
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
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #90
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
_0805C2CE:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805C1F4

	.byte 0x00
	.byte 0x00
