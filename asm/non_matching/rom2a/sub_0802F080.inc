	THUMB_FUNC_START sub_0802F080
sub_0802F080: @ 0x0802F080
	push {lr}
	ldr r1, _0802F0AC  @ =gUnknown_02016D60
	mov r2, #0
	mov r0, #20
	strh r0, [r1, #4]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	strb r2, [r1, #12]
	ldr r1, _0802F0B0  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
	ldr r0, _0802F0B4  @ =0x000001F9
	bl play_sound
	pop {r0}
	bx r0
_0802F0AC:
	.4byte gUnknown_02016D60
_0802F0B0:
	.4byte gUnknown_03000520
_0802F0B4:
	.4byte 0x000001F9
	THUMB_FUNC_END sub_0802F080

