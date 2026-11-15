	THUMB_FUNC_START sub_0803178C
sub_0803178C: @ 0x0803178C
	push {lr}
	bl sub_08037554
	cmp r0, #0
	beq _080317F0
	bl sub_08037750
	bl sub_08059A2C
	cmp r0, #0
	beq _080317EC
	bl sub_08059A44
	bl sub_0800BED8
	mov r1, #160
	lsl r1, r1, #19
	mov r0, #0
	strh r0, [r1]
	ldr r1, _080317DC  @ =gPaletteBuf2
	mov r0, #0
	strh r0, [r1]
	bl sub_080123BC
	bl sub_0801239C
	bl sub_08036760
	ldr r2, _080317E0  @ =gUnknown_03006C80
	ldr r1, _080317E4  @ =gUnknown_084279C8
	ldr r0, _080317E8  @ =gUnknown_02016D60
	ldrb r0, [r0, #2]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2, #3]
	mov r0, #2
	bl set_main_state
	b _080317F0
	.byte 0x00
	.byte 0x00
_080317DC:
	.4byte gPaletteBuf2
_080317E0:
	.4byte gUnknown_03006C80
_080317E4:
	.4byte gUnknown_084279C8
_080317E8:
	.4byte gUnknown_02016D60
_080317EC:
	bl sub_08037574
_080317F0:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803178C

