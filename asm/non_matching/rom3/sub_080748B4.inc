	THUMB_FUNC_START sub_080748B4
sub_080748B4: @ 0x080748B4
	push {lr}
	bl sub_08132EC8
	ldr r0, _080748D0  @ =gRam
	ldr r1, _080748D4  @ =0x00000CF8
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _080748CA
	bl sub_08132EC8
_080748CA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080748D0:
	.4byte gRam
_080748D4:
	.4byte 0x00000CF8
	THUMB_FUNC_END sub_080748B4

