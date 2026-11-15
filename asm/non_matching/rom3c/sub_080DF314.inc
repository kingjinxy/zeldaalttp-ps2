	THUMB_FUNC_START sub_080DF314
sub_080DF314: @ 0x080DF314
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DF334  @ =gUnknown_081764A4
	ldr r1, _080DF338  @ =gRam
	ldr r3, _080DF33C  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DF334:
	.4byte gUnknown_081764A4
_080DF338:
	.4byte gRam
_080DF33C:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DF314

