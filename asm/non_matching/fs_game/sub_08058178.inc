	THUMB_FUNC_START sub_08058178
sub_08058178: @ 0x08058178
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _08058194  @ =gUnknown_02016D60
	ldr r2, [r7]
	ldrb r1, [r1, #2]
	ldrb r2, [r2, #11]
	cmp r1, r2
	bne _08058198
	mov r1, #2
	b _0805819A
	.byte 0x00
	.byte 0x00
_08058194:
	.4byte gUnknown_02016D60
_08058198:
	mov r1, #0
_0805819A:
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
	bl GetNextFrame
	ldr r0, _080581F0  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _080581FA
	ldr r0, _080581F0  @ =gUnknown_02016D60
	ldr r1, [r7]
	ldrb r0, [r0, #2]
	ldrb r1, [r1, #11]
	cmp r0, r1
	bne _080581F4
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
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #21]
	b _080581FA
_080581F0:
	.4byte gUnknown_02016D60
_080581F4:
	ldr r0, [r7]
	bl DeleteThisEntity
_080581FA:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08058178

	.byte 0x00
	.byte 0x00
