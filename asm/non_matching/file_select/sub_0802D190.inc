	THUMB_FUNC_START sub_0802D190
sub_0802D190: @ 0x0802D190
	push {lr}
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r0, _0802D1D4  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0802D1E4
	ldr r1, _0802D1D8  @ =gUnknown_03000420
	strb r2, [r1, #9]
	ldr r0, _0802D1DC  @ =gUnknown_03006730
	ldr r0, [r0]
	ldr r0, [r0, #40]
	add r0, r0, #69
	ldrb r2, [r0]
	ldrb r0, [r1, #8]
	cmp r0, r2
	beq _0802D1E4
	mov r0, #1
	strb r0, [r1, #2]
	ldrb r0, [r1, #8]
	cmp r0, r2
	bcs _0802D1E0
	add r0, r0, #1
	strb r0, [r1, #8]
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0802D1E4
	mov r0, #7
	bl play_sound
	b _0802D1E4
_0802D1D4:
	.4byte gUnknown_03000E20
_0802D1D8:
	.4byte gUnknown_03000420
_0802D1DC:
	.4byte gUnknown_03006730
_0802D1E0:
	sub r0, r0, #1
	strb r0, [r1, #8]
_0802D1E4:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802D190

