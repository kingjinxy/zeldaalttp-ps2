	THUMB_FUNC_START sub_080E8310
sub_080E8310: @ 0x080E8310
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E832C  @ =gRam
	ldr r2, _080E8330  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #4
	strb r2, [r1]
	bl sub_080C3758
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E832C:
	.4byte gRam
_080E8330:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E8310

