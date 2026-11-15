	THUMB_FUNC_START sub_08037E0C
sub_08037E0C: @ 0x08037E0C
	push {r7,lr}
	mov r7, sp
	ldr r1, _08037E20  @ =gSubState
	ldrb r0, [r1]
	cmp r0, #0
	beq _08037E24
	cmp r0, #1
	beq _08037E98
	b _08037EE4
	.byte 0x00
	.byte 0x00
_08037E20:
	.4byte gSubState
_08037E24:
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	ldr r0, _08037E84  @ =gPaletteBuf2
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	bl sub_08059A44
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0803668C
	ldr r0, _08037E88  @ =gUnknown_03000830
	mov r1, #0
	strb r1, [r0]
	bl sub_0800D1A0
	ldr r1, _08037E8C  @ =0x80010000
	add r0, r1, #0
	bl play_sound
	ldr r0, _08037E90  @ =gUnknown_02016D60
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r1, _08037E94  @ =gSubState
	ldr r0, _08037E94  @ =gSubState
	ldr r1, _08037E94  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08037EE4
	.byte 0x00
	.byte 0x00
_08037E84:
	.4byte gPaletteBuf2
_08037E88:
	.4byte gUnknown_03000830
_08037E8C:
	.4byte 0x80010000
_08037E90:
	.4byte gUnknown_02016D60
_08037E94:
	.4byte gSubState
_08037E98:
	ldr r1, _08037ED8  @ =gUnknown_02016D60
	ldr r0, _08037ED8  @ =gUnknown_02016D60
	ldr r1, _08037ED8  @ =gUnknown_02016D60
	ldrh r2, [r1, #4]
	sub r1, r2, #1
	ldrh r2, [r0, #4]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r0, #4]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08037ED6
	ldr r1, _08037EDC  @ =gUnknown_03005050
	ldr r0, _08037EDC  @ =gUnknown_03005050
	ldr r1, _08037EDC  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08037EE0  @ =gSubState
	mov r1, #0
	strb r1, [r0]
_08037ED6:
	b _08037EE4
_08037ED8:
	.4byte gUnknown_02016D60
_08037EDC:
	.4byte gUnknown_03005050
_08037EE0:
	.4byte gSubState
_08037EE4:
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08037E0C

	.byte 0x00
	.byte 0x00
