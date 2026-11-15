	THUMB_FUNC_START sub_080DE598
sub_080DE598: @ 0x080DE598
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DE6E0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DE5CE
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _080DE5D4  @ =gUnknown_08176410
	ldr r0, _080DE5D8  @ =gRam
	ldr r2, _080DE5DC  @ =0x00001052
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080DE5CE:
	pop {r4}
	pop {r0}
	bx r0
_080DE5D4:
	.4byte gUnknown_08176410
_080DE5D8:
	.4byte gRam
_080DE5DC:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DE598

