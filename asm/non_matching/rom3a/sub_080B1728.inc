	THUMB_FUNC_START sub_080B1728
sub_080B1728: @ 0x080B1728
	push {r4,lr}
	ldr r1, _080B1750  @ =gUnknown_0816E924
	ldr r4, _080B1754  @ =gRam
	ldr r0, _080B1758  @ =0x000009AD
	add r4, r4, r0
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldrb r0, [r4]
	cmp r0, #9
	beq _080B1748
	bl sub_080A3EE0
_080B1748:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1750:
	.4byte gUnknown_0816E924
_080B1754:
	.4byte gRam
_080B1758:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B1728

