	THUMB_FUNC_START sub_08022FBC
sub_08022FBC: @ 0x08022FBC
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r2, r4, #0
	add r2, r2, #122
	ldrh r1, [r2]
	mov r3, #54
	ldrsh r0, [r4, r3]
	cmp r1, r0
	blt _08022FEC
	add r0, r4, #0
	add r0, r0, #120
	ldrh r1, [r0]
	mov r3, #50
	ldrsh r0, [r4, r3]
	cmp r1, r0
	blt _08022FEC
	strh r1, [r4, #50]
	ldrh r0, [r2]
	strh r0, [r4, #54]
	add r0, r4, #0
	bl sub_08023010
_08022FEC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022FBC

	.byte 0x00
	.byte 0x00
