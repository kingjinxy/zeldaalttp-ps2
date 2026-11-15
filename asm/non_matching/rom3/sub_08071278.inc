	THUMB_FUNC_START sub_08071278
sub_08071278: @ 0x08071278
	push {lr}
	bl sub_08130FF8
	ldr r1, _08071290  @ =gRam
	ldr r0, _08071294  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08071290:
	.4byte gRam
_08071294:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071278

