	THUMB_FUNC_START sub_080127D4
sub_080127D4: @ 0x080127D4
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #21
	ldr r0, _080127F0  @ =gEntityLinks
	add r1, r1, r0
	ldr r2, [r3, #4]
	cmp r2, r1
	beq _080127FA
	ldrb r3, [r3, #9]
_080127E6:
	ldrb r0, [r2, #9]
	cmp r0, r3
	bne _080127F4
	add r0, r2, #0
	b _080127FC
_080127F0:
	.4byte gEntityLinks
_080127F4:
	ldr r2, [r2, #4]
	cmp r2, r1
	bne _080127E6
_080127FA:
	mov r0, #0
_080127FC:
	bx lr
	THUMB_FUNC_END sub_080127D4

	.byte 0x00
	.byte 0x00
