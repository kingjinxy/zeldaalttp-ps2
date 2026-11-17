	THUMB_FUNC_START sub_0802EA14
sub_0802EA14: @ 0x0802EA14
	push {r4,lr}
	ldr r1, _0802EA78  @ =gUnknown_08427858
	ldr r4, _0802EA7C  @ =gSubState
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08137AFC
	bl sub_08000BAC
	bl sub_0802BFC4
	bl sub_0802E9B8
	ldr r0, _0802EA80  @ =gNewKeys
	ldrh r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0802EA72
	ldr r0, _0802EA84  @ =0x80010000
	bl play_sound
	ldr r1, _0802EA88  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	ldr r1, _0802EA8C  @ =gUnknown_02016D60
	mov r2, #0
	strb r2, [r1, #9]
	mov r0, #255
	strb r0, [r1, #10]
	ldr r1, _0802EA90  @ =gUnknown_03005050
	mov r0, #2
	strb r0, [r1]
	strb r2, [r4]
	ldr r1, _0802EA94  @ =0x00006739
	mov r0, #0
	bl set_palette_color
	mov r0, #3
	mov r1, #32
	bl sub_0800C0B0
_0802EA72:
	pop {r4}
	pop {r0}
	bx r0
_0802EA78:
	.4byte gUnknown_08427858
_0802EA7C:
	.4byte gSubState
_0802EA80:
	.4byte gNewKeys
_0802EA84:
	.4byte 0x80010000
_0802EA88:
	.4byte gUnknown_03000520
_0802EA8C:
	.4byte gUnknown_02016D60
_0802EA90:
	.4byte gUnknown_03005050
_0802EA94:
	.4byte 0x00006739
	THUMB_FUNC_END sub_0802EA14

