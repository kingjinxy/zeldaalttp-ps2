	THUMB_FUNC_START sub_080F3A54
sub_080F3A54: @ 0x080F3A54
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F3A74  @ =gUnknown_0817947C
	ldr r1, _080F3A78  @ =gRam
	ldr r3, _080F3A7C  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F3A74:
	.4byte gUnknown_0817947C
_080F3A78:
	.4byte gRam
_080F3A7C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F3A54

