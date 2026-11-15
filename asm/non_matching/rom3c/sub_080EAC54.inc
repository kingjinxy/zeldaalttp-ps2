	THUMB_FUNC_START sub_080EAC54
sub_080EAC54: @ 0x080EAC54
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #98
	bl sub_080CF0AC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EAC54

