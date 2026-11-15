	THUMB_FUNC_START sub_08070ACC
sub_08070ACC: @ 0x08070ACC
	push {lr}
	bl sub_0812FBC0
	ldr r1, _08070AE4  @ =gRam
	ldr r0, _08070AE8  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070AE4:
	.4byte gRam
_08070AE8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08070ACC

