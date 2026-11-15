	THUMB_FUNC_START sub_080E8AEC
sub_080E8AEC: @ 0x080E8AEC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E8B08  @ =gRam
	ldr r2, _080E8B0C  @ =0x00000FC2
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #64
	strb r2, [r1]
	bl sub_080EA2DC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E8B08:
	.4byte gRam
_080E8B0C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E8AEC

