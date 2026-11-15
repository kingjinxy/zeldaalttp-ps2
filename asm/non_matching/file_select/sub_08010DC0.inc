	THUMB_FUNC_START sub_08010DC0
sub_08010DC0: @ 0x08010DC0
	ldr r1, _08010DD0  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	cmp r0, #0
	beq _08010DD4
	sub r0, r0, #1
	strh r0, [r1, #4]
	mov r0, #1
	b _08010DD6
_08010DD0:
	.4byte gUnknown_02016D60
_08010DD4:
	mov r0, #0
_08010DD6:
	bx lr
	THUMB_FUNC_END sub_08010DC0

