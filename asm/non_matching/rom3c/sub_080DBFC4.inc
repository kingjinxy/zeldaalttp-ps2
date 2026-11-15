	THUMB_FUNC_START sub_080DBFC4
sub_080DBFC4: @ 0x080DBFC4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DBFE4  @ =gUnknown_08175F20
	ldr r1, _080DBFE8  @ =gRam
	ldr r3, _080DBFEC  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DBFE4:
	.4byte gUnknown_08175F20
_080DBFE8:
	.4byte gRam
_080DBFEC:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DBFC4

