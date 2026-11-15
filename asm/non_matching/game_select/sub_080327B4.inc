	THUMB_FUNC_START sub_080327B4
sub_080327B4: @ 0x080327B4
	push {r4,lr}
	ldr r4, _080327C8  @ =gUnknown_02016D60
	ldrb r0, [r4]
	cmp r0, #1
	beq _08032814
	cmp r0, #1
	bgt _080327CC
	cmp r0, #0
	beq _080327D2
	b _0803285E
_080327C8:
	.4byte gUnknown_02016D60
_080327CC:
	cmp r0, #2
	beq _08032834
	b _0803285E
_080327D2:
	mov r0, #13
	bl load_palette_from_gfx_group
	mov r0, #6
	bl load_gfx_group
	mov r0, #40
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #40
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	ldr r2, _08032810  @ =gUnknown_030004A0
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #5
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #240
	strh r0, [r4, #4]
	mov r0, #0
	b _0803282C
	.byte 0x00
	.byte 0x00
_08032810:
	.4byte gUnknown_030004A0
_08032814:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803285E
	mov r0, #60
	strh r0, [r4, #4]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #1
_0803282C:
	mov r1, #4
	bl sub_0800C0B0
	b _0803285E
_08032834:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, #0
	bne _0803285E
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	strh r4, [r0]
	ldr r0, _08032864  @ =gPaletteBuf2
	strh r4, [r0]
	bl sub_0801239C
	bl sub_080123BC
	mov r0, #12
	bl set_main_state
_0803285E:
	pop {r4}
	pop {r0}
	bx r0
_08032864:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_080327B4

