	THUMB_FUNC_START sub_080251E8
sub_080251E8: @ 0x080251E8
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r0, r4, #0
	bl GetNextFrame
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl sub_08003594
	cmp r0, #0
	bne _0802520A
	add r0, r4, #0
	bl DeleteThisEntity
_0802520A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080251E8

