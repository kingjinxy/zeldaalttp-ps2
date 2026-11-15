	THUMB_FUNC_START sub_080A1680
sub_080A1680: @ 0x080A1680
	push {r4,r5,lr}
	ldr r4, _080A1700  @ =gRam
	ldr r1, _080A1704  @ =0x000016D5
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A172E
	ldr r2, _080A1708  @ =0x00001776
	add r5, r4, r2
	ldrb r0, [r5]
	cmp r0, #0
	bne _080A172E
	add r1, r1, #45
	add r0, r4, r1
	ldrb r1, [r0]
	cmp r1, #0
	bne _080A172E
	sub r2, r2, #141
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080A170C  @ =0x00001736
	add r0, r4, r1
	ldrb r0, [r0]
	bl sub_08084008
	cmp r0, #0
	beq _080A1724
	mov r0, #1
	strb r0, [r5]
	ldr r2, _080A1710  @ =0x00000978
	add r0, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080A1724
	ldr r0, _080A1714  @ =gUnknown_08168FF0
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r1, _080A1718  @ =0x00000965
	add r3, r4, r1
	strb r0, [r3]
	cmp r0, #255
	beq _080A16EA
	ldr r1, _080A171C  @ =gUnknown_0816E344
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A16EA
	ldrb r2, [r3]
_080A16EA:
	cmp r2, #68
	bne _080A16F8
	ldr r0, _080A1720  @ =gBow
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A16F8
	mov r2, #54
_080A16F8:
	add r0, r2, #0
	bl sub_080A1588
	b _080A172E
_080A1700:
	.4byte gRam
_080A1704:
	.4byte 0x000016D5
_080A1708:
	.4byte 0x00001776
_080A170C:
	.4byte 0x00001736
_080A1710:
	.4byte 0x00000978
_080A1714:
	.4byte gUnknown_08168FF0
_080A1718:
	.4byte 0x00000965
_080A171C:
	.4byte gUnknown_0816E344
_080A1720:
	.4byte gBow
_080A1724:
	ldr r0, _080A1734  @ =gRam
	ldr r2, _080A1738  @ =0x00001776
	add r0, r0, r2
	mov r1, #0
	strb r1, [r0]
_080A172E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080A1734:
	.4byte gRam
_080A1738:
	.4byte 0x00001776
	THUMB_FUNC_END sub_080A1680

