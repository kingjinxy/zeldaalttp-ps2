	THUMB_FUNC_START sub_08027C14
sub_08027C14: @ 0x08027C14
	add r3, r0, #0
	ldr r1, _08027C44  @ =gUnknown_08137B90
	add r0, r0, #42
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	mov r2, #0
	ldrsb r2, [r0, r2]
	lsl r2, r2, #1
	ldr r0, [r3, #124]
	add r0, r0, r2
	add r1, r3, #0
	add r1, r1, #112
	ldrh r1, [r1]
	strh r1, [r0]
	sub r0, r0, r2
	sub r0, r0, r2
	add r1, r3, #0
	add r1, r1, #116
	ldrh r1, [r1]
	strh r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08027C44:
	.4byte gUnknown_08137B90
	THUMB_FUNC_END sub_08027C14

