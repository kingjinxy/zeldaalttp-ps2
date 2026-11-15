	THUMB_FUNC_START sub_08010418
sub_08010418: @ 0x08010418
	ldr r2, _0801042C  @ =gUnknown_02016D60
	ldrb r0, [r2, #27]
	cmp r0, #0
	bne _0801042A
	ldr r0, _08010430  @ =gSubState
	mov r1, #1
	strb r1, [r0]
	mov r0, #4
	strb r0, [r2, #26]
_0801042A:
	bx lr
_0801042C:
	.4byte gUnknown_02016D60
_08010430:
	.4byte gSubState
	THUMB_FUNC_END sub_08010418

