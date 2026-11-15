	THUMB_FUNC_START sub_080DEF1C
sub_080DEF1C: @ 0x080DEF1C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r5, _080DEF60  @ =gRam
	ldr r1, _080DEF64  @ =0x00000F22
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	lsl r1, r2, #24
	cmp r1, #0
	beq _080DEF40
	ldr r0, _080DEF68  @ =gUnknown_081764B0
	lsr r1, r1, #31
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r2, r0
	strb r0, [r3]
_080DEF40:
	ldr r1, _080DEF6C  @ =0x00000F12
	add r0, r5, r1
	add r3, r4, r0
	ldrb r2, [r3]
	lsl r1, r2, #24
	cmp r1, #0
	beq _080DEF5A
	ldr r0, _080DEF68  @ =gUnknown_081764B0
	lsr r1, r1, #31
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r2, r0
	strb r0, [r3]
_080DEF5A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080DEF60:
	.4byte gRam
_080DEF64:
	.4byte 0x00000F22
_080DEF68:
	.4byte gUnknown_081764B0
_080DEF6C:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080DEF1C

