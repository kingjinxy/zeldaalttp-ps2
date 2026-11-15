	THUMB_FUNC_START sub_0801D690
sub_0801D690: @ 0x0801D690
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r0, r4, #0
	add r0, r0, #122
	ldrh r1, [r0]
	mov r2, #54
	ldrsh r0, [r4, r2]
	cmp r1, r0
	bgt _0801D6AE
	strh r1, [r4, #54]
	add r0, r4, #0
	bl sub_0801D764
_0801D6AE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D690

