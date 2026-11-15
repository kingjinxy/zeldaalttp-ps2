	THUMB_FUNC_START sub_080200A0
sub_080200A0: @ 0x080200A0
	push {lr}
	add r1, r0, #0
	add r1, r1, #42
	ldrb r1, [r1]
	mov r3, #3
	and r3, r3, r1
	lsl r3, r3, #1
	ldr r1, _080200CC  @ =gUnknown_0813B544
	add r3, r3, r1
	ldr r1, [r0, #88]
	mov r2, #0
	ldrsb r2, [r3, r2]
	lsl r2, r2, #16
	ldrb r3, [r3, #1]
	lsl r3, r3, #24
	asr r3, r3, #24
	lsl r3, r3, #16
	bl sub_0803D4A4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080200CC:
	.4byte gUnknown_0813B544
	THUMB_FUNC_END sub_080200A0

