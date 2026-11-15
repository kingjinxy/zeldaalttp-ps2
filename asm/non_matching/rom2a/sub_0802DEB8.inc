	THUMB_FUNC_START sub_0802DEB8
sub_0802DEB8: @ 0x0802DEB8
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _0802DF9C  @ =gUnknown_03000520
	ldrb r7, [r0]
	cmp r7, #0
	bne _0802DF8E
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	mov r8, r0
	ldr r1, _0802DFA0  @ =0x00006739
	add r0, r1, #0
	mov r1, r8
	strh r0, [r1]
	ldr r6, _0802DFA4  @ =gPaletteBuf2
	mov r1, #0
	mov r9, r1
	mov r4, r9
	orr r4, r4, r0
	strh r4, [r6]
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0802BF60
	bl sub_0800BEC4
	ldr r5, _0802DFA8  @ =gUnknown_02016D60
	add r0, r5, #0
	mov r1, #40
	bl zero_memory
	ldr r0, _0802DFAC  @ =gUnknown_03000830
	mov r1, r9
	strb r1, [r0]
	mov r0, #20
	bl load_palette_from_gfx_group
	mov r0, r8
	strh r4, [r0]
	strh r4, [r6]
	mov r0, #1
	bl load_gfx_group
	mov r0, #35
	bl load_gfx_group
	ldr r0, _0802DFB0  @ =gUnknown_03006C80
	ldrb r0, [r0]
	add r0, r0, #34
	bl load_gfx_group
	bl sub_0802DC80
	bl sub_0802DDAC
	bl sub_0802DE48
	bl sub_0802E5E0
	mov r0, #5
	bl sub_08036704
	ldr r2, _0802DFB4  @ =gUnknown_030004A0
	add r1, r2, #0
	add r1, r1, #102
	mov r0, #253
	lsl r0, r0, #6
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _0802DFB8  @ =0x0000070C
	strh r0, [r1]
	ldr r0, _0802DFBC  @ =0x00001B4C
	strh r0, [r2, #8]
	ldr r0, _0802DFC0  @ =0x00009E42
	strh r0, [r2, #32]
	ldr r0, _0802DFC4  @ =0x00009C43
	strh r0, [r2, #44]
	strh r7, [r2, #12]
	strh r7, [r2, #10]
	strh r7, [r2, #34]
	mov r1, #176
	lsl r1, r1, #1
	strh r1, [r2, #36]
	strh r7, [r2, #46]
	strh r1, [r2, #48]
	ldr r0, _0802DFC8  @ =gUnknown_03000450
	strh r7, [r0, #32]
	strh r1, [r0, #34]
	mov r0, #234
	lsl r0, r0, #5
	strh r0, [r2]
	add r5, r5, #39
	mov r1, r9
	strb r1, [r5]
	mov r0, #2
	mov r1, #4
	bl sub_0800C0B0
	ldr r1, _0802DFCC  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0802DF8E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802DF9C:
	.4byte gUnknown_03000520
_0802DFA0:
	.4byte 0x00006739
_0802DFA4:
	.4byte gPaletteBuf2
_0802DFA8:
	.4byte gUnknown_02016D60
_0802DFAC:
	.4byte gUnknown_03000830
_0802DFB0:
	.4byte gUnknown_03006C80
_0802DFB4:
	.4byte gUnknown_030004A0
_0802DFB8:
	.4byte 0x0000070C
_0802DFBC:
	.4byte 0x00001B4C
_0802DFC0:
	.4byte 0x00009E42
_0802DFC4:
	.4byte 0x00009C43
_0802DFC8:
	.4byte gUnknown_03000450
_0802DFCC:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0802DEB8

