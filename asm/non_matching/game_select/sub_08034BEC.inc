	THUMB_FUNC_START sub_08034BEC
sub_08034BEC: @ 0x08034BEC
	push {lr}
	ldrb r1, [r0, #21]
	add r1, r1, #1
	strb r1, [r0, #21]
	mov r1, #192
	lsl r1, r1, #9
	str r1, [r0, #16]
	ldr r2, [r0, #96]
	mov r1, #2
	strb r1, [r2, #2]
	mov r1, #4
	bl sub_0804CE00
	mov r0, #90
	mov r1, #1
	mov r2, #30
	bl sub_0804C8A8
	mov r1, #144
	strh r1, [r0, #50]
	mov r1, #224
	strh r1, [r0, #54]
	ldr r0, _08034C24  @ =0x000001F7
	bl play_sound
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08034C24:
	.4byte 0x000001F7
	THUMB_FUNC_END sub_08034BEC

