	THUMB_FUNC_START sub_080286A0
sub_080286A0: @ 0x080286A0
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #118
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080286C2
	ldrb r0, [r4, #23]
	strh r0, [r1]
	ldr r1, [r4, #120]
	add r0, r4, #0
	bl sub_08028728
	str r0, [r4, #120]
_080286C2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080286A0

