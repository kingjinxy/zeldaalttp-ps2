	THUMB_FUNC_START sub_080305BC
sub_080305BC: @ 0x080305BC
	push {r4-r6,lr}
	bl sub_08037554
	cmp r0, #0
	beq _0803064E
	bl sub_08037750
	bl sub_08059A2C
	cmp r0, #0
	beq _0803063E
	bl sub_0800BED8
	mov r6, #160
	lsl r6, r6, #19
	mov r0, #0
	strh r0, [r6]
	ldr r5, _08030628  @ =gPaletteBuf2
	mov r4, #0
	strh r4, [r5]
	bl sub_080123BC
	bl sub_0801239C
	bl sub_08036760
	bl sub_08059A44
	strh r4, [r6]
	strh r4, [r5]
	ldr r4, _0803062C  @ =gUnknown_03006C80
	ldr r1, _08030630  @ =gUnknown_08427938
	ldr r2, _08030634  @ =gUnknown_02016D60
	ldrb r0, [r2, #8]
	add r0, r0, r1
	ldrb r1, [r0]
	strb r1, [r4, #1]
	mov r3, #0
	ldrb r0, [r2, #8]
	cmp r0, #0
	bne _08030610
	mov r3, #1
_08030610:
	strb r3, [r4, #2]
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _08030638
	ldrb r0, [r2, #10]
	cmp r0, #1
	bls _08030638
	mov r0, #3
	bl set_main_state
	b _0803063E
_08030628:
	.4byte gPaletteBuf2
_0803062C:
	.4byte gUnknown_03006C80
_08030630:
	.4byte gUnknown_08427938
_08030634:
	.4byte gUnknown_02016D60
_08030638:
	mov r0, #2
	bl set_main_state
_0803063E:
	bl sub_08030654
	bl sub_08137AFC
	bl sub_08000BAC
	bl sub_08037574
_0803064E:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080305BC

