	THUMB_FUNC_START sub_080D9844
sub_080D9844: @ 0x080D9844
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #41
	bl sub_080CF0AC
	add r0, r4, #0
	bl sub_080D96A0
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D9844

