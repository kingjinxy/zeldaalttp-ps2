	THUMB_FUNC_START sub_081270B4
sub_081270B4: @ 0x081270B4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _081270CC  @ =gUnknown_03000050
	add r1, r2, #0
	add r1, r1, #88
	add r1, r0, r1
	mov r3, #0
	strb r3, [r1]
	add r2, r2, #96
	add r0, r0, r2
	strb r3, [r0]
	bx lr
_081270CC:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_081270B4

