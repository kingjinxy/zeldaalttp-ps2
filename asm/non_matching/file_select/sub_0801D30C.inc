	THUMB_FUNC_START sub_0801D30C
sub_0801D30C: @ 0x0801D30C
	push {r4,lr}
	add r4, r0, #0
	mov r1, #58
	ldrsh r0, [r4, r1]
	cmp r0, #0
	bne _0801D324
	add r0, r4, #0
	bl sub_0801D3F0
	add r0, r4, #0
	bl DeleteThisEntity
_0801D324:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D30C

	.byte 0x00
	.byte 0x00
