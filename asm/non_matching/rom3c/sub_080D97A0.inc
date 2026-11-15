	THUMB_FUNC_START sub_080D97A0
sub_080D97A0: @ 0x080D97A0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r3, #127
	ldr r1, _080D97F0  @ =gUnknown_03003112
	add r7, r0, r1
	add r2, r1, #0
	add r2, r2, #32
	add r6, r0, r2
	sub r2, r2, #48
	add r5, r0, r2
	add r1, r1, #16
	add r4, r0, r1
_080D97BA:
	lsl r1, r3, #24
	asr r1, r1, #24
	ldr r0, _080D97F4  @ =gUnknown_0200EC18
	add r2, r1, r0
	ldrb r0, [r7]
	strb r0, [r2]
	ldr r0, _080D97F8  @ =gUnknown_0200EC98
	add r2, r1, r0
	ldrb r0, [r6]
	strb r0, [r2]
	ldr r0, _080D97FC  @ =gUnknown_0200ED18
	add r2, r1, r0
	ldrb r0, [r5]
	strb r0, [r2]
	ldr r0, _080D9800  @ =gUnknown_0200ED98
	add r2, r1, r0
	ldrb r0, [r4]
	strb r0, [r2]
	sub r1, r1, #1
	lsl r1, r1, #24
	lsr r3, r1, #24
	cmp r1, #0
	bge _080D97BA
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D97F0:
	.4byte gUnknown_03003112
_080D97F4:
	.4byte gUnknown_0200EC18
_080D97F8:
	.4byte gUnknown_0200EC98
_080D97FC:
	.4byte gUnknown_0200ED18
_080D9800:
	.4byte gUnknown_0200ED98
	THUMB_FUNC_END sub_080D97A0

