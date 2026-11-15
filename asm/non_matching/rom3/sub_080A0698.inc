	THUMB_FUNC_START sub_080A0698
sub_080A0698: @ 0x080A0698
	ldr r2, _080A06C4  @ =gRam
	ldr r0, _080A06C8  @ =0x00000978
	add r3, r2, r0
	sub r0, r0, #4
	add r1, r2, r0
	ldrh r0, [r3]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r3]
	ldr r3, _080A06CC  @ =gUnknown_081682F6
	ldr r1, _080A06D0  @ =0x0000096C
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	ldr r1, _080A06D4  @ =0x0000172E
	add r2, r2, r1
	strb r0, [r2]
	bx lr
_080A06C4:
	.4byte gRam
_080A06C8:
	.4byte 0x00000978
_080A06CC:
	.4byte gUnknown_081682F6
_080A06D0:
	.4byte 0x0000096C
_080A06D4:
	.4byte 0x0000172E
	THUMB_FUNC_END sub_080A0698

