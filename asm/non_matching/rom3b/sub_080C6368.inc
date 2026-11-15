	THUMB_FUNC_START sub_080C6368
sub_080C6368: @ 0x080C6368
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r4, [sp, #20]
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r2, #16
	lsl r3, r3, #16
	lsr r5, r3, #16
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsr r3, r2, #16
	mov r6, #128
	lsl r6, r6, #15
	add r2, r2, r6
	lsr r2, r2, #16
	cmp r2, #255
	bls _080C6390
	mov r3, #192
_080C6390:
	str r4, [sp]
	add r2, r3, #0
	add r3, r5, #0
	bl sub_080C6004
	add sp, sp, #4
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C6368

	.byte 0x00
	.byte 0x00
