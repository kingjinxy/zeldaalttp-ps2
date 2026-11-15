	THUMB_FUNC_START sub_08022AEC
sub_08022AEC: @ 0x08022AEC
	ldr r2, _08022B08  @ =gUnknown_08427668
	ldr r1, _08022B0C  @ =gUnknown_03006C80
	ldrb r1, [r1]
	sub r1, r1, #1
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r2, [r1]
	ldrb r1, [r0, #10]
	add r1, r1, r2
	sub r1, r1, #1
	ldrb r1, [r1]
	add r0, r0, #69
	strb r1, [r0]
	bx lr
_08022B08:
	.4byte gUnknown_08427668
_08022B0C:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08022AEC

