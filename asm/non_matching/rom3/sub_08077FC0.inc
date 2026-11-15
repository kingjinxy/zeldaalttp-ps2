	THUMB_FUNC_START sub_08077FC0
sub_08077FC0: @ 0x08077FC0
	ldr r0, _08077FCC  @ =gRam
	ldr r1, _08077FD0  @ =0x000009AD
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	bx lr
_08077FCC:
	.4byte gRam
_08077FD0:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08077FC0

