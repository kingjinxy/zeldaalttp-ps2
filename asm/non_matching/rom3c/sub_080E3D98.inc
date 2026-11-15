	THUMB_FUNC_START sub_080E3D98
sub_080E3D98: @ 0x080E3D98
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r0, _080E3DE8  @ =gRam
	ldr r2, _080E3DEC  @ =0x00000F92
	add r1, r0, r2
	add r3, r4, r1
	ldrb r6, [r3]
	ldr r7, _080E3DF0  @ =0x00000FB2
	add r1, r0, r7
	add r2, r4, r1
	ldrb r1, [r2]
	add r5, r1, #0
	add r7, r7, #32
	add r0, r0, r7
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E3DD0
	ldr r0, _080E3DF4  @ =gUnknown_08176908
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080E3DF8  @ =gUnknown_0817690C
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r3]
_080E3DD0:
	add r0, r4, #0
	bl sub_080E3D28
	add r0, r4, #0
	add r1, r6, #0
	add r2, r5, #0
	bl sub_080E3538
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3DE8:
	.4byte gRam
_080E3DEC:
	.4byte 0x00000F92
_080E3DF0:
	.4byte 0x00000FB2
_080E3DF4:
	.4byte gUnknown_08176908
_080E3DF8:
	.4byte gUnknown_0817690C
	THUMB_FUNC_END sub_080E3D98

