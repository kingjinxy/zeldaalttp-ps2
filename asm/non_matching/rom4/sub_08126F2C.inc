	THUMB_FUNC_START sub_08126F2C
sub_08126F2C: @ 0x08126F2C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08126F68  @ =gUnknown_03000050
	mov r12, r1
	add r1, r1, #48
	add r1, r0, r1
	mov r3, #0
	mov r2, #72
	strb r2, [r1]
	mov r1, r12
	add r1, r1, #56
	add r1, r0, r1
	strb r3, [r1]
	mov r1, r12
	add r1, r1, #72
	add r1, r0, r1
	mov r2, #168
	strb r2, [r1]
	mov r1, r12
	add r1, r1, #80
	add r1, r0, r1
	strb r3, [r1]
	mov r1, r12
	add r1, r1, #16
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08126F68:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126F2C

