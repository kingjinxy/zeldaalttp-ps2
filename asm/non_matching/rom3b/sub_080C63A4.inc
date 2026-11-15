	THUMB_FUNC_START sub_080C63A4
sub_080C63A4: @ 0x080C63A4
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r4, [sp, #20]
	ldr r6, [sp, #24]
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r3, r3, #16
	lsr r3, r3, #16
	lsl r4, r4, #24
	lsr r4, r4, #24
	cmp r1, #255
	bhi _080C63C8
	cmp r2, #255
	bls _080C63CE
_080C63C8:
	mov r2, #240
	mov r0, #1
	b _080C63D0
_080C63CE:
	mov r0, #0
_080C63D0:
	strb r0, [r6]
	str r4, [sp]
	add r0, r5, #0
	bl sub_080C6004
	add sp, sp, #4
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C63A4

	.byte 0x00
	.byte 0x00
