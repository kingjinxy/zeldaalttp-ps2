	THUMB_FUNC_START sub_080EFCCC
sub_080EFCCC: @ 0x080EFCCC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080EFCE8  @ =gRam
	ldr r2, _080EFCEC  @ =0x00000F52
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #5
	strb r2, [r1]
	mov r1, #192
	bl sub_080ED938
	pop {r0}
	bx r0
_080EFCE8:
	.4byte gRam
_080EFCEC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EFCCC

