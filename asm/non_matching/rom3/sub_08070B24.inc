	THUMB_FUNC_START sub_08070B24
sub_08070B24: @ 0x08070B24
	push {lr}
	ldr r1, _08070B3C  @ =gRam
	ldr r0, _08070B40  @ =0x000016C4
	add r1, r1, r0
	ldrh r0, [r1]
	sub r0, r0, #10
	strh r0, [r1]
	bl sub_0806F668
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070B3C:
	.4byte gRam
_08070B40:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_08070B24

