	THUMB_FUNC_START sub_080C6450
sub_080C6450: @ 0x080C6450
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r4, [sp, #24]
	lsl r0, r0, #16
	lsr r7, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r6, r2, #0
	lsl r3, r3, #16
	lsr r3, r3, #16
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r1, #255
	lsl r1, r1, #8
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080C6488
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080C6488
	mov r0, #255
	and r0, r0, r2
	cmp r0, #239
	bls _080C648C
_080C6488:
	mov r2, #240
	b _080C648E
_080C648C:
	add r2, r6, #0
_080C648E:
	str r4, [sp]
	add r0, r7, #0
	add r1, r5, #0
	bl sub_080C6004
	add sp, sp, #4
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C6450

