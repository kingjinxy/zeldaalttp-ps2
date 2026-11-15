	THUMB_FUNC_START sub_080D4898
sub_080D4898: @ 0x080D4898
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080D53CC
	ldr r5, _080D4910  @ =gRam
	ldr r1, _080D4914  @ =0x00000F62
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080D48D0
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r1, _080D4918  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
_080D48D0:
	ldr r0, _080D491C  @ =0x00000FB2
	add r2, r5, r0
	add r2, r6, r2
	ldrb r0, [r3]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r3]
	lsr r2, r0, #5
	ldr r0, _080D4920  @ =0x00000F92
	add r1, r5, r0
	add r1, r6, r1
	ldr r0, _080D4924  @ =gUnknown_08174FE4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080D4928  @ =gUnknown_08174FED
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D490A
	ldrb r1, [r3]
	lsr r1, r1, #2
	mov r0, #1
	and r1, r1, r0
	add r0, r6, #0
	bl sub_080D4AC4
_080D490A:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D4910:
	.4byte gRam
_080D4914:
	.4byte 0x00000F62
_080D4918:
	.4byte 0x00000FA2
_080D491C:
	.4byte 0x00000FB2
_080D4920:
	.4byte 0x00000F92
_080D4924:
	.4byte gUnknown_08174FE4
_080D4928:
	.4byte gUnknown_08174FED
	THUMB_FUNC_END sub_080D4898

