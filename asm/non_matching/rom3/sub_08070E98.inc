	THUMB_FUNC_START sub_08070E98
sub_08070E98: @ 0x08070E98
	push {lr}
	bl sub_08130FF8
	bl sub_080792A4
	ldr r1, _08070EB4  @ =gRam
	ldr r0, _08070EB8  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070EB4:
	.4byte gRam
_08070EB8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08070E98

