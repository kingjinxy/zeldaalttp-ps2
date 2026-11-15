	THUMB_FUNC_START sub_08057758
sub_08057758: @ 0x08057758
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	beq _08057784
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	b _08057810
_08057784:
	ldr r0, _080577D4  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldr r0, [r0]
	ldr r1, [r1, #96]
	and r0, r0, r1
	ldr r1, [r7]
	ldr r2, [r1, #96]
	cmp r0, r2
	bne _080577D8
	ldr r0, _080577D4  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _080577D4  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r7]
	ldr r3, [r2, #100]
	mvn r2, r3
	ldr r1, [r1]
	and r2, r2, r1
	str r2, [r0]
	b _08057810
	.byte 0x00
	.byte 0x00
_080577D4:
	.4byte gUnknown_0201F000
_080577D8:
	ldr r0, _08057818  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08057818  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r7]
	ldr r1, [r1]
	ldr r2, [r2, #100]
	orr r1, r1, r2
	str r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08057810
	ldr r0, [r7]
	bl DeleteThisEntity
_08057810:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08057818:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08057758

