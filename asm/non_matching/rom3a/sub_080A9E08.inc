	THUMB_FUNC_START sub_080A9E08
sub_080A9E08: @ 0x080A9E08
	push {lr}
	ldr r1, _080A9E30  @ =gUnknown_03002C7E
	mov r2, #1
_080A9E0E:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #24
	ble _080A9E1E
	strb r2, [r1]
_080A9E1E:
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldr r3, _080A9E34  @ =gUnknown_0200231F
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A9E0E
	pop {r0}
	bx r0
_080A9E30:
	.4byte gUnknown_03002C7E
_080A9E34:
	.4byte gUnknown_0200231F
	THUMB_FUNC_END sub_080A9E08

