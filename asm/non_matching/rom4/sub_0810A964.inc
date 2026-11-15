	THUMB_FUNC_START sub_0810A964
sub_0810A964: @ 0x0810A964
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _0810A9A8  @ =gRam
	ldr r1, _0810A9AC  @ =0x00000FC2
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _0810A9BC
	cmp r0, #7
	bne _0810A998
	ldr r0, _0810A9B0  @ =0x00000ED2
	add r3, r6, r0
	add r3, r5, r3
	ldrb r1, [r3]
	add r0, r0, #32
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #29
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
_0810A998:
	ldr r0, _0810A9B4  @ =0x00000F92
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _0810A9B8  @ =gUnknown_0817C8B8
	ldrb r0, [r4]
	lsr r0, r0, #2
	b _0810AA02
	.byte 0x00
	.byte 0x00
_0810A9A8:
	.4byte gRam
_0810A9AC:
	.4byte 0x00000FC2
_0810A9B0:
	.4byte 0x00000ED2
_0810A9B4:
	.4byte 0x00000F92
_0810A9B8:
	.4byte gUnknown_0817C8B8
_0810A9BC:
	ldr r0, _0810AA10  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C3028
	lsl r0, r0, #1
	mov r1, #150
	lsl r1, r1, #4
	add r4, r6, r1
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C36D8
	ldrb r1, [r4]
	orr r1, r1, r0
	strb r1, [r4]
	ldr r0, _0810AA14  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _0810AA18  @ =gUnknown_0817C8C0
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810AA1C  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _0810AA20  @ =gUnknown_0817C8C4
	mov r0, #0
	ldrsb r0, [r4, r0]
_0810AA02:
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810AA10:
	.4byte 0x00000F52
_0810AA14:
	.4byte 0x00000F22
_0810AA18:
	.4byte gUnknown_0817C8C0
_0810AA1C:
	.4byte 0x00000F12
_0810AA20:
	.4byte gUnknown_0817C8C4
	THUMB_FUNC_END sub_0810A964

