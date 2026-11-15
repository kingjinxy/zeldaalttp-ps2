	THUMB_FUNC_START sub_08089F50
sub_08089F50: @ 0x08089F50
	push {lr}
	ldr r0, _08089F6C  @ =gRam
	ldr r2, _08089F70  @ =0x00000B34
	add r1, r0, r2
	ldrh r1, [r1]
	mov r2, #151
	lsl r2, r2, #4
	add r0, r0, r2
	strh r1, [r0]
	bl sub_08087C50
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089F6C:
	.4byte gRam
_08089F70:
	.4byte 0x00000B34
	THUMB_FUNC_END sub_08089F50

