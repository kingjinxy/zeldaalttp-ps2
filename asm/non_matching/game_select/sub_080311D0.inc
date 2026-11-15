	THUMB_FUNC_START sub_080311D0
sub_080311D0: @ 0x080311D0
	push {r4-r7,lr}
	ldr r2, _080311E4  @ =gSubState
	ldrb r0, [r2]
	cmp r0, #1
	beq _0803129C
	cmp r0, #1
	bgt _080311E8
	cmp r0, #0
	beq _080311EE
	b _08031318
_080311E4:
	.4byte gSubState
_080311E8:
	cmp r0, #2
	beq _080312D0
	b _08031318
_080311EE:
	mov r5, #0
	ldr r0, _0803128C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r5, r0
	bcs _0803127C
	mov r7, #0
	mov r6, #63
_080311FC:
	ldr r0, _08031290  @ =gUnknown_084279A4
	add r1, r5, #0
	bl sub_080311A0
	add r4, r0, #0
	add r0, r5, #0
	bl sub_08063C5C
	add r2, r0, #0
	ldrb r1, [r2, #28]
	mov r3, #4
	neg r3, r3
	add r0, r3, #0
	and r1, r1, r0
	mov r0, #2
	orr r1, r1, r0
	strb r1, [r2, #28]
	ldrh r0, [r4]
	strh r0, [r2, #50]
	ldrh r0, [r4, #2]
	strh r0, [r2, #54]
	add r0, r2, #0
	add r0, r0, #42
	strb r7, [r0]
	ldrb r1, [r2, #29]
	add r0, r6, #0
	and r0, r0, r1
	strb r0, [r2, #29]
	ldrb r1, [r2, #31]
	add r0, r6, #0
	and r0, r0, r1
	strb r0, [r2, #31]
	add r1, r2, #0
	add r1, r1, #46
	mov r0, #3
	strb r0, [r1]
	add r3, r2, #0
	add r3, r3, #94
	ldrb r1, [r3]
	mov r4, #13
	neg r4, r4
	add r0, r4, #0
	and r1, r1, r0
	mov r0, #4
	orr r1, r1, r0
	strb r1, [r3]
	lsl r0, r5, #5
	sub r0, r0, #128
	add r1, r2, #0
	add r1, r1, #32
	strb r0, [r1]
	ldrb r1, [r2, #28]
	add r0, r6, #0
	and r0, r0, r1
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #28]
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r0, _0803128C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r5, r0
	bcc _080311FC
_0803127C:
	ldr r1, _08031294  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08031298  @ =gUnknown_02016D60
	mov r0, #64
	strh r0, [r1, #4]
	b _08031318
_0803128C:
	.4byte gUnknown_03006C80
_08031290:
	.4byte gUnknown_084279A4
_08031294:
	.4byte gSubState
_08031298:
	.4byte gUnknown_02016D60
_0803129C:
	mov r5, #0
	ldr r0, _080312C8  @ =gUnknown_03006C80
	ldrb r1, [r0]
	cmp r5, r1
	bcs _080312BE
	add r4, r0, #0
_080312A8:
	add r0, r5, #0
	mov r1, #48
	mov r2, #0
	bl sub_08063D28
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldrb r3, [r4]
	cmp r5, r3
	bcc _080312A8
_080312BE:
	ldr r1, _080312CC  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _08031318
_080312C8:
	.4byte gUnknown_03006C80
_080312CC:
	.4byte gSubState
_080312D0:
	ldr r1, _080312F8  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08031318
	mov r0, #0
	strb r0, [r2]
	ldrb r1, [r1, #3]
	cmp r1, #2
	beq _08031300
	cmp r1, #2
	ble _080312F0
	cmp r1, #3
	beq _08031314
_080312F0:
	ldr r1, _080312FC  @ =gUnknown_03005050
	mov r0, #5
	strb r0, [r1]
	b _08031318
_080312F8:
	.4byte gUnknown_02016D60
_080312FC:
	.4byte gUnknown_03005050
_08031300:
	mov r0, #5
	bl sub_08036704
	ldr r1, _08031310  @ =gUnknown_03005050
	mov r0, #4
	strb r0, [r1]
	b _08031318
	.byte 0x00
	.byte 0x00
_08031310:
	.4byte gUnknown_03005050
_08031314:
	ldr r0, _08031320  @ =gUnknown_03005050
	strb r1, [r0]
_08031318:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031320:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_080311D0

