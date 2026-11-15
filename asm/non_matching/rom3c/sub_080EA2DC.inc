	THUMB_FUNC_START sub_080EA2DC
sub_080EA2DC: @ 0x080EA2DC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080EA2F8  @ =gRam
	ldr r1, _080EA2FC  @ =0x00000EE2
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #8
	strb r1, [r2]
	bl sub_080E9A10
	pop {r0}
	bx r0
_080EA2F8:
	.4byte gRam
_080EA2FC:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_080EA2DC

