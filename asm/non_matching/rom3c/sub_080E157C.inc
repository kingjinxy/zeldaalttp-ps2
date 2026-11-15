	THUMB_FUNC_START sub_080E157C
sub_080E157C: @ 0x080E157C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl GetRandomInt
	ldr r1, _080E15A0  @ =gRam
	ldr r2, _080E15A4  @ =0x00000FD2
	add r1, r1, r2
	add r4, r4, r1
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #128
	strb r1, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E15A0:
	.4byte gRam
_080E15A4:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080E157C

