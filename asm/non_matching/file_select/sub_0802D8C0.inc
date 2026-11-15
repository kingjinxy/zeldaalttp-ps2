	THUMB_FUNC_START sub_0802D8C0
sub_0802D8C0: @ 0x0802D8C0
	push {lr}
	mov r0, #2
	bl sub_0802CA70
	mov r0, #0
	mov r1, #0
	mov r2, #30
	mov r3, #4
	bl sub_0802D8E4
	mov r0, #22
	mov r1, #16
	mov r2, #8
	mov r3, #4
	bl sub_0802D8E4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802D8C0

