	THUMB_FUNC_START sub_08016DF8
sub_08016DF8: @ 0x08016DF8
	add r2, r0, #0
	ldr r0, [r2, #96]
	cmp r0, #0
	beq _08016E18
	ldr r0, [r2, #84]
	cmp r0, #0
	beq _08016E18
	ldrb r0, [r2, #11]
	cmp r0, #1
	bne _08016E18
	add r0, r2, #0
	add r0, r0, #104
	mov r1, #0
	strb r1, [r0]
	ldr r0, [r2, #84]
	strb r1, [r0, #11]
_08016E18:
	bx lr
	THUMB_FUNC_END sub_08016DF8

	.byte 0x00
	.byte 0x00
