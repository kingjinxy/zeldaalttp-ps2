	THUMB_FUNC_START sub_0802CF70
sub_0802CF70: @ 0x0802CF70
	push {lr}
	ldr r2, _0802CFA8  @ =gUnknown_03000420
	ldr r0, _0802CFAC  @ =gUnknown_03006730
	ldr r0, [r0]
	add r0, r0, #62
	ldrb r0, [r0]
	lsl r0, r0, #28
	lsr r1, r0, #30
	ldrb r0, [r2, #7]
	cmp r0, r1
	beq _0802CFA2
	strb r1, [r2, #7]
	ldr r0, _0802CFB0  @ =0x0600C200
	ldr r3, _0802CFB4  @ =0x03000030
	ldr r1, _0802CFB8  @ =gUnknown_084277B0
	ldrb r2, [r2, #7]
	lsl r2, r2, #2
	add r2, r2, r1
	ldr r1, [r3]
	ldr r2, [r2]
	add r1, r1, r2
	mov r2, #192
	lsl r2, r2, #1
	bl 0x080009F4
_0802CFA2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802CFA8:
	.4byte gUnknown_03000420
_0802CFAC:
	.4byte gUnknown_03006730
_0802CFB0:
	.4byte 0x0600C200
_0802CFB4:
	.4byte 0x03000030
_0802CFB8:
	.4byte gUnknown_084277B0
	THUMB_FUNC_END sub_0802CF70

