	THUMB_FUNC_START sub_080353F0
sub_080353F0: @ 0x080353F0
	add r2, r0, #0
	ldr r1, _08035414  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r2, #96]
	and r0, r0, r1
	cmp r0, r1
	bne _08035410
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
	ldrb r0, [r2, #24]
	strb r0, [r2, #23]
_08035410:
	bx lr
	.byte 0x00
	.byte 0x00
_08035414:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080353F0

