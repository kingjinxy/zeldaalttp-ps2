	THUMB_FUNC_START sub_080F2A94
sub_080F2A94: @ 0x080F2A94
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F2AC0  @ =gRam
	ldr r2, _080F2AC4  @ =0x00000AA8
	add r3, r1, r2
	ldr r2, _080F2AC8  @ =gUnknown_08179264
	ldr r4, _080F2ACC  @ =0x00000F02
	add r1, r1, r4
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r3]
	pop {r4}
	pop {r0}
	bx r0
_080F2AC0:
	.4byte gRam
_080F2AC4:
	.4byte 0x00000AA8
_080F2AC8:
	.4byte gUnknown_08179264
_080F2ACC:
	.4byte 0x00000F02
	THUMB_FUNC_END sub_080F2A94

