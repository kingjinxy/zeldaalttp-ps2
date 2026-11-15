	THUMB_FUNC_START sub_08011C58
sub_08011C58: @ 0x08011C58
	add r1, r0, #0
	ldr r3, _08011C70  @ =gUnknown_02016D60
	ldrb r2, [r3, #26]
	ldrb r0, [r1, #11]
	cmp r0, r2
	beq _08011C6E
	strb r2, [r1, #11]
	mov r0, #2
	strb r0, [r1, #20]
	mov r0, #1
	strb r0, [r3, #27]
_08011C6E:
	bx lr
_08011C70:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011C58

