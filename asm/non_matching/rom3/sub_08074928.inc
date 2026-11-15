	THUMB_FUNC_START sub_08074928
sub_08074928: @ 0x08074928
	ldr r1, _08074944  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r0, _08074948  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08074944:
	.4byte gRam
_08074948:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08074928

