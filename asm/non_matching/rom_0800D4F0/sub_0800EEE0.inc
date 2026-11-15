	THUMB_FUNC_START sub_0800EEE0
sub_0800EEE0: @ 0x0800EEE0
	push {r4,lr}
	add r1, r0, #0
	mov r2, #0
	ldr r4, _0800EF00  @ =gUnknown_0202D0E0
	mov r3, #0
_0800EEEA:
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #2
	add r0, r0, r4
	cmp r0, r1
	bne _0800EF04
	str r3, [r1, #8]
	str r3, [r1, #4]
	str r3, [r1]
	b _0800EF0E
	.byte 0x00
	.byte 0x00
_0800EF00:
	.4byte gUnknown_0202D0E0
_0800EF04:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #3
	bls _0800EEEA
_0800EF0E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800EEE0

