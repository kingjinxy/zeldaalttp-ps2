	THUMB_FUNC_START sub_080FAFCC
sub_080FAFCC: @ 0x080FAFCC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080FAFEC  @ =gUnknown_0817A4DC
	ldr r1, _080FAFF0  @ =gRam
	ldr r3, _080FAFF4  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080FAFEC:
	.4byte gUnknown_0817A4DC
_080FAFF0:
	.4byte gRam
_080FAFF4:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080FAFCC

