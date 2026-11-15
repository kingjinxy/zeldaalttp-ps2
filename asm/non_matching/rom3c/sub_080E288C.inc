	THUMB_FUNC_START sub_080E288C
sub_080E288C: @ 0x080E288C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E28AC  @ =gUnknown_08176A8C
	ldr r1, _080E28B0  @ =gRam
	ldr r3, _080E28B4  @ =0x00000FB2
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_080E22D0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E28AC:
	.4byte gUnknown_08176A8C
_080E28B0:
	.4byte gRam
_080E28B4:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E288C

