	THUMB_FUNC_START sub_08014474
sub_08014474: @ 0x08014474
	push {r4,lr}
	add r4, r0, #0
	mov r0, #36
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08014498
	ldrh r0, [r4, #50]
	strh r0, [r1, #50]
	ldrh r0, [r4, #54]
	strh r0, [r1, #54]
	str r4, [r1, #76]
	add r0, r1, #0
	bl 0x08008D90
_08014498:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08014474

	.byte 0x00
	.byte 0x00
