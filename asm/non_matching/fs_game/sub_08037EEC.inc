	THUMB_FUNC_START sub_08037EEC
sub_08037EEC: @ 0x08037EEC
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0802BF60
	bl sub_0802C278
	bl sub_0800D6F4
	bl sub_0800D744
	mov r0, #0
	str r0, [r7]
	ldr r1, _08038068  @ =0x0600C000
	ldr r2, _0803806C  @ =0x01001000
	add r0, r7, #0
	bl CpuFastSet
	mov r0, #2
	bl load_palette_from_gfx_group
	mov r0, #21
	bl load_palette_from_gfx_group
	mov r0, #27
	bl load_gfx_group
	mov r0, #1
	bl load_gfx_group
	mov r0, #160
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	ldr r0, _08038070  @ =gPaletteBuf2
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08038074  @ =0x00000405
	ldr r1, _08038078  @ =gUnknown_08427BB4
	bl sub_0800F4C4
	ldr r0, _0803807C  @ =gUnknown_030004A0
	ldr r1, _08038080  @ =gUnknown_08142374
	ldrh r2, [r0, #8]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #36]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #8]
	ldr r0, _0803807C  @ =gUnknown_030004A0
	ldr r1, _0803807C  @ =gUnknown_030004A0
	ldrh r2, [r1, #12]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1, #12]
	ldrh r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #10]
	ldr r0, _0803807C  @ =gUnknown_030004A0
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #154
	lsl r3, r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _0803807C  @ =gUnknown_030004A0
	ldr r1, _08038080  @ =gUnknown_08142374
	ldrh r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #42]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #20]
	ldr r0, _0803807C  @ =gUnknown_030004A0
	ldr r1, _0803807C  @ =gUnknown_030004A0
	ldrh r2, [r1, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1, #24]
	ldrh r1, [r0, #22]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #22]
	ldr r0, _08038084  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	add r0, r1, #0
	bl sub_08063C5C
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7, #4]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7, #4]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #136
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	ldr r0, _08038088  @ =gUnknown_03006A30
	ldr r2, _08038084  @ =gLCDRegisterBuffer
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	mov r0, #0
	mov r1, #8
	bl sub_0800C0B0
	ldr r0, _0803808C  @ =gUnknown_02016D60
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r1, _08038090  @ =gUnknown_03005050
	ldr r0, _08038090  @ =gUnknown_03005050
	ldr r1, _08038090  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_08038068:
	.4byte 0x0600C000
_0803806C:
	.4byte 0x01001000
_08038070:
	.4byte gPaletteBuf2
_08038074:
	.4byte 0x00000405
_08038078:
	.4byte gUnknown_08427BB4
_0803807C:
	.4byte gUnknown_030004A0
_08038080:
	.4byte gUnknown_08142374
_08038084:
	.4byte gLCDRegisterBuffer
_08038088:
	.4byte gUnknown_03006A30
_0803808C:
	.4byte gUnknown_02016D60
_08038090:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08037EEC

