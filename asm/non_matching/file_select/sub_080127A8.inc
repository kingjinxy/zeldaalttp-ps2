	THUMB_FUNC_START sub_080127A8
sub_080127A8: @ 0x080127A8
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #21
	ldr r0, _080127C4  @ =gEntityLinks
	add r1, r1, r0
	ldr r2, [r1, #4]
	cmp r2, r1
	beq _080127CE
_080127BA:
	ldrb r0, [r2, #9]
	cmp r0, r3
	bne _080127C8
	add r0, r2, #0
	b _080127D0
_080127C4:
	.4byte gEntityLinks
_080127C8:
	ldr r2, [r2, #4]
	cmp r2, r1
	bne _080127BA
_080127CE:
	mov r0, #0
_080127D0:
	bx lr
	THUMB_FUNC_END sub_080127A8

	.byte 0x00
	.byte 0x00
