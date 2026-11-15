	THUMB_FUNC_START sub_08016488
sub_08016488: @ 0x08016488
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r6, r0, #0
	ldr r2, _08016618  @ =gUnknown_03006A30
	ldrb r1, [r6, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	mov r8, r0
	add r0, r6, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080164C2
	mov r0, #127
	and r0, r0, r1
	cmp r0, #0
	bne _080164C2
	ldr r0, [r6, #76]
	ldrb r0, [r0, #10]
	mov r1, #11
	bl sub_0803D65C
_080164C2:
	ldrb r1, [r6, #11]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080164CE
	b _08016706
_080164CE:
	add r1, r6, #0
	add r1, r1, #61
	mov r0, #0
	strb r0, [r1]
	add r0, r6, #0
	bl 0x08003828
	ldrb r0, [r6, #23]
	sub r0, r0, #1
	strb r0, [r6, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _0801656A
	mov r0, #120
	strb r0, [r6, #23]
	ldr r5, _0801661C  @ =gUnknown_03005980
	ldr r4, [r5, #4]
	cmp r4, r5
	beq _08016526
_080164F6:
	ldr r0, [r6, #100]
	cmp r4, r0
	beq _08016520
	add r0, r6, #0
	add r1, r4, #0
	mov r2, #48
	mov r3, #48
	bl 0x0800390C
	lsl r0, r0, #24
	cmp r0, #0
	beq _08016520
	add r0, r4, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r7, #128
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08016520
	b _0801666C
_08016520:
	ldr r4, [r4, #4]
	cmp r4, r5
	bne _080164F6
_08016526:
	ldrb r0, [r6, #21]
	cmp r0, #1
	beq _08016570
	mov r4, #0
	ldr r7, _08016620  @ =gUnknown_03006A58
_08016530:
	ldrb r0, [r6, #10]
	cmp r4, r0
	beq _08016556
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r5, r0, r7
	ldr r1, [r5]
	ldr r0, [r6, #100]
	cmp r1, r0
	beq _08016556
	add r0, r6, #0
	mov r2, #48
	mov r3, #48
	bl 0x0800390C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08016624
_08016556:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bls _08016530
_08016560:
	ldrb r0, [r6, #21]
	cmp r0, #1
	beq _08016570
	mov r0, #0
	str r0, [r6, #100]
_0801656A:
	ldrb r0, [r6, #21]
	cmp r0, #1
	bne _0801658A
_08016570:
	add r0, r6, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801658A
	ldr r1, [r6, #76]
	ldr r0, [r6, #100]
	cmp r1, r0
	bne _0801658A
	mov r0, #0
	str r0, [r6, #100]
_0801658A:
	add r0, r6, #0
	bl sub_0803CC20
	add r5, r6, #0
	ldrb r0, [r6, #11]
	cmp r0, #0
	beq _080165B0
	add r4, r6, #0
	add r4, r4, #106
_0801659C:
	ldr r0, [r5, #84]
	mov r1, #0
	ldrsh r2, [r4, r1]
	add r1, r5, #0
	bl sub_0801679C
	ldr r5, [r5, #84]
	ldrb r0, [r5, #11]
	cmp r0, #0
	bne _0801659C
_080165B0:
	ldr r4, _08016618  @ =gUnknown_03006A30
	ldrb r1, [r6, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r4
	add r0, r0, #61
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080165EA
	add r0, r6, #0
	mov r1, r8
	mov r2, #2
	mov r3, #2
	bl 0x0800390C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080165EA
	ldrb r0, [r6, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r4
	add r1, r1, #61
	mov r0, #0
	strb r0, [r1]
_080165EA:
	mov r1, #128
	lsl r1, r1, #6
	add r0, r6, #0
	bl 0x08003594
	cmp r0, #0
	beq _080165FA
	b _0801676C
_080165FA:
	mov r0, #128
	lsl r0, r0, #9
	str r0, [r6, #16]
	ldrb r0, [r6, #21]
	cmp r0, #1
	beq _080166B4
	mov r0, #192
	lsl r0, r0, #1
	str r0, [r6, #12]
	bl 0x0800099C
	mov r1, #159
	and r0, r0, r1
	b _080166E8
	.byte 0x00
	.byte 0x00
_08016618:
	.4byte gUnknown_03006A30
_0801661C:
	.4byte gUnknown_03005980
_08016620:
	.4byte gUnknown_03006A58
_08016624:
	ldr r1, [r5]
	add r0, r6, #0
	bl sub_0803CECC
	add r1, r6, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r6, #0
	bl sub_0803D224
	add r0, r6, #0
	add r0, r0, #42
	ldrb r1, [r0]
	lsr r1, r1, #1
	add r1, r1, #9
	add r0, r6, #0
	bl 0x08003870
	mov r0, #192
	lsl r0, r0, #2
	str r0, [r6, #12]
	mov r0, #1
	strb r0, [r6, #21]
	ldr r0, [r5]
	str r0, [r6, #100]
	add r1, r6, #0
	add r1, r1, #104
	mov r0, #3
	strh r0, [r1]
	add r2, r6, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	b _08016560
_0801666C:
	add r0, r6, #0
	add r1, r4, #0
	bl sub_0803CECC
	add r1, r6, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r6, #0
	bl sub_0803D224
	add r0, r6, #0
	add r0, r0, #42
	ldrb r1, [r0]
	lsr r1, r1, #1
	add r1, r1, #9
	add r0, r6, #0
	bl 0x08003870
	mov r0, #192
	lsl r0, r0, #2
	str r0, [r6, #12]
	mov r0, #1
	strb r0, [r6, #21]
	str r4, [r6, #100]
	add r1, r6, #0
	add r1, r1, #104
	mov r0, #3
	strh r0, [r1]
	sub r1, r1, #44
	ldrb r0, [r1]
	orr r0, r0, r7
	strb r0, [r1]
	mov r0, #81
	bl 0x08003DFC
	b _08016526
_080166B4:
	add r0, r6, #0
	add r0, r0, #104
	ldrh r1, [r0]
	sub r1, r1, #1
	strh r1, [r0]
	lsl r1, r1, #16
	ldr r0, _080166D8  @ =0xFFFF0000
	cmp r1, r0
	bne _080166DC
	mov r0, #0
	strb r0, [r6, #21]
	add r2, r6, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	b _0801676C
_080166D8:
	.4byte 0xFFFF0000
_080166DC:
	ldr r1, [r6, #100]
	cmp r1, #0
	beq _080166EE
	add r0, r6, #0
	bl sub_0803CECC
_080166E8:
	add r1, r6, #0
	add r1, r1, #43
	strb r0, [r1]
_080166EE:
	add r0, r6, #0
	bl sub_0803D224
	add r0, r6, #0
	add r0, r0, #42
	ldrb r1, [r0]
	lsr r1, r1, #1
	add r1, r1, #9
	add r0, r6, #0
	bl 0x08003870
	b _0801676C
_08016706:
	add r0, r6, #0
	bl 0x08008D90
	ldr r2, _08016750  @ =gUnknown_03006A30
	ldrb r1, [r6, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #61
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08016732
	add r1, r6, #0
	add r1, r1, #106
	ldrh r0, [r1]
	cmp r0, #0
	beq _08016732
	sub r0, r0, #128
	strh r0, [r1]
_08016732:
	ldrb r0, [r6, #11]
	cmp r0, #0
	bne _0801676C
	ldr r1, [r6, #84]
	add r4, r6, #0
	add r4, r4, #106
	mov r0, #0
	ldrsh r2, [r4, r0]
	add r0, r6, #0
	bl sub_0801679C
	add r5, r6, #0
	ldrb r1, [r6, #11]
	b _08016764
	.byte 0x00
	.byte 0x00
_08016750:
	.4byte gUnknown_03006A30
_08016754:
	ldr r0, [r5, #88]
	mov r1, #0
	ldrsh r2, [r4, r1]
	add r1, r5, #0
	bl sub_0801679C
	ldr r5, [r5, #88]
	ldrb r1, [r5, #11]
_08016764:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08016754
_0801676C:
	ldr r2, _08016798  @ =gUnknown_03006A30
	ldrb r1, [r6, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801678C
	add r0, r6, #0
	bl DeleteThisEntity
	add r0, r6, #0
	bl 0x08000620
_0801678C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08016798:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08016488

