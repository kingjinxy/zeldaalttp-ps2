	THUMB_FUNC_START sub_0801D710
sub_0801D710: @ 0x0801D710
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r2, r4, #0
	add r2, r2, #122
	ldrh r1, [r2]
	mov r3, #54
	ldrsh r0, [r4, r3]
	cmp r1, r0
	blt _0801D740
	add r0, r4, #0
	add r0, r0, #120
	ldrh r1, [r0]
	mov r3, #50
	ldrsh r0, [r4, r3]
	cmp r1, r0
	blt _0801D740
	strh r1, [r4, #50]
	ldrh r0, [r2]
	strh r0, [r4, #54]
	add r0, r4, #0
	bl sub_0801D764
_0801D740:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D710

	.byte 0x00
	.byte 0x00
