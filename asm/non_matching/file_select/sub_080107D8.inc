	THUMB_FUNC_START sub_080107D8
sub_080107D8: @ 0x080107D8
	push {lr}
	ldr r1, _080107F0  @ =gUnknown_02016D60
	mov r0, #60
	strh r0, [r1, #4]
	mov r0, #1
	strb r0, [r1, #21]
	strb r0, [r1, #22]
	ldr r0, _080107F4  @ =0x80040002
	bl play_sound
	pop {r0}
	bx r0
_080107F0:
	.4byte gUnknown_02016D60
_080107F4:
	.4byte 0x80040002
	THUMB_FUNC_END sub_080107D8

