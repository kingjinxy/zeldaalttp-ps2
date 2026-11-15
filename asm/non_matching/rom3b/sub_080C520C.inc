	THUMB_FUNC_START sub_080C520C
sub_080C520C: @ 0x080C520C
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080C5234  @ =gRam
	ldr r2, _080C5238  @ =0x00000EC5
	add r0, r0, r2
	strb r1, [r0]
	mov r2, #32
	cmp r1, #8
	bne _080C5226
	mov r2, #53
_080C5226:
	add r0, r3, #0
	add r1, r2, #0
	bl sub_080C523C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C5234:
	.4byte gRam
_080C5238:
	.4byte 0x00000EC5
	THUMB_FUNC_END sub_080C520C

