	THUMB_FUNC_START sub_080E9A78
sub_080E9A78: @ 0x080E9A78
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080E9B1C  @ =gRam
	ldr r1, _080E9B20  @ =0x00000FC2
	add r0, r6, r1
	add r2, r5, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080E9B14
	ldr r0, _080E9B24  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #8
	strb r0, [r2]
	bl GetRandomInt
	mov r4, #3
	and r4, r4, r0
	ldr r1, _080E9B28  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	ldrb r3, [r0]
	add r1, r1, #16
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080E9B2C  @ =gUnknown_08177C34
	add r0, r4, r0
	orr r3, r3, r1
	ldrb r0, [r0]
	add r3, r3, r0
	ldr r0, _080E9B30  @ =gUnknown_08177C38
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r3, r3, r0
	ldr r1, _080E9B34  @ =0x00000F82
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r1, _080E9B38  @ =0x00001082
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080E9B3C  @ =gUnknown_08177C3C
	add r0, r4, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080E9B40  @ =gUnknown_08177C40
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080E9B44  @ =0x00000EE2
	add r0, r6, r1
	add r0, r5, r0
	strb r3, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	lsr r3, r3, #8
	strb r3, [r0]
	sub r1, r1, #48
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
_080E9B14:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9B1C:
	.4byte gRam
_080E9B20:
	.4byte 0x00000FC2
_080E9B24:
	.4byte 0x00000F52
_080E9B28:
	.4byte 0x00000F62
_080E9B2C:
	.4byte gUnknown_08177C34
_080E9B30:
	.4byte gUnknown_08177C38
_080E9B34:
	.4byte 0x00000F82
_080E9B38:
	.4byte 0x00001082
_080E9B3C:
	.4byte gUnknown_08177C3C
_080E9B40:
	.4byte gUnknown_08177C40
_080E9B44:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_080E9A78

