	THUMB_FUNC_START sub_0812ADDC
sub_0812ADDC: @ 0x0812ADDC
	push {lr}
	add r3, r0, #0
	ldr r2, [r1]
	str r2, [r3, #108]
	mov r0, #0
	str r0, [r3, #104]
	cmp r2, #0
	beq _0812ADEE
	str r3, [r2, #104]
_0812ADEE:
	str r3, [r1]
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812ADDC

