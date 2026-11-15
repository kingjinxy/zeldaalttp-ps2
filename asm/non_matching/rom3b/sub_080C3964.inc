	THUMB_FUNC_START sub_080C3964
sub_080C3964: @ 0x080C3964
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080C39F8  @ =gRam
	mov r0, #161
	lsl r0, r0, #4
	add r1, r5, r0
	ldr r2, _080C39FC  @ =0x000010F2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	beq _080C3982
	b _080C3AA4
_080C3982:
	ldr r0, _080C3A00  @ =0x000016F8
	add r7, r5, r0
	ldr r1, _080C3A04  @ =0x00001702
	add r0, r5, r1
	ldrb r1, [r7]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	beq _080C3996
	b _080C3AA4
_080C3996:
	sub r2, r2, #48
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080C39A8
	b _080C3AA4
_080C39A8:
	add r0, r4, #0
	bl sub_080C3ED0
	ldr r1, _080C3A08  @ =0x0000180C
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080C3A14
	ldr r2, _080C3A0C  @ =0x000016F6
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #128
	beq _080C3A14
	bl sub_080C3C98
	ldr r0, _080C3A10  @ =0x000016EA
	add r6, r5, r0
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	blt _080C39E0
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C3A1C
_080C39E0:
	add r0, r4, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C3A14
	add r0, r4, #0
	bl sub_080C3AC8
	b _080C3AA4
_080C39F8:
	.4byte gRam
_080C39FC:
	.4byte 0x000010F2
_080C3A00:
	.4byte 0x000016F8
_080C3A04:
	.4byte 0x00001702
_080C3A08:
	.4byte 0x0000180C
_080C3A0C:
	.4byte 0x000016F6
_080C3A10:
	.4byte 0x000016EA
_080C3A14:
	add r0, r4, #0
	bl sub_080C51C8
	b _080C3AA4
_080C3A1C:
	ldr r1, _080C3AAC  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #106
	beq _080C3A3E
	bl GetRandomInt
	ldr r1, _080C3AB0  @ =0x00001072
	add r2, r5, r1
	add r2, r4, r2
	ldr r3, _080C3AB4  @ =gUnknown_08171E60
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
_080C3A3E:
	bl GetRandomInt
	ldr r2, _080C3AB8  @ =gUnknown_08171E68
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r7]
	mov r1, #24
	ldrb r0, [r6]
	sub r0, r0, #9
	lsl r0, r0, #24
	cmp r0, #0
	bge _080C3A5C
	mov r1, #32
_080C3A5C:
	add r0, r4, #0
	bl sub_080C2CB4
	ldr r2, _080C3ABC  @ =0x00001102
	add r1, r5, r2
	add r1, r4, r1
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080C3AC0  @ =0x00001112
	add r1, r5, r0
	add r1, r4, r1
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	neg r0, r0
	strb r0, [r1]
	mov r1, #16
	ldrb r0, [r6]
	sub r0, r0, #9
	lsl r0, r0, #24
	cmp r0, #0
	bge _080C3A92
	mov r1, #8
_080C3A92:
	add r0, r4, #0
	bl sub_080C4378
	bl sub_080C43DC
	ldr r0, _080C3AC4  @ =0x000016F9
	add r1, r5, r0
	mov r0, #144
	strb r0, [r1]
_080C3AA4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C3AAC:
	.4byte 0x00000FF2
_080C3AB0:
	.4byte 0x00001072
_080C3AB4:
	.4byte gUnknown_08171E60
_080C3AB8:
	.4byte gUnknown_08171E68
_080C3ABC:
	.4byte 0x00001102
_080C3AC0:
	.4byte 0x00001112
_080C3AC4:
	.4byte 0x000016F9
	THUMB_FUNC_END sub_080C3964

