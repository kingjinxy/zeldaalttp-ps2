	thumb_func_start sub_08008F68
sub_08008F68: @ 0x08008F68
	str r4, [r4, r0]
	lsls r2, r0, #8
	str r4, [r4, r0]
	lsls r2, r0, #8
	asrs r4, r4, #0xc
	lsls r1, r0, #8
	str r4, [r4, r0]
	lsls r2, r0, #8
	lsrs r2, r2, #0xe
	lsls r2, r2, #2
	ldr r3, _08008F9C @ =0x08008F68
	ldr r3, [r3, r2]
	lsls r0, r0, #1
	ldrh r0, [r3, r0]
	lsls r2, r2, #1
	ldr r3, _08008FA0 @ =0x08009280
	ldr r2, [r3, r2]
	lsls r1, r1, #1
	strh r0, [r2, r1]
	mov pc, lr
_08008F90: .4byte 0x080092A0
_08008F94: .4byte 0x08009280
_08008F98: .4byte 0x08009280
_08008F9C: .4byte 0x08008F68
_08008FA0: .4byte 0x08009280

	.GLOBAL sub_08008FA4
sub_08008FA4:
	.INCBIN "baserom.gba", 0x8FA4, 0x9310-0x8FA4

