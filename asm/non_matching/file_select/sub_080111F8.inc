	THUMB_FUNC_START sub_080111F8
sub_080111F8: @ 0x080111F8
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #2
	bhi _08011224
	ldr r0, _08011220  @ =gUnknown_0200B250
	lsl r1, r1, #6
	add r1, r1, r0
	add r0, r1, #0
	add r0, r0, #63
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _08011224
	ldrb r0, [r1, #8]
	cmp r0, #0
	beq _08011224
	mov r0, #1
	b _08011226
	.byte 0x00
	.byte 0x00
_08011220:
	.4byte gUnknown_0200B250
_08011224:
	mov r0, #0
_08011226:
	bx lr
	THUMB_FUNC_END sub_080111F8

