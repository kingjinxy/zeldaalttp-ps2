	THUMB_FUNC_START sub_080D36DC
sub_080D36DC: @ 0x080D36DC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D36FC  @ =gUnknown_08174D3C
	ldr r1, _080D3700  @ =gRam
	ldr r3, _080D3704  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080D36FC:
	.4byte gUnknown_08174D3C
_080D3700:
	.4byte gRam
_080D3704:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D36DC

