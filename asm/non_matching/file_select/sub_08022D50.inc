	THUMB_FUNC_START sub_08022D50
sub_08022D50: @ 0x08022D50
	add r2, r0, #0
	ldrb r0, [r2, #10]
	cmp r0, #3
	bne _08022D86
	ldr r0, _08022D78  @ =gLCDRegisterBuffer
	add r1, r2, #0
	add r1, r1, #120
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08022D7C
	ldrb r0, [r2, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r2, #28]
	b _08022D86
	.byte 0x00
	.byte 0x00
_08022D78:
	.4byte gLCDRegisterBuffer
_08022D7C:
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2, #28]
_08022D86:
	bx lr
	THUMB_FUNC_END sub_08022D50

