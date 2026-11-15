	THUMB_FUNC_START sub_080F50A8
sub_080F50A8: @ 0x080F50A8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F50C8  @ =gUnknown_081796E4
	ldr r1, _080F50CC  @ =gRam
	ldr r3, _080F50D0  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F50C8:
	.4byte gUnknown_081796E4
_080F50CC:
	.4byte gRam
_080F50D0:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F50A8

