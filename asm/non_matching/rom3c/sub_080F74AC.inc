	THUMB_FUNC_START sub_080F74AC
sub_080F74AC: @ 0x080F74AC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F74CC  @ =gUnknown_08179B6C
	ldr r1, _080F74D0  @ =gRam
	ldr r3, _080F74D4  @ =0x00000F82
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F74CC:
	.4byte gUnknown_08179B6C
_080F74D0:
	.4byte gRam
_080F74D4:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080F74AC

