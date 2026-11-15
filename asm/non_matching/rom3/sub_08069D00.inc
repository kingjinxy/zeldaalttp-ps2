	THUMB_FUNC_START sub_08069D00
sub_08069D00: @ 0x08069D00
	ldr r1, _08069D18  @ =gRam
	mov r0, #169
	lsl r0, r0, #3
	add r2, r1, r0
	mov r3, #0
	mov r0, #1
	strb r0, [r2]
	ldr r0, _08069D1C  @ =0x0000054C
	add r1, r1, r0
	str r3, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08069D18:
	.4byte gRam
_08069D1C:
	.4byte 0x0000054C
	THUMB_FUNC_END sub_08069D00

