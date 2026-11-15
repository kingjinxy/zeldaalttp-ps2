	THUMB_FUNC_START sub_080EABEC
sub_080EABEC: @ 0x080EABEC
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
	bne _080EAC0C
	add r0, r4, #0
	bl sub_080EAAF0
_080EAC0C:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EABEC

