	THUMB_FUNC_START sub_08010094
sub_08010094: @ 0x08010094
	push {lr}
	ldr r1, _080100BC  @ =gUnknown_02016D60
	mov r0, #255
	strb r0, [r1, #23]
	ldr r1, _080100C0  @ =gUnknown_030004A0
	ldrh r0, [r1, #48]
	sub r0, r0, #1
	strh r0, [r1, #48]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #56
	bne _080100C8
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldr r0, _080100C4  @ =0x80040000
	bl play_sound
	b _080100D8
_080100BC:
	.4byte gUnknown_02016D60
_080100C0:
	.4byte gUnknown_030004A0
_080100C4:
	.4byte 0x80040000
_080100C8:
	cmp r0, #0
	bne _080100D8
	ldr r1, _080100DC  @ =gUnknown_03005050
	mov r0, #6
	strb r0, [r1]
	ldr r1, _080100E0  @ =gSubState
	mov r0, #0
	strb r0, [r1]
_080100D8:
	pop {r0}
	bx r0
_080100DC:
	.4byte gUnknown_03005050
_080100E0:
	.4byte gSubState
	THUMB_FUNC_END sub_08010094

