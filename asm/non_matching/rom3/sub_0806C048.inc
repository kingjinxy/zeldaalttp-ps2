	THUMB_FUNC_START sub_0806C048
sub_0806C048: @ 0x0806C048
	push {lr}
	bl sub_08130FF8
	ldr r0, _0806C068  @ =gRam
	ldr r1, _0806C06C  @ =0x00000CF8
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806C05E
	bl sub_08130FF8
_0806C05E:
	bl sub_0806AD68
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C068:
	.4byte gRam
_0806C06C:
	.4byte 0x00000CF8
	THUMB_FUNC_END sub_0806C048

