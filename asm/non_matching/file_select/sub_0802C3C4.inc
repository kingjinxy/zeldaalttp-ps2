	THUMB_FUNC_START sub_0802C3C4
sub_0802C3C4: @ 0x0802C3C4
	lsl r0, r0, #24
	ldr r2, _0802C3D8  @ =0x03000030
	ldr r1, _0802C3DC  @ =gUnknown_08427768
	lsr r0, r0, #22
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, [r2]
	ldr r1, [r1]
	add r0, r0, r1
	bx lr
_0802C3D8:
	.4byte 0x03000030
_0802C3DC:
	.4byte gUnknown_08427768
	THUMB_FUNC_END sub_0802C3C4

