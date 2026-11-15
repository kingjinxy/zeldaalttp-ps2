	THUMB_FUNC_START sub_08030418
sub_08030418: @ 0x08030418
	push {r4,r5,lr}
	ldr r4, _0803042C  @ =gSubState
	ldrb r0, [r4]
	cmp r0, #1
	beq _0803049C
	cmp r0, #1
	bgt _08030430
	cmp r0, #0
	beq _08030436
	b _080304DE
_0803042C:
	.4byte gSubState
_08030430:
	cmp r0, #2
	beq _080304CC
	b _080304DE
_08030436:
	ldr r1, _08030490  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080304DE
	mov r2, #0
	ldr r0, _08030494  @ =gUnknown_03006C80
	ldrb r3, [r0]
	add r4, r0, #0
	cmp r2, r3
	bcs _08030478
	ldr r0, [r4, #40]
	mov r1, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08030478
	add r1, r3, #0
	add r5, r4, #0
	add r5, r5, #40
	mov r3, #8
_08030462:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r1
	bcs _08030478
	lsl r0, r2, #3
	add r0, r0, r5
	ldr r0, [r0]
	and r0, r0, r3
	cmp r0, #0
	bne _08030462
_08030478:
	ldrb r4, [r4]
	cmp r2, r4
	beq _08030484
	mov r0, #32
	bl play_sound
_08030484:
	ldr r1, _08030498  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080304DE
	.byte 0x00
	.byte 0x00
_08030490:
	.4byte gUnknown_02016D60
_08030494:
	.4byte gUnknown_03006C80
_08030498:
	.4byte gSubState
_0803049C:
	ldr r3, _080304B0  @ =gUnknown_02016D60
	ldrh r1, [r3, #38]
	mov r2, #38
	ldrsh r0, [r3, r2]
	cmp r0, #0
	ble _080304B4
	sub r0, r1, #4
	strh r0, [r3, #38]
	b _080304CC
	.byte 0x00
	.byte 0x00
_080304B0:
	.4byte gUnknown_02016D60
_080304B4:
	mov r0, #0
	strh r0, [r3, #38]
	ldr r2, _080304F0  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _080304F4  @ =0x0000BFFF
	and r0, r0, r1
	strh r0, [r2]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #30
	strh r0, [r3, #4]
_080304CC:
	ldr r1, _080304F8  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080304DE
	bl sub_08030314
_080304DE:
	bl sub_08030654
	bl 0x08137AFC
	bl 0x08000BAC
	pop {r4,r5}
	pop {r0}
	bx r0
_080304F0:
	.4byte gUnknown_030004A0
_080304F4:
	.4byte 0x0000BFFF
_080304F8:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08030418

