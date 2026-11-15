	THUMB_FUNC_START sub_0802C12C
sub_0802C12C: @ 0x0802C12C
	ldr r1, _0802C144  @ =gUnknown_0202A3F0
	add r0, r0, #83
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	bx lr
	.byte 0x00
	.byte 0x00
_0802C144:
	.4byte gUnknown_0202A3F0
	THUMB_FUNC_END sub_0802C12C

