	THUMB_FUNC_START sub_08038094
sub_08038094: @ 0x08038094
	push {r4,r7,lr}
	mov r7, sp
	ldr r1, _080380A8  @ =gSubState
	ldrb r0, [r1]
	cmp r0, #0
	beq _080380AC
	cmp r0, #1
	beq _080380F8
	b _08038144
	.byte 0x00
	.byte 0x00
_080380A8:
	.4byte gSubState
_080380AC:
	ldr r1, _080380F0  @ =gUnknown_02016D60
	ldr r0, _080380F0  @ =gUnknown_02016D60
	ldr r1, _080380F0  @ =gUnknown_02016D60
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
	bne _080380EC
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _080380F4  @ =gSubState
	ldr r0, _080380F4  @ =gSubState
	ldr r1, _080380F4  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_080380EC:
	b _08038144
	.byte 0x00
	.byte 0x00
_080380F0:
	.4byte gUnknown_02016D60
_080380F4:
	.4byte gSubState
_080380F8:
	ldr r0, _08038104  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	beq _08038108
	b _08038150
	.byte 0x00
	.byte 0x00
_08038104:
	.4byte gUnknown_03000520
_08038108:
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _0803813C  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08038140  @ =gPaletteBuf2
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0803813C  @ =0x00006739
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	bl sub_080123BC
	bl sub_0801239C
	mov r0, #9
	bl set_main_state
	b _08038150
	.byte 0x00
	.byte 0x00
_0803813C:
	.4byte 0x00006739
_08038140:
	.4byte gPaletteBuf2
_08038144:
	ldr r0, _08038158  @ =gUnknown_03006C70
	ldr r4, [r0]
	bl _call_via_r4
	bl sub_08000BAC
_08038150:
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08038158:
	.4byte gUnknown_03006C70
	THUMB_FUNC_END sub_08038094

