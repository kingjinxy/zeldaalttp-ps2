	THUMB_FUNC_START sub_0801FD28
sub_0801FD28: @ 0x0801FD28
	push {lr}
	mov r1, #1
	strb r1, [r0, #20]
	mov r1, #60
	strb r1, [r0, #23]
	add r1, r0, #0
	add r1, r1, #42
	ldrb r2, [r1]
	mov r1, #3
	and r1, r1, r2
	bl sub_08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FD28

