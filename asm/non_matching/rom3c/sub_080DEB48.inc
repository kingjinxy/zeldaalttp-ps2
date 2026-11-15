	THUMB_FUNC_START sub_080DEB48
sub_080DEB48: @ 0x080DEB48
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DEB68  @ =gUnknown_0817644C
	ldr r1, _080DEB6C  @ =gRam
	ldr r3, _080DEB70  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DEB68:
	.4byte gUnknown_0817644C
_080DEB6C:
	.4byte gRam
_080DEB70:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DEB48

