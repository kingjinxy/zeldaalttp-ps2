	THUMB_FUNC_START sub_0802D1E8
sub_0802D1E8: @ 0x0802D1E8
	push {r4,lr}
	ldr r4, _0802D220  @ =gUnknown_03000420
	ldr r0, [r4]
	ldr r1, _0802D224  @ =0x00FFFF00
	and r0, r0, r1
	cmp r0, #0
	beq _0802D218
	bl sub_0802D280
	bl sub_0802D354
	bl sub_0802D428
	ldrb r0, [r4, #5]
	cmp r0, #0
	beq _0802D210
	bl sub_0802D67C
	bl sub_0802D744
_0802D210:
	ldrb r0, [r4, #2]
	neg r0, r0
	lsr r0, r0, #31
	strb r0, [r4, #1]
_0802D218:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D220:
	.4byte gUnknown_03000420
_0802D224:
	.4byte 0x00FFFF00
	THUMB_FUNC_END sub_0802D1E8

