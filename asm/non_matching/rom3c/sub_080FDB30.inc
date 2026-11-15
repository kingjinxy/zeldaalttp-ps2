	THUMB_FUNC_START sub_080FDB30
sub_080FDB30: @ 0x080FDB30
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080FDB4C  @ =gRam
	ldr r1, _080FDB50  @ =0x00000F52
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	bl sub_080FD81C
	pop {r0}
	bx r0
_080FDB4C:
	.4byte gRam
_080FDB50:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDB30

