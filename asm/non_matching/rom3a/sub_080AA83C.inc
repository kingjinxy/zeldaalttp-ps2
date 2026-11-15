	THUMB_FUNC_START sub_080AA83C
sub_080AA83C: @ 0x080AA83C
	push {r4,lr}
	add r4, r0, #0
	cmp r4, #0
	ble _080AA84C
	mov r0, #30
	add r1, r4, #0
	bl sub_080BEA28
_080AA84C:
	add r0, r4, #0
	bl sub_080AA858
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080AA83C

