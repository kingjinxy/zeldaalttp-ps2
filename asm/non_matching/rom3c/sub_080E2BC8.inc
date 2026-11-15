	THUMB_FUNC_START sub_080E2BC8
sub_080E2BC8: @ 0x080E2BC8
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
	bne _080E2BFE
	add r0, r4, #0
	mov r1, #12
	bl sub_080E33BC
	add r0, r4, #0
	mov r1, #8
	bl sub_080E3024
	add r0, r4, #0
	bl sub_080E2C08
	add r0, r4, #0
	bl sub_080E2684
_080E2BFE:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E2BC8

	.byte 0x00
	.byte 0x00
