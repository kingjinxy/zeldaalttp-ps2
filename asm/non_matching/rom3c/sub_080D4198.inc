	THUMB_FUNC_START sub_080D4198
sub_080D4198: @ 0x080D4198
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D41B8  @ =gUnknown_08174F2C
	ldr r1, _080D41BC  @ =gRam
	ldr r3, _080D41C0  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080D41B8:
	.4byte gUnknown_08174F2C
_080D41BC:
	.4byte gRam
_080D41C0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D4198

