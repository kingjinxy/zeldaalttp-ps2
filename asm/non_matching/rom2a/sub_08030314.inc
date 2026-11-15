	THUMB_FUNC_START sub_08030314
sub_08030314: @ 0x08030314
	push {r4,lr}
	ldr r4, _0803036C  @ =gUnknown_02016D60
	ldrb r0, [r4, #8]
	bl sub_08030214
	ldrb r2, [r4, #8]
	mov r0, #70
	mov r1, #6
	bl sub_0804C8A8
	ldr r4, _08030370  @ =gLCDRegisterBuffer
	ldrb r2, [r4]
	mov r0, #70
	mov r1, #7
	bl sub_0804C8A8
	ldr r1, _08030374  @ =gUnknown_03000450
	str r0, [r1]
	mov r0, #5
	bl sub_08036704
	ldr r1, _08030378  @ =gUnknown_03005050
	mov r0, #4
	strb r0, [r1]
	ldr r1, _0803037C  @ =gSubState
	mov r0, #0
	strb r0, [r1]
	ldrb r0, [r4]
	cmp r0, #0
	beq _08030362
	mov r0, #70
	mov r1, #5
	mov r2, #0
	bl sub_0804C8A8
	mov r1, #120
	strh r1, [r0, #50]
	mov r1, #80
	strh r1, [r0, #54]
_08030362:
	bl sub_08030724
	pop {r4}
	pop {r0}
	bx r0
_0803036C:
	.4byte gUnknown_02016D60
_08030370:
	.4byte gLCDRegisterBuffer
_08030374:
	.4byte gUnknown_03000450
_08030378:
	.4byte gUnknown_03005050
_0803037C:
	.4byte gSubState
	THUMB_FUNC_END sub_08030314

