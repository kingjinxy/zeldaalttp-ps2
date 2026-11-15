	THUMB_FUNC_START sub_0803008C
sub_0803008C: @ 0x0803008C
	push {r4,r5,lr}
	ldr r5, _0803009C  @ =gSubState
	ldrb r4, [r5]
	cmp r4, #0
	beq _080300A0
	cmp r4, #1
	beq _080300E0
	b _080300F4
_0803009C:
	.4byte gSubState
_080300A0:
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _080300D4  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080300D8  @ =gPaletteBuf2
	strh r1, [r0]
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0800D6F4
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r1, _080300DC  @ =gUnknown_02016D60
	mov r0, #10
	strh r0, [r1, #4]
	strh r4, [r1, #6]
	mov r0, #4
	bl sub_08036704
	b _080300F4
_080300D4:
	.4byte 0x00006739
_080300D8:
	.4byte gPaletteBuf2
_080300DC:
	.4byte gUnknown_02016D60
_080300E0:
	bl sub_080367CC
	cmp r0, #1
	bne _080300F4
	ldr r0, _080300FC  @ =gUnknown_03005050
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #0
	strb r0, [r5]
_080300F4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080300FC:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0803008C

