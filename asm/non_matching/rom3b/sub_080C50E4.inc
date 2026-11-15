	THUMB_FUNC_START sub_080C50E4
sub_080C50E4: @ 0x080C50E4
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl Sprite_Invert_XY_Speeds
	add r0, r4, #0
	bl Sprite_Halve_XY_Speeds
	add r0, r4, #0
	bl sub_080C5104
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C50E4

