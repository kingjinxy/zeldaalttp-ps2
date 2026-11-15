	THUMB_FUNC_START sub_0800D1C0
sub_0800D1C0: @ 0x0800D1C0
	push {lr}
	add r3, r0, #0
	add r2, r1, #0
	ldrb r0, [r3, #8]
	cmp r0, #1
	bne _0800D1E8
	ldr r1, _0800D1F4  @ =gLCDRegisterBuffer
	ldrb r0, [r3, #10]
	ldrb r1, [r1]
	cmp r0, r1
	beq _0800D1E8
	ldr r1, _0800D1F8  @ =0x0000FFFF
	and r1, r1, r2
	cmp r1, #199
	bhi _0800D1E8
	ldr r0, _0800D1FC  @ =0xFFFF0000
	and r2, r2, r0
	add r0, r1, #0
	add r0, r0, #200
	orr r2, r2, r0
_0800D1E8:
	add r0, r2, #0
	bl play_sound
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800D1F4:
	.4byte gLCDRegisterBuffer
_0800D1F8:
	.4byte 0x0000FFFF
_0800D1FC:
	.4byte 0xFFFF0000
	THUMB_FUNC_END sub_0800D1C0

