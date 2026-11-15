	THUMB_FUNC_START sub_08018838
sub_08018838: @ 0x08018838
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x08009664
	ldrh r0, [r4, #44]
	cmp r0, #0
	beq _08018868
	mov r0, #15
	mov r1, #5
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08018862
	add r0, r4, #0
	bl sub_0803D3D0
_08018862:
	add r0, r4, #0
	bl DeleteThisEntity
_08018868:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018838

	.byte 0x00
	.byte 0x00
