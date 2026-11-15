	THUMB_FUNC_START sub_080E757C
sub_080E757C: @ 0x080E757C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _080E75B4  @ =gRam
	ldr r3, _080E75B8  @ =0x00000FB2
	add r2, r4, r3
	add r2, r0, r2
	strb r1, [r2]
	ldr r2, _080E75BC  @ =0x00000F22
	add r3, r4, r2
	add r3, r0, r3
	ldr r2, _080E75C0  @ =gUnknown_08177804
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r3]
	ldr r3, _080E75C4  @ =0x00000F12
	add r4, r4, r3
	add r0, r0, r4
	ldr r2, _080E75C8  @ =gUnknown_08177808
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E75B4:
	.4byte gRam
_080E75B8:
	.4byte 0x00000FB2
_080E75BC:
	.4byte 0x00000F22
_080E75C0:
	.4byte gUnknown_08177804
_080E75C4:
	.4byte 0x00000F12
_080E75C8:
	.4byte gUnknown_08177808
	THUMB_FUNC_END sub_080E757C

