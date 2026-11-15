	THUMB_FUNC_START sub_08036334
sub_08036334: @ 0x08036334
	mov r1, #1
	strb r1, [r0, #20]
	mov r1, #252
	lsl r1, r1, #1
	strh r1, [r0, #50]
	strh r1, [r0, #54]
	add r2, r0, #0
	add r2, r2, #114
	mov r1, #240
	strh r1, [r2]
	ldr r1, _08036350  @ =gUnknown_03000450
	str r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_08036350:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08036334

