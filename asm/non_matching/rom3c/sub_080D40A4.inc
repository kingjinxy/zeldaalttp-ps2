	THUMB_FUNC_START sub_080D40A4
sub_080D40A4: @ 0x080D40A4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D40C4  @ =gUnknown_08174EEC
	ldr r1, _080D40C8  @ =gRam
	ldr r3, _080D40CC  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080D40C4:
	.4byte gUnknown_08174EEC
_080D40C8:
	.4byte gRam
_080D40CC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D40A4

