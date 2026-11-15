	THUMB_FUNC_START sub_0800EE50
sub_0800EE50: @ 0x0800EE50
	push {r4,lr}
	lsl r0, r0, #16
	lsr r3, r0, #24
	mov r1, #7
	and r3, r3, r1
	lsl r0, r0, #8
	lsr r4, r0, #24
	cmp r3, #1
	bne _0800EE78
	ldr r0, _0800EE74  @ =gGameLanguage
	ldrb r0, [r0]
	cmp r0, #0
	beq _0800EE88
	cmp r4, #128
	bls _0800EE88
	mov r3, #0
	b _0800EE88
	.byte 0x00
	.byte 0x00
_0800EE74:
	.4byte gGameLanguage
_0800EE78:
	cmp r3, #1
	blt _0800EE88
	cmp r3, #4
	bgt _0800EE88
	cmp r3, #3
	blt _0800EE88
	lsl r0, r4, #17
	lsr r4, r0, #16
_0800EE88:
	ldr r2, _0800EEA0  @ =0x03000030
	ldr r0, _0800EEA4  @ =gUnknown_08427460
	lsl r1, r3, #2
	add r1, r1, r0
	ldr r0, [r2]
	ldr r1, [r1]
	add r0, r0, r1
	lsl r1, r4, #6
	add r0, r0, r1
	pop {r4}
	pop {r1}
	bx r1
_0800EEA0:
	.4byte 0x03000030
_0800EEA4:
	.4byte gUnknown_08427460
	THUMB_FUNC_END sub_0800EE50

