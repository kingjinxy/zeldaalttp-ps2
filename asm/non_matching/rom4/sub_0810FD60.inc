	THUMB_FUNC_START sub_0810FD60
sub_0810FD60: @ 0x0810FD60
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810FD84  @ =gRam
	ldr r3, _0810FD88  @ =0x00001122
	add r2, r1, r3
	add r0, r0, r2
	ldr r3, _0810FD8C  @ =gUnknown_0817D3A0
	ldr r2, _0810FD90  @ =0x00001A56
	add r1, r1, r2
	ldrh r2, [r1]
	mov r1, #1
	and r1, r1, r2
	add r1, r1, r3
	ldrb r2, [r0]
	ldrb r1, [r1]
	orr r2, r2, r1
	strb r2, [r0]
	bx lr
_0810FD84:
	.4byte gRam
_0810FD88:
	.4byte 0x00001122
_0810FD8C:
	.4byte gUnknown_0817D3A0
_0810FD90:
	.4byte 0x00001A56
	THUMB_FUNC_END sub_0810FD60

