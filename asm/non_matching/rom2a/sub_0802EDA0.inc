	THUMB_FUNC_START sub_0802EDA0
sub_0802EDA0: @ 0x0802EDA0
	push {r4-r6,lr}
	ldr r0, _0802EDB8  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r3, r0, #0
	cmp r1, #11
	bls _0802EDAE
	b _0802F074
_0802EDAE:
	lsl r0, r1, #2
	ldr r1, _0802EDBC  @ =0x0802EDC0
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802EDB8:
	.4byte gUnknown_02016D60
_0802EDBC:
	.4byte 0x0802EDC0
	.4byte _0802EDF0
	.4byte _0802EE20
	.4byte _0802EE90
	.4byte _0802EF2C
	.4byte _0802EF42
	.4byte _0802EF80
	.4byte _0802EF80
	.4byte _0802EF80
	.4byte _0802EF92
	.4byte _0802EFF8
	.4byte _0802F028
	.4byte _0802F02E
_0802EDF0:
	ldr r0, _0802EE18  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	beq _0802EDFE
	b _0802F074
_0802EDFE:
	ldrb r0, [r3, #12]
	cmp r0, #6
	bhi _0802EE06
	b _0802EFB2
_0802EE06:
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #120
	strh r0, [r3, #4]
	ldr r0, _0802EE1C  @ =0x00000203
	bl play_sound
	b _0802F074
_0802EE18:
	.4byte gUnknown_03000948
_0802EE1C:
	.4byte 0x00000203
_0802EE20:
	ldr r0, _0802EE80  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0802EE4E
	bl 0x0800099C
	ldr r1, _0802EE84  @ =gUnknown_0202A7E0
	ldr r1, [r1, #12]
	mov r4, #3
	and r0, r0, r4
	lsl r0, r0, #1
	add r1, r1, #42
	strb r0, [r1]
	bl 0x0800099C
	ldr r1, _0802EE88  @ =gUnknown_03006A30
	ldr r1, [r1, #40]
	and r0, r0, r4
	lsl r0, r0, #1
	add r1, r1, #42
	strb r0, [r1]
_0802EE4E:
	ldr r1, _0802EE8C  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802EE5E
	b _0802F074
_0802EE5E:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #215
	lsl r0, r0, #1
	bl play_sound
	mov r0, #98
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	mov r1, #152
	strh r1, [r0, #50]
	mov r1, #4
	strh r1, [r0, #54]
	b _0802F074
_0802EE80:
	.4byte gUnknown_03000948
_0802EE84:
	.4byte gUnknown_0202A7E0
_0802EE88:
	.4byte gUnknown_03006A30
_0802EE8C:
	.4byte gUnknown_02016D60
_0802EE90:
	ldr r4, _0802EED8  @ =gUnknown_0202A7E0
	ldr r0, [r4, #12]
	cmp r0, #0
	beq _0802EEC4
	ldr r0, _0802EEDC  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0802EEC4
	bl 0x0800099C
	ldr r1, [r4, #12]
	mov r4, #3
	and r0, r0, r4
	lsl r0, r0, #1
	add r1, r1, #42
	strb r0, [r1]
	bl 0x0800099C
	ldr r1, _0802EEE0  @ =gUnknown_03006A30
	ldr r1, [r1, #40]
	and r0, r0, r4
	lsl r0, r0, #1
	add r1, r1, #42
	strb r0, [r1]
_0802EEC4:
	ldr r6, _0802EEE4  @ =gUnknown_02016D60
	ldrb r0, [r6, #13]
	cmp r0, #1
	bne _0802EEE8
	mov r0, #0
	bl sub_0804CD94
	mov r0, #0
	strb r0, [r6, #13]
	b _0802F074
_0802EED8:
	.4byte gUnknown_0202A7E0
_0802EEDC:
	.4byte gUnknown_03000948
_0802EEE0:
	.4byte gUnknown_03006A30
_0802EEE4:
	.4byte gUnknown_02016D60
_0802EEE8:
	cmp r0, #2
	beq _0802EEEE
	b _0802F074
_0802EEEE:
	mov r0, #90
	mov r1, #1
	mov r2, #20
	bl sub_0804C8A8
	ldr r4, _0802EF28  @ =gUnknown_03006A30
	ldr r1, [r4, #40]
	ldrh r1, [r1, #50]
	sub r1, r1, #16
	mov r5, #0
	strh r1, [r0, #50]
	ldr r1, [r4, #40]
	ldrh r1, [r1, #54]
	sub r1, r1, #32
	strh r1, [r0, #54]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #60
	strh r0, [r6, #4]
	mov r0, #0
	mov r1, #16
	mov r2, #16
	bl sub_08063D28
	ldr r0, [r4, #40]
	add r0, r0, #42
	strb r5, [r0]
	b _0802F074
_0802EF28:
	.4byte gUnknown_03006A30
_0802EF2C:
	ldrh r0, [r3, #4]
	sub r0, r0, #1
	strh r0, [r3, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802EF3A
	b _0802F074
_0802EF3A:
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	b _0802F074
_0802EF42:
	ldr r2, _0802EF58  @ =gUnknown_03000450
	ldrh r1, [r2, #34]
	mov r4, #34
	ldrsh r0, [r2, r4]
	cmp r0, #0
	ble _0802EF5C
	add r0, r1, #0
	sub r0, r0, #8
	strh r0, [r2, #34]
	b _0802F04A
	.byte 0x00
	.byte 0x00
_0802EF58:
	.4byte gUnknown_03000450
_0802EF5C:
	ldr r1, _0802EF78  @ =gUnknown_030004A0
	mov r0, #0
	strh r0, [r2, #34]
	strh r0, [r1, #48]
	strh r0, [r1, #36]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r0, #40
	strh r0, [r3, #4]
	ldr r0, _0802EF7C  @ =0x000001AF
	bl play_sound
	b _0802F074
_0802EF78:
	.4byte gUnknown_030004A0
_0802EF7C:
	.4byte 0x000001AF
_0802EF80:
	ldrh r0, [r3, #4]
	sub r0, r0, #1
	strh r0, [r3, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F074
	bl sub_0802F080
	b _0802F074
_0802EF92:
	ldr r1, _0802EFB8  @ =gUnknown_03000520
	ldrb r0, [r1]
	cmp r0, #0
	bne _0802F074
	strb r0, [r1, #7]
	ldr r0, _0802EFBC  @ =0x0020FFF0
	str r0, [r1, #12]
	ldr r0, _0802EFC0  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0802F074
	ldrb r0, [r3, #12]
	cmp r0, #6
	bhi _0802EFC4
_0802EFB2:
	add r0, r0, #1
	strb r0, [r3, #12]
	b _0802F074
_0802EFB8:
	.4byte gUnknown_03000520
_0802EFBC:
	.4byte 0x0020FFF0
_0802EFC0:
	.4byte gUnknown_03000948
_0802EFC4:
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r0, _0802EFF0  @ =0x00000504
	bl sub_0800D67C
	ldr r3, _0802EFF4  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	b _0802F074
	.byte 0x00
	.byte 0x00
_0802EFF0:
	.4byte 0x00000504
_0802EFF4:
	.4byte gUnknown_02000010
_0802EFF8:
	ldr r0, _0802F020  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0802F074
	bl sub_0800D644
	ldr r1, _0802F024  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #1
	strb r0, [r1, #14]
	mov r0, #253
	lsl r0, r0, #1
	bl play_sound
	b _0802F074
	.byte 0x00
	.byte 0x00
_0802F020:
	.4byte gUnknown_02000010
_0802F024:
	.4byte gUnknown_02016D60
_0802F028:
	bl sub_0802FA94
	b _0802F074
_0802F02E:
	ldr r0, _0802F054  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0802F074
	ldr r1, _0802F058  @ =gUnknown_03000450
	ldrh r2, [r1, #34]
	mov r4, #34
	ldrsh r0, [r1, r4]
	cmp r0, #119
	bgt _0802F060
	add r0, r2, #1
	strh r0, [r1, #34]
_0802F04A:
	ldr r1, _0802F05C  @ =gUnknown_030004A0
	strh r0, [r1, #48]
	strh r0, [r1, #36]
	b _0802F074
	.byte 0x00
	.byte 0x00
_0802F054:
	.4byte gUnknown_03000948
_0802F058:
	.4byte gUnknown_03000450
_0802F05C:
	.4byte gUnknown_030004A0
_0802F060:
	mov r0, #120
	strh r0, [r1, #34]
	ldr r1, _0802F07C  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #4
	strb r0, [r3]
	mov r0, #40
	strh r0, [r3, #4]
_0802F074:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802F07C:
	.4byte gSubState
	THUMB_FUNC_END sub_0802EDA0

