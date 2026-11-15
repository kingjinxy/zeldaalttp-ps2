	THUMB_FUNC_START sub_08071240
sub_08071240: @ 0x08071240
	push {lr}
	bl sub_08130FF8
	bl sub_0807FF10
	bl sub_0807597C
	bl sub_0812F150
	bl sub_08092874
	bl sub_0806F2E4
	bl sub_08114600
	ldr r1, _08071270  @ =gRam
	ldr r0, _08071274  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08071270:
	.4byte gRam
_08071274:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071240

