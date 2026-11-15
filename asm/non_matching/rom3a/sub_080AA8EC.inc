	THUMB_FUNC_START sub_080AA8EC
sub_080AA8EC: @ 0x080AA8EC
	push {r4,r5,lr}
	add r4, r0, #0
	add r5, r2, #0
	lsl r2, r1, #16
	ldrh r0, [r4]
	cmp r0, #19
	bls _080AA904
	mov r0, #0
	strh r0, [r4]
	ldr r0, [r3]
	add r0, r0, #64
	str r0, [r3]
_080AA904:
	ldrh r1, [r4]
	lsr r1, r1, #1
	ldr r0, [r3]
	lsl r1, r1, #1
	add r1, r1, r0
	lsr r0, r2, #17
	lsl r0, r0, #1
	add r0, r0, r5
	ldrh r0, [r0]
	strh r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080AA8EC

	.byte 0x00
	.byte 0x00
