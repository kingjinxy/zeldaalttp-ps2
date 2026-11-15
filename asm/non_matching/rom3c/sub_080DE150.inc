	THUMB_FUNC_START sub_080DE150
sub_080DE150: @ 0x080DE150
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DE170  @ =gUnknown_081763A4
	ldr r1, _080DE174  @ =gRam
	ldr r3, _080DE178  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DE170:
	.4byte gUnknown_081763A4
_080DE174:
	.4byte gRam
_080DE178:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE150

