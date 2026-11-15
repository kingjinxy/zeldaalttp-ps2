	THUMB_FUNC_START sub_0802D9A8
sub_0802D9A8: @ 0x0802D9A8
	push {r4,r5,lr}
	ldr r0, _0802DA18  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802DA12
	ldr r0, _0802DA1C  @ =gUnknown_0201EF18
	ldrb r0, [r0, #5]
	cmp r0, #0
	bne _0802DA12
	mov r4, #0
	ldr r0, _0802DA20  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r4, r0
	bcs _0802DA12
	ldr r5, _0802DA24  @ =gUnknown_03006A58
_0802D9C6:
	ldr r0, _0802DA28  @ =gUnknown_03005E10
	lsl r2, r4, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0802DA04
	ldr r0, _0802DA2C  @ =gUnknown_03000940
	add r0, r2, r0
	ldrh r0, [r0]
	mov r2, #128
	lsl r2, r2, #3
	add r1, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0802DA04
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, r5
	ldr r0, [r0]
	add r0, r0, #61
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0802DA04
	add r0, r4, #0
	bl sub_0802DA30
_0802DA04:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _0802DA20  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r4, r0
	bcc _0802D9C6
_0802DA12:
	pop {r4,r5}
	pop {r0}
	bx r0
_0802DA18:
	.4byte gUnknown_03000520
_0802DA1C:
	.4byte gUnknown_0201EF18
_0802DA20:
	.4byte gUnknown_03006C80
_0802DA24:
	.4byte gUnknown_03006A58
_0802DA28:
	.4byte gUnknown_03005E10
_0802DA2C:
	.4byte gUnknown_03000940
	THUMB_FUNC_END sub_0802D9A8

