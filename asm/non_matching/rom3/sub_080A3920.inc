	THUMB_FUNC_START sub_080A3920
sub_080A3920: @ 0x080A3920
	push {lr}
	ldr r2, _080A3948  @ =gRam
	ldr r1, _080A394C  @ =0x00001710
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3986
	ldr r3, _080A3950  @ =0x0000178D
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #19
	bne _080A3986
	sub r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r1, r0
	beq _080A3954
	bl sub_0809E350
	b _080A3986
_080A3948:
	.4byte gRam
_080A394C:
	.4byte 0x00001710
_080A3950:
	.4byte 0x0000178D
_080A3954:
	ldr r0, _080A398C  @ =0x00001701
	add r2, r2, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080A3986
	ldr r1, _080A3990  @ =gUnknown_081690F2
	ldr r0, _080A3994  @ =gMagicUsage
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080A3998  @ =gMagicMeter
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bgt _080A3986
	strb r3, [r1]
	bl sub_0809E350
_080A3986:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A398C:
	.4byte 0x00001701
_080A3990:
	.4byte gUnknown_081690F2
_080A3994:
	.4byte gMagicUsage
_080A3998:
	.4byte gMagicMeter
	THUMB_FUNC_END sub_080A3920

