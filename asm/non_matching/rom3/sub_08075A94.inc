	THUMB_FUNC_START sub_08075A94
sub_08075A94: @ 0x08075A94
	push {lr}
	ldr r1, _08075AAC  @ =gRam
	ldr r0, _08075AB0  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_0807561C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075AAC:
	.4byte gRam
_08075AB0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08075A94

