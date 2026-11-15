	THUMB_FUNC_START sub_080F5340
sub_080F5340: @ 0x080F5340
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F535C  @ =gRam
	ldr r1, _080F5360  @ =0x00000ED2
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #3
	strb r1, [r2]
	bl sub_080C35A4
	pop {r0}
	bx r0
_080F535C:
	.4byte gRam
_080F5360:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080F5340

