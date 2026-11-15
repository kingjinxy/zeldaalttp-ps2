	THUMB_FUNC_START sub_08031448
sub_08031448: @ 0x08031448
	push {lr}
	ldr r1, _0803145C  @ =gSubState
	ldrb r0, [r1]
	cmp r0, #1
	beq _080314CE
	cmp r0, #1
	bgt _08031460
	cmp r0, #0
	beq _08031466
	b _08031580
_0803145C:
	.4byte gSubState
_08031460:
	cmp r0, #2
	beq _0803154C
	b _08031580
_08031466:
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080314A8  @ =gUnknown_02016D60
	ldrb r0, [r0, #3]
	cmp r0, #3
	bne _0803147C
	ldr r2, _080314AC  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _080314B0  @ =0x0000FDFF
	and r0, r0, r1
	strh r0, [r2]
_0803147C:
	mov r0, #49
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #49
	mov r1, #3
	mov r2, #2
	bl sub_0804C8A8
	mov r0, #49
	mov r1, #3
	mov r2, #1
	bl sub_0804C8A8
	ldr r0, _080314B4  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	cmp r0, #0
	beq _080314B8
	mov r0, #49
	mov r1, #14
	b _080314C6
_080314A8:
	.4byte gUnknown_02016D60
_080314AC:
	.4byte gUnknown_030004A0
_080314B0:
	.4byte 0x0000FDFF
_080314B4:
	.4byte gLCDRegisterBuffer
_080314B8:
	mov r0, #49
	mov r1, #12
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #49
	mov r1, #13
_080314C6:
	mov r2, #0
	bl sub_0804C8A8
	b _08031580
_080314CE:
	bl sub_08037554
	cmp r0, #0
	beq _08031580
	bl sub_08037750
	ldr r3, _080314F8  @ =gUnknown_02016D60
	ldrb r1, [r3, #3]
	cmp r1, #1
	bls _08031542
	ldr r0, _080314FC  @ =gUnknown_03005E10
	ldrh r2, [r0]
	mov r0, #32
	and r0, r0, r2
	cmp r0, #0
	beq _0803150E
	add r2, r3, #0
	cmp r1, #2
	bne _08031500
	ldrb r0, [r3, #2]
	b _0803151E
_080314F8:
	.4byte gUnknown_02016D60
_080314FC:
	.4byte gUnknown_03005E10
_08031500:
	ldrb r0, [r3, #2]
	cmp r0, #1
	bhi _0803150A
	add r1, r0, #1
	b _08031532
_0803150A:
	mov r1, #0
	b _08031532
_0803150E:
	mov r0, #16
	and r0, r0, r2
	cmp r0, #0
	beq _0803153C
	add r2, r3, #0
	cmp r1, #2
	bne _08031526
	ldrb r0, [r2, #2]
_0803151E:
	mov r1, #0
	cmp r0, #0
	bne _08031532
	b _08031530
_08031526:
	ldrb r0, [r2, #2]
	cmp r0, #0
	beq _08031530
	sub r1, r0, #1
	b _08031532
_08031530:
	mov r1, #2
_08031532:
	strb r1, [r2, #2]
	mov r0, #61
	bl play_sound
	b _08031546
_0803153C:
	bl sub_080313E0
	b _08031546
_08031542:
	bl sub_080313E0
_08031546:
	bl sub_08037574
	b _08031580
_0803154C:
	bl sub_08037554
	cmp r0, #0
	beq _08031580
	bl sub_08037750
	ldr r1, _08031578  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803157C
	bl sub_0800BED8
	bl sub_08036760
	mov r0, #5
	bl set_main_state
	b _08031580
	.byte 0x00
	.byte 0x00
_08031578:
	.4byte gUnknown_02016D60
_0803157C:
	bl sub_08037574
_08031580:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08031448

