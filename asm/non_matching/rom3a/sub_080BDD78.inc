	THUMB_FUNC_START sub_080BDD78
sub_080BDD78: @ 0x080BDD78
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080BDD90  @ =gRam
	ldr r2, _080BDD94  @ =0x00000FC3
	add r1, r1, r2
	mov r2, #255
	strb r2, [r1]
	bl sub_080B9454
	pop {r0}
	bx r0
_080BDD90:
	.4byte gRam
_080BDD94:
	.4byte 0x00000FC3
	THUMB_FUNC_END sub_080BDD78

