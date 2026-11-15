	THUMB_FUNC_START sub_080DBAD8
sub_080DBAD8: @ 0x080DBAD8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r9, r5
	ldr r6, _080DBBE4  @ =gRam
	ldr r0, _080DBBE8  @ =0x00001122
	add r3, r6, r0
	add r3, r5, r3
	ldrb r0, [r3]
	mov r2, #177
	and r2, r2, r0
	ldr r1, _080DBBEC  @ =gUnknown_08175EC4
	ldr r4, _080DBBF0  @ =0x00000F62
	add r0, r6, r4
	add r0, r0, r5
	mov r8, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	orr r2, r2, r0
	ldr r1, _080DBBF4  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #1
	mov r1, #14
	and r0, r0, r1
	orr r2, r2, r0
	strb r2, [r3]
	ldr r3, _080DBBF8  @ =0x00000F92
	add r0, r6, r3
	add r2, r5, r0
	ldr r1, _080DBBFC  @ =gUnknown_08175EBC
	mov r4, r8
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r1, [r0]
	strb r1, [r2]
	ldr r3, _080DBC00  @ =0x00000B36
	add r0, r6, r3
	ldrh r0, [r0]
	cmp r0, #32
	bne _080DBB36
	add r0, r1, #4
	strb r0, [r2]
_080DBB36:
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DBC24
	ldr r4, _080DBC04  @ =0x00000FC2
	add r0, r6, r4
	add r4, r5, r0
	ldrb r7, [r4]
	cmp r7, #0
	bne _080DBC24
	add r0, r5, #0
	bl sub_080DBC34
	mov r0, #2
	strb r0, [r4]
	ldr r0, _080DBC08  @ =0x00000ED2
	add r3, r6, r0
	add r3, r5, r3
	ldrb r1, [r3]
	ldr r4, _080DBC0C  @ =0x00000EF2
	add r2, r6, r4
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r1, _080DBC10  @ =0x00000958
	add r0, r6, r1
	ldrb r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #207
	bhi _080DBC1C
	bl GetRandomInt
	mov r1, #7
	and r1, r1, r0
	mov r3, #150
	lsl r3, r3, #4
	add r7, r6, r3
	strb r1, [r7]
	ldr r2, _080DBC14  @ =gUnknown_08175ECC
	mov r4, r8
	ldrb r0, [r4]
	lsl r0, r0, #3
	mov r1, #0
	ldrsb r1, [r7, r1]
	orr r0, r0, r1
	add r0, r0, r2
	ldrb r4, [r0]
	mov r0, #128
	and r0, r0, r4
	cmp r0, #0
	beq _080DBBBE
	mov r1, #255
	lsl r1, r1, #8
	add r0, r1, #0
	orr r4, r4, r0
_080DBBBE:
	ldr r0, _080DBC18  @ =0x00000EE2
	add r3, r6, r0
	add r3, r5, r3
	ldrb r1, [r3]
	add r0, r0, #32
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r4, r1
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldrb r0, [r7]
	mov r1, r8
	strb r0, [r1]
	b _080DBC24
	.byte 0x00
	.byte 0x00
_080DBBE4:
	.4byte gRam
_080DBBE8:
	.4byte 0x00001122
_080DBBEC:
	.4byte gUnknown_08175EC4
_080DBBF0:
	.4byte 0x00000F62
_080DBBF4:
	.4byte 0x00000996
_080DBBF8:
	.4byte 0x00000F92
_080DBBFC:
	.4byte gUnknown_08175EBC
_080DBC00:
	.4byte 0x00000B36
_080DBC04:
	.4byte 0x00000FC2
_080DBC08:
	.4byte 0x00000ED2
_080DBC0C:
	.4byte 0x00000EF2
_080DBC10:
	.4byte 0x00000958
_080DBC14:
	.4byte gUnknown_08175ECC
_080DBC18:
	.4byte 0x00000EE2
_080DBC1C:
	ldr r3, _080DBC30  @ =0x00000FA2
	add r0, r6, r3
	add r0, r0, r9
	strb r7, [r0]
_080DBC24:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080DBC30:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080DBAD8

