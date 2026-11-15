	THUMB_FUNC_START sub_0802D744
sub_0802D744: @ 0x0802D744
	push {r4-r6,lr}
	ldr r6, _0802D7A8  @ =gUnknown_03000420
	ldrb r0, [r6, #3]
	lsl r0, r0, #11
	ldr r5, _0802D7AC  @ =gUnknown_0202D11E
	add r0, r0, r5
	mov r1, #192
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r4, _0802D7B0  @ =gUnknown_03006730
	ldr r1, [r4]
	add r1, r1, #62
	ldrb r1, [r1]
	lsl r1, r1, #30
	lsr r1, r1, #30
	mov r2, #46
	bl sub_0802D7BC
	ldrb r0, [r6, #3]
	lsl r0, r0, #11
	add r0, r0, r5
	mov r1, #144
	lsl r1, r1, #2
	add r0, r0, r1
	ldr r1, [r4]
	add r1, r1, #62
	ldrb r1, [r1]
	lsl r1, r1, #28
	lsr r1, r1, #30
	ldr r2, _0802D7B4  @ =0x0000102D
	bl sub_0802D7BC
	ldrb r0, [r6, #3]
	lsl r0, r0, #11
	add r0, r0, r5
	mov r1, #192
	lsl r1, r1, #2
	add r0, r0, r1
	ldr r1, [r4]
	add r1, r1, #62
	ldrb r1, [r1]
	lsl r1, r1, #26
	lsr r1, r1, #30
	ldr r2, _0802D7B8  @ =0x0000202C
	bl sub_0802D7BC
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D7A8:
	.4byte gUnknown_03000420
_0802D7AC:
	.4byte gUnknown_0202D11E
_0802D7B0:
	.4byte gUnknown_03006730
_0802D7B4:
	.4byte 0x0000102D
_0802D7B8:
	.4byte 0x0000202C
	THUMB_FUNC_END sub_0802D744

