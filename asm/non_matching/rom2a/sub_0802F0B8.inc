	THUMB_FUNC_START sub_0802F0B8
sub_0802F0B8: @ 0x0802F0B8
	push {r4,lr}
	ldr r1, _0802F0D0  @ =gUnknown_02016D60
	ldrb r0, [r1]
	sub r0, r0, #4
	add r4, r1, #0
	cmp r0, #4
	bhi _0802F1B0
	lsl r0, r0, #2
	ldr r1, _0802F0D4  @ =0x0802F0D8
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802F0D0:
	.4byte gUnknown_02016D60
_0802F0D4:
	.4byte 0x0802F0D8
	.4byte _0802F0EC
	.4byte _0802F100
	.4byte _0802F12C
	.4byte _0802F16C
	.4byte _0802F19C
_0802F0EC:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F1B0
	ldr r0, _0802F0FC  @ =0x00000505
	b _0802F13A
_0802F0FC:
	.4byte 0x00000505
_0802F100:
	ldr r0, _0802F124  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0802F1B0
	bl sub_0800D644
	ldr r1, _0802F128  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #60
	strh r0, [r1, #4]
	mov r0, #2
	strb r0, [r1, #14]
	b _0802F1B0
	.byte 0x00
	.byte 0x00
_0802F124:
	.4byte gUnknown_02000010
_0802F128:
	.4byte gUnknown_02016D60
_0802F12C:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F1B0
	ldr r0, _0802F164  @ =0x00000506
_0802F13A:
	bl sub_0800D67C
	ldr r3, _0802F168  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _0802F1B0
	.byte 0x00
	.byte 0x00
_0802F164:
	.4byte 0x00000506
_0802F168:
	.4byte gUnknown_02000010
_0802F16C:
	ldr r0, _0802F190  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0802F1B0
	bl sub_0800D644
	ldr r1, _0802F194  @ =gUnknown_02016D60
	mov r0, #3
	strb r0, [r1, #14]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0802F198  @ =0x00000203
	bl play_sound
	b _0802F1B0
_0802F190:
	.4byte gUnknown_02000010
_0802F194:
	.4byte gUnknown_02016D60
_0802F198:
	.4byte 0x00000203
_0802F19C:
	ldrb r2, [r4, #14]
	cmp r2, #0
	bne _0802F1B0
	ldr r0, _0802F1B8  @ =gSubState
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	strb r2, [r4]
	mov r0, #30
	strh r0, [r4, #4]
_0802F1B0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802F1B8:
	.4byte gSubState
	THUMB_FUNC_END sub_0802F0B8

