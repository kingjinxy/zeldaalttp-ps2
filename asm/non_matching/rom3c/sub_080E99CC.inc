	THUMB_FUNC_START sub_080E99CC
sub_080E99CC: @ 0x080E99CC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E9718
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E99FC
	ldr r1, _080E9A04  @ =gUnknown_08177AB4
	ldr r0, _080E9A08  @ =gRam
	ldr r2, _080E9A0C  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080E99FC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9A04:
	.4byte gUnknown_08177AB4
_080E9A08:
	.4byte gRam
_080E9A0C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E99CC

