	THUMB_FUNC_START sub_080E34CC
sub_080E34CC: @ 0x080E34CC
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r5, sp
	add r5, r5, #1
	mov r0, sp
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E3510
	add r0, r4, #0
	bl sub_080E3518
	add r0, r4, #0
	bl sub_080E3528
	add r0, r4, #0
	bl sub_080E3130
	mov r0, sp
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E3510
	add r0, r4, #0
	bl sub_080E2684
_080E3510:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E34CC

