	THUMB_FUNC_START sub_0801D46C
sub_0801D46C: @ 0x0801D46C
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #32
	mov r1, #255
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _0801D488
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
_0801D488:
	mov r0, #26
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _0801D4BA
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	add r0, r5, #0
	add r0, r0, #124
	ldrh r0, [r0]
	strh r0, [r4, #50]
	add r0, r5, #0
	add r0, r0, #126
	ldrh r0, [r0]
	strh r0, [r4, #54]
	ldrb r0, [r5, #11]
	strb r0, [r4, #11]
	add r1, r4, #0
	add r1, r1, #110
	mov r0, #180
	lsl r0, r0, #2
	strh r0, [r1]
_0801D4BA:
	add r0, r5, #0
	bl DeleteThisEntity
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D46C

	.byte 0x00
	.byte 0x00
