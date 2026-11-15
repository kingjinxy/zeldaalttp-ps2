	THUMB_FUNC_START sub_080DE850
sub_080DE850: @ 0x080DE850
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DEBF4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DE90A
	ldr r5, _080DE8AC  @ =gRam
	ldr r1, _080DE8B0  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _080DE8D2
	ldr r0, _080DE8B4  @ =0x00001062
	add r2, r5, r0
	add r2, r4, r2
	ldrb r3, [r2]
	add r0, r3, #1
	mov r1, #7
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080DE8B8  @ =gUnknown_08176460
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r6]
	ldr r0, _080DE8BC  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080DE8C0  @ =gUnknown_08176468
	add r3, r3, r0
	ldrb r0, [r3]
	strb r0, [r1]
	cmp r0, #0
	beq _080DE8C4
	add r0, r4, #0
	mov r1, #68
	bl sub_080CF140
	b _080DE8D2
_080DE8AC:
	.4byte gRam
_080DE8B0:
	.4byte 0x00000FC2
_080DE8B4:
	.4byte 0x00001062
_080DE8B8:
	.4byte gUnknown_08176460
_080DE8BC:
	.4byte 0x00000F92
_080DE8C0:
	.4byte gUnknown_08176468
_080DE8C4:
	add r0, r4, #0
	mov r1, #67
	bl sub_080CF140
	add r0, r4, #0
	bl sub_080DEA74
_080DE8D2:
	mov r2, #0
	ldr r0, _080DE914  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #5
	bne _080DE8F4
	ldr r0, _080DE918  @ =gRam
	ldr r1, _080DE91C  @ =0x00001662
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	neg r0, r0
	lsr r2, r0, #31
_080DE8F4:
	ldr r0, _080DE920  @ =gUnknown_0817645C
	lsl r1, r2, #1
	add r1, r1, r0
	ldrh r1, [r1]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	add r0, r4, #0
	bl sub_080C5080
_080DE90A:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE914:
	.4byte gCrystalCount
_080DE918:
	.4byte gRam
_080DE91C:
	.4byte 0x00001662
_080DE920:
	.4byte gUnknown_0817645C
	THUMB_FUNC_END sub_080DE850

