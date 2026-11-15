	THUMB_FUNC_START sub_080381A8
sub_080381A8: @ 0x080381A8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _080381B8  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	beq _080381BC
	b _08038214
_080381B8:
	.4byte gUnknown_03000520
_080381BC:
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	ldr r0, _0803821C  @ =gPaletteBuf2
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	bl sub_0803A030
	mov r0, #0
	str r0, [r7]
	ldr r1, _08038220  @ =gUnknown_03006A30
	ldr r2, _08038224  @ =0x05000090
	add r0, r7, #0
	bl CpuSet
	ldr r0, _08038228  @ =gUnknown_03000E20
	ldrb r1, [r0, #18]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #18]
	ldr r0, _0803822C  @ =gUnknown_03006730
	ldr r2, _08038230  @ =gLCDRegisterBuffer
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	ldr r2, _08038220  @ =gUnknown_03006A30
	add r1, r2, r1
	str r1, [r0]
	ldr r1, _08038234  @ =gUnknown_03005050
	ldr r0, _08038234  @ =gUnknown_03005050
	ldr r1, _08038234  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_08038214:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0803821C:
	.4byte gPaletteBuf2
_08038220:
	.4byte gUnknown_03006A30
_08038224:
	.4byte 0x05000090
_08038228:
	.4byte gUnknown_03000E20
_0803822C:
	.4byte gUnknown_03006730
_08038230:
	.4byte gLCDRegisterBuffer
_08038234:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_080381A8

