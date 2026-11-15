	THUMB_FUNC_START sub_08010648
sub_08010648: @ 0x08010648
	ldr r2, _0801065C  @ =gUnknown_02016D60
	ldrb r0, [r2, #27]
	cmp r0, #0
	bne _0801065A
	ldr r0, _08010660  @ =gSubState
	mov r1, #1
	strb r1, [r0]
	mov r0, #1
	strb r0, [r2, #26]
_0801065A:
	bx lr
_0801065C:
	.4byte gUnknown_02016D60
_08010660:
	.4byte gSubState
	THUMB_FUNC_END sub_08010648

