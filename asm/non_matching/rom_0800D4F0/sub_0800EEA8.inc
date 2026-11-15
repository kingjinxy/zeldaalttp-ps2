	THUMB_FUNC_START sub_0800EEA8
sub_0800EEA8: @ 0x0800EEA8
	push {r4,lr}
	mov r2, #0
	ldr r3, _0800EEC8  @ =gUnknown_0202D0E0
	mov r4, #1
_0800EEB0:
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #2
	add r0, r0, r3
	ldrb r1, [r0]
	cmp r1, #0
	bne _0800EECC
	str r1, [r0, #8]
	str r1, [r0, #4]
	str r1, [r0]
	strb r4, [r0]
	b _0800EED8
_0800EEC8:
	.4byte gUnknown_0202D0E0
_0800EECC:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #3
	bls _0800EEB0
	mov r0, #0
_0800EED8:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800EEA8

	.byte 0x00
	.byte 0x00
