	THUMB_FUNC_START sub_08126FC0
sub_08126FC0: @ 0x08126FC0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08126FFC  @ =gUnknown_03000050
	mov r12, r1
	ldrh r2, [r1, #8]
	lsr r2, r2, #5
	mov r1, #3
	and r2, r2, r1
	mov r3, r12
	add r3, r3, #48
	add r3, r0, r3
	ldr r1, _08127000  @ =gUnknown_081808D0
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r3]
	mov r3, r12
	add r3, r3, #72
	add r3, r0, r3
	ldr r1, _08127004  @ =gUnknown_081808D4
	add r2, r2, r1
	ldrb r1, [r2]
	strb r1, [r3]
	mov r1, r12
	add r1, r1, #16
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08126FFC:
	.4byte gUnknown_03000050
_08127000:
	.4byte gUnknown_081808D0
_08127004:
	.4byte gUnknown_081808D4
	THUMB_FUNC_END sub_08126FC0

