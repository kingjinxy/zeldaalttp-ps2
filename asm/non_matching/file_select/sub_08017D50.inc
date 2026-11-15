	THUMB_FUNC_START sub_08017D50
sub_08017D50: @ 0x08017D50
	push {r4,lr}
	add r4, r0, #0
	mov r0, #32
	mov r1, #255
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08017D6A
	add r0, r4, #0
	bl sub_0803D3D0
_08017D6A:
	add r0, r4, #0
	bl DeleteThisEntity
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017D50

	.byte 0x00
	.byte 0x00
