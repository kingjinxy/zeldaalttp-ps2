	THUMB_FUNC_START sub_08032DD4
sub_08032DD4: @ 0x08032DD4
	push {r4,lr}
	ldr r0, _08032E00  @ =gUnknown_03000520
	ldrb r4, [r0]
	cmp r4, #0
	bne _08032DFA
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	strh r4, [r0]
	ldr r0, _08032E04  @ =gPaletteBuf2
	strh r4, [r0]
	bl sub_0801239C
	bl sub_080123BC
	mov r0, #7
	bl set_main_state
_08032DFA:
	pop {r4}
	pop {r0}
	bx r0
_08032E00:
	.4byte gUnknown_03000520
_08032E04:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_08032DD4

