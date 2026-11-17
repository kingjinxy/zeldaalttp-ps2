	THUMB_FUNC_START sub_08034FE0
sub_08034FE0: @ 0x08034FE0
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldr r0, _08034FFC  @ =gUnknown_02016D60
	ldrb r0, [r0, #14]
	cmp r0, #4
	bhi _080350B0
	lsl r0, r0, #2
	ldr r1, _08035000  @ =0x08035004
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_08034FFC:
	.4byte gUnknown_02016D60
_08035000:
	.4byte _08035000+0x4
	.4byte _080350B0
	.4byte _08035018
	.4byte _0803504C
	.4byte _0803505C
	.4byte _0803508C
_08035018:
	ldr r0, _08035044  @ =gUnknown_03000450
	str r4, [r0]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #16
	strb r0, [r1]
	mov r0, #128
	str r0, [r4, #12]
	add r0, r4, #0
	bl sub_0803CC20
	mov r1, #54
	ldrsh r0, [r4, r1]
	cmp r0, #160
	ble _080350B0
	ldr r0, _08035048  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r1, #0
	strb r1, [r0, #14]
	b _080350B0
_08035044:
	.4byte gUnknown_03000450
_08035048:
	.4byte gUnknown_02016D60
_0803504C:
	add r0, r4, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #1
	bne _080350B0
	add r0, r4, #0
	mov r1, #2
	b _0803507C
_0803505C:
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	cmp r1, #1
	bne _08035070
	add r0, r4, #0
	mov r1, #3
	bl sub_08003870
	b _080350B0
_08035070:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080350B0
	add r0, r4, #0
	mov r1, #1
_0803507C:
	bl sub_08003870
	ldr r1, _08035088  @ =gUnknown_02016D60
	mov r0, #0
	strb r0, [r1, #14]
	b _080350B0
_08035088:
	.4byte gUnknown_02016D60
_0803508C:
	add r0, r4, #0
	bl GetNextFrame
	add r1, r4, #0
	add r1, r1, #96
	mov r0, #192
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #16
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #4
	strb r0, [r1]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #128
	strb r0, [r4, #23]
_080350B0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034FE0

	.byte 0x00
	.byte 0x00
