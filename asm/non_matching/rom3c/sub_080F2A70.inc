	THUMB_FUNC_START sub_080F2A70
sub_080F2A70: @ 0x080F2A70
	ldr r0, _080F2A88  @ =gRam
	ldr r1, _080F2A8C  @ =0x000009C6
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _080F2A90  @ =gUnknown_02002280
	add r1, r1, r0
	ldrb r0, [r1]
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080F2A88:
	.4byte gRam
_080F2A8C:
	.4byte 0x000009C6
_080F2A90:
	.4byte gUnknown_02002280
	THUMB_FUNC_END sub_080F2A70

