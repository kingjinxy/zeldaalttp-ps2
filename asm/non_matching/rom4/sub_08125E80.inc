	THUMB_FUNC_START sub_08125E80
sub_08125E80: @ 0x08125E80
	lsl r0, r0, #24
	ldr r1, _08125E94  @ =gRam
	ldr r2, _08125E98  @ =0x00001BBC
	add r1, r1, r2
	ldr r2, _08125E9C  @ =gUnknown_08180628
	lsr r0, r0, #22
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r1]
	bx lr
_08125E94:
	.4byte gRam
_08125E98:
	.4byte 0x00001BBC
_08125E9C:
	.4byte gUnknown_08180628
	THUMB_FUNC_END sub_08125E80

