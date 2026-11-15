	THUMB_FUNC_START sub_08011CC4
sub_08011CC4: @ 0x08011CC4
	add r3, r0, #0
	ldr r2, _08011CD8  @ =gUnknown_030004A0
	ldrh r0, [r2, #12]
	add r1, r0, #0
	cmp r1, #0
	beq _08011CDC
	sub r0, r0, #2
	strh r0, [r2, #12]
	b _08011CE2
	.byte 0x00
	.byte 0x00
_08011CD8:
	.4byte gUnknown_030004A0
_08011CDC:
	strh r1, [r2, #12]
	mov r0, #1
	strb r0, [r3, #20]
_08011CE2:
	ldr r1, _08011CEC  @ =gUnknown_02016D60
	mov r0, #1
	strb r0, [r1, #27]
	bx lr
	.byte 0x00
	.byte 0x00
_08011CEC:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011CC4

