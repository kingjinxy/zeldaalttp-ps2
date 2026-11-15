	THUMB_FUNC_START sub_08089EEC
sub_08089EEC: @ 0x08089EEC
	push {lr}
	ldr r2, _08089F20  @ =gRam
	ldr r1, _08089F24  @ =0x00000B0A
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r3, _08089F28  @ =0x00000C22
	add r1, r2, r3
	add r0, r0, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	sub r0, r0, #8
	sub r3, r3, #238
	add r1, r2, r3
	strh r0, [r1]
	mov r1, #151
	lsl r1, r1, #4
	add r2, r2, r1
	strh r0, [r2]
	bl sub_08087C50
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08089F20:
	.4byte gRam
_08089F24:
	.4byte 0x00000B0A
_08089F28:
	.4byte 0x00000C22
	THUMB_FUNC_END sub_08089EEC

