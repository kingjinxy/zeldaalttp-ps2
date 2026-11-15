	THUMB_FUNC_START sub_080DF340
sub_080DF340: @ 0x080DF340
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DF360
	add r0, r4, #0
	bl sub_080EAAF0
_080DF360:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DF340

