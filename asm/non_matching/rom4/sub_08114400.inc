	THUMB_FUNC_START sub_08114400
sub_08114400: @ 0x08114400
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08114414  @ =0x000001AB
	mov r2, #0
	bl sub_080C9164
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08114414:
	.4byte 0x000001AB
	THUMB_FUNC_END sub_08114400

