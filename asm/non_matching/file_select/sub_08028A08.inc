	THUMB_FUNC_START sub_08028A08
sub_08028A08: @ 0x08028A08
	add r3, r0, #0
	ldrb r0, [r3, #23]
	cmp r0, #0
	beq _08028A40
	add r1, r3, #0
	add r1, r1, #124
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08028A40
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	ldr r0, _08028A44  @ =gUnknown_0201F000
	sub r1, r1, #42
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r2, _08028A48  @ =gUnknown_08137B10
	ldrb r0, [r3, #11]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r2, [r0]
	ldr r0, [r1]
	bic r0, r0, r2
	str r0, [r1]
_08028A40:
	bx lr
	.byte 0x00
	.byte 0x00
_08028A44:
	.4byte gUnknown_0201F000
_08028A48:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08028A08

