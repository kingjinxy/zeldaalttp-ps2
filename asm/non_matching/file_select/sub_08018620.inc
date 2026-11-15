	THUMB_FUNC_START sub_08018620
sub_08018620: @ 0x08018620
	push {r4,lr}
	add r4, r0, #0
	mov r0, #15
	mov r1, #5
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0801863A
	add r0, r4, #0
	bl sub_0803D3D0
_0801863A:
	add r0, r4, #0
	bl DeleteThisEntity
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018620

	.byte 0x00
	.byte 0x00
