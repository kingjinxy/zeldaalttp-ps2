	THUMB_FUNC_START sub_0802FFE4
sub_0802FFE4: @ 0x0802FFE4
	push {lr}
	ldr r0, _0803000C  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _08030006
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _08030010  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08030014  @ =gPaletteBuf2
	strh r1, [r0]
	mov r0, #9
	bl set_main_state
_08030006:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803000C:
	.4byte gUnknown_03000520
_08030010:
	.4byte 0x00006739
_08030014:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_0802FFE4

