	THUMB_FUNC_START sub_080005F0
sub_080005F0: @ 0x080005F0
	ldr r1, _08000794  @ =gUnknown_03005060
	ldr r2, _08000798  @ =gEntityLinks
_080005F4:
	ldr r3, [r1, #8]
	cmp r3, #0
	beq _08000602
	add r1, r1, #144
	cmp r1, r2
	bcc _080005F4
	mov pc, lr
_08000602:
	ldr r2, _0800079C  @ =gUnknown_02016D50
	ldr r2, [r2]
	ldr r3, [r2]
	str r3, [r1]
	str r2, [r1, #4]
	str r1, [r2]
	str r1, [r3, #4]
	str r0, [r1, #8]
	mov r1, #94
	ldrb r2, [r0, r1]
	mov r3, #16
	orr r2, r2, r3
	strb r2, [r0, r1]
	mov pc, lr

	.align 2, 0
