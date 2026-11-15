	THUMB_FUNC_START sub_08070994
sub_08070994: @ 0x08070994
	ldr r2, _080709B0  @ =gRam
	ldr r1, _080709B4  @ =0x000009DA
	add r0, r2, r1
	ldrh r1, [r0]
	lsl r1, r1, #1
	ldr r0, _080709B8  @ =gUnknown_02002000
	add r1, r1, r0
	ldr r0, _080709BC  @ =0x00000AAE
	add r2, r2, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	orr r0, r0, r2
	strh r0, [r1]
	bx lr
_080709B0:
	.4byte gRam
_080709B4:
	.4byte 0x000009DA
_080709B8:
	.4byte gUnknown_02002000
_080709BC:
	.4byte 0x00000AAE
	THUMB_FUNC_END sub_08070994

