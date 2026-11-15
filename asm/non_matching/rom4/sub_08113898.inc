	THUMB_FUNC_START sub_08113898
sub_08113898: @ 0x08113898
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _081138B0  @ =gRam
	ldr r2, _081138B4  @ =0x00000F52
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #11
	strb r1, [r0]
	ldr r1, _081138B8  @ =gUnknown_02010993
	mov r0, #1
	strb r0, [r1]
	bx lr
_081138B0:
	.4byte gRam
_081138B4:
	.4byte 0x00000F52
_081138B8:
	.4byte gUnknown_02010993
	THUMB_FUNC_END sub_08113898

