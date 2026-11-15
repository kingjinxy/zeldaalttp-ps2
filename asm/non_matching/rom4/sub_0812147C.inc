	THUMB_FUNC_START sub_0812147C
sub_0812147C: @ 0x0812147C
	push {r4,lr}
	ldr r3, _081214A0  @ =gRam
	ldr r1, _081214A4  @ =gUnknown_020068A0
	ldrh r2, [r1]
	ldr r4, _081214A8  @ =0x00000A2A
	add r0, r3, r4
	strh r2, [r0]
	ldrh r0, [r1]
	neg r0, r0
	strh r0, [r1]
	ldr r0, _081214AC  @ =0x000016D6
	add r3, r3, r0
	ldrb r0, [r3]
	add r2, r2, r0
	strb r2, [r3]
	pop {r4}
	pop {r0}
	bx r0
_081214A0:
	.4byte gRam
_081214A4:
	.4byte gUnknown_020068A0
_081214A8:
	.4byte 0x00000A2A
_081214AC:
	.4byte 0x000016D6
	THUMB_FUNC_END sub_0812147C

