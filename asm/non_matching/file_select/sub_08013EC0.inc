	THUMB_FUNC_START sub_08013EC0
sub_08013EC0: @ 0x08013EC0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r8, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r3, r2, #0
	lsl r1, r1, #16
	lsr r7, r1, #16
	lsl r0, r2, #2
	ldr r6, _08013EE8  @ =gUnknown_084299B4
	add r5, r0, r6
	cmp r2, #15
	beq _08013F36
	cmp r2, #15
	bgt _08013EEC
	cmp r2, #14
	beq _08013EF2
	b _08013F94
	.byte 0x00
	.byte 0x00
_08013EE8:
	.4byte gUnknown_084299B4
_08013EEC:
	cmp r3, #17
	beq _08013F78
	b _08013F94
_08013EF2:
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _08013FF6
	mov r0, #8
	strb r0, [r4, #8]
	mov r0, #4
	strb r0, [r4, #9]
	mov r0, #254
	strb r0, [r4, #10]
	mov r0, #63
	and r0, r0, r7
	lsl r0, r0, #4
	mov r1, #8
	orr r0, r0, r1
	strh r0, [r4, #50]
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r7
	lsr r0, r0, #2
	orr r0, r0, r1
	strh r0, [r4, #54]
	mov r0, #2
	add r1, r4, #0
	bl sub_08012728
	add r0, r4, #0
	bl 0x08008D90
	add r0, r4, #0
	bl sub_08014474
	b _08013FF6
_08013F36:
	ldr r5, _08013F74  @ =gUnknown_03000200
	ldr r0, [r5]
	cmp r0, #0
	bne _08013FF6
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _08013FF6
	mov r0, #6
	strb r0, [r4, #8]
	mov r0, #61
	strb r0, [r4, #9]
	mov r0, #63
	and r0, r0, r7
	lsl r0, r0, #4
	mov r1, #8
	orr r0, r0, r1
	strh r0, [r4, #50]
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r7
	lsr r0, r0, #2
	orr r0, r0, r1
	strh r0, [r4, #54]
	mov r0, #2
	add r1, r4, #0
	bl sub_08012728
	str r4, [r5]
	b _08013FF6
_08013F74:
	.4byte gUnknown_03000200
_08013F78:
	ldr r1, _08014000  @ =gUnknown_08429D2C
	ldr r0, _08014004  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	add r0, r0, r1
	ldrb r4, [r0]
	bl 0x0800099C
	mov r1, #31
	and r1, r1, r0
	add r5, r6, #0
	add r5, r5, #24
	cmp r4, r1
	bcc _08013F94
	add r5, r5, #28
_08013F94:
	ldrb r0, [r5]
	ldrb r1, [r5, #1]
	ldrb r2, [r5, #2]
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08013FF6
	mov r0, r8
	str r0, [r4, #76]
	mov r0, #63
	and r0, r0, r7
	lsl r0, r0, #4
	mov r3, #8
	mov r6, #0
	orr r0, r0, r3
	strh r0, [r4, #50]
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r7
	lsr r0, r0, #2
	orr r0, r0, r3
	strh r0, [r4, #54]
	ldrb r0, [r5, #3]
	add r1, r4, #0
	add r1, r1, #126
	strh r0, [r1]
	ldrb r0, [r5]
	cmp r0, #11
	bne _08013FF0
	ldr r2, _08014008  @ =gUnknown_03006A30
	mov r0, r8
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	strb r3, [r0, #12]
	mov r0, r8
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #56
	strb r6, [r0]
_08013FF0:
	add r0, r4, #0
	bl 0x08008D90
_08013FF6:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08014000:
	.4byte gUnknown_08429D2C
_08014004:
	.4byte gUnknown_03006C80
_08014008:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08013EC0

