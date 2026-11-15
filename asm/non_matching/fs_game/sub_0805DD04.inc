	THUMB_FUNC_START sub_0805DD04
sub_0805DD04: @ 0x0805DD04
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldr r1, _0805DD90  @ =gUnknown_02016D60
	ldrb r0, [r0, #22]
	ldrb r1, [r1, #8]
	cmp r0, r1
	beq _0805DD56
	ldr r0, [r7]
	ldr r1, _0805DD90  @ =gUnknown_02016D60
	ldrb r2, [r0, #22]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #8]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #22]
	ldr r0, _0805DD90  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	add r0, r1, #0
	lsl r1, r0, #2
	ldr r0, _0805DD94  @ =gUnknown_08429278
	add r1, r1, r0
	ldr r0, [r7]
	mov r2, #15
	bl sub_0803D7E8
	ldr r1, [r7]
	ldr r0, [r1, #88]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_0805DD56:
	ldr r0, [r7]
	bl sub_0803D8AC
	cmp r0, #0
	beq _0805DD86
	ldr r0, _0805DD90  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #0
	beq _0805DD86
	ldr r0, _0805DD90  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #4
	beq _0805DD86
	ldr r1, [r7]
	ldr r0, [r1, #88]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
_0805DD86:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805DD90:
	.4byte gUnknown_02016D60
_0805DD94:
	.4byte gUnknown_08429278
	THUMB_FUNC_END sub_0805DD04

