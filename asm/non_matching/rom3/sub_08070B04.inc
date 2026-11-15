	THUMB_FUNC_START sub_08070B04
sub_08070B04: @ 0x08070B04
	push {lr}
	ldr r1, _08070B1C  @ =gRam
	ldr r0, _08070B20  @ =0x000016C4
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #8
	strh r0, [r1]
	bl sub_0806F428
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070B1C:
	.4byte gRam
_08070B20:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_08070B04

