	THUMB_FUNC_START sub_080DE220
sub_080DE220: @ 0x080DE220
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DE238  @ =gHeartsFiller
	mov r1, #160
	strb r1, [r2]
	ldr r1, _080DE23C  @ =gRam
	ldr r2, _080DE240  @ =0x00000F52
	add r1, r1, r2
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bx lr
_080DE238:
	.4byte gHeartsFiller
_080DE23C:
	.4byte gRam
_080DE240:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE220

