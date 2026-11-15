	THUMB_FUNC_START sub_080EAAF0
sub_080EAAF0: @ 0x080EAAF0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080EAB0C  @ =gRam
	ldr r3, _080EAB10  @ =0x00000996
	add r2, r1, r3
	ldrb r2, [r2]
	sub r3, r3, #42
	add r1, r1, r3
	strb r2, [r1]
	bl sub_080EA860
	pop {r0}
	bx r0
_080EAB0C:
	.4byte gRam
_080EAB10:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080EAAF0

