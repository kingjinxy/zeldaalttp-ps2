	THUMB_FUNC_START sub_080B7EEC
sub_080B7EEC: @ 0x080B7EEC
	push {r4,lr}
	ldr r2, _080B7F20  @ =gUnknown_02006880
	ldr r1, _080B7F24  @ =gRam
	ldr r3, _080B7F28  @ =0x00000958
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r2, _080B7F2C  @ =0x00000544
	add r0, r1, r2
	mov r4, #0
	strb r4, [r0]
	ldr r3, _080B7F30  @ =0x00000546
	add r0, r1, r3
	strb r4, [r0]
	ldr r0, _080B7F34  @ =0x00000547
	add r1, r1, r0
	strb r4, [r1]
	bl sub_081295CC
	bl sub_081296B8
	cmp r0, #0
	beq _080B7F3C
	ldr r0, _080B7F38  @ =gUnknown_020068C4
	strh r4, [r0]
	b _080B7F42
_080B7F20:
	.4byte gUnknown_02006880
_080B7F24:
	.4byte gRam
_080B7F28:
	.4byte 0x00000958
_080B7F2C:
	.4byte 0x00000544
_080B7F30:
	.4byte 0x00000546
_080B7F34:
	.4byte 0x00000547
_080B7F38:
	.4byte gUnknown_020068C4
_080B7F3C:
	ldr r1, _080B7F48  @ =gUnknown_020068C4
	mov r0, #1
	strh r0, [r1]
_080B7F42:
	pop {r4}
	pop {r0}
	bx r0
_080B7F48:
	.4byte gUnknown_020068C4
	THUMB_FUNC_END sub_080B7EEC

