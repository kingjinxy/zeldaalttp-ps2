	THUMB_FUNC_START sub_08012B44
sub_08012B44: @ 0x08012B44
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	mov r1, #7
	bl sub_08012F84
	add r1, r0, #0
	cmp r1, #0
	beq _08012B5E
	add r0, r4, #0
	bl _call_via_r1
_08012B5E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08012B44

