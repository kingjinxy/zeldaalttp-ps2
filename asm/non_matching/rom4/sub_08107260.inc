	THUMB_FUNC_START sub_08107260
sub_08107260: @ 0x08107260
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r1, #0
	add r1, r5, #0
	bl sub_080CA538
	cmp r0, #0
	blt _0810728E
	lsl r4, r0, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CAE50
	add r0, r5, #0
	mov r1, #37
	bl sub_080CF0AC
	add r0, r4, #0
	bl sub_08107294
_0810728E:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08107260

