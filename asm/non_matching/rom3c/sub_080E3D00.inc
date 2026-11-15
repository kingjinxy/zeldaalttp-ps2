	THUMB_FUNC_START sub_080E3D00
sub_080E3D00: @ 0x080E3D00
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080E3D20  @ =gRam
	ldr r2, _080E3D24  @ =0x00001042
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E3D1A
	add r0, r1, #0
	bl Sprite3_Move
_080E3D1A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3D20:
	.4byte gRam
_080E3D24:
	.4byte 0x00001042
	THUMB_FUNC_END sub_080E3D00

