	THUMB_FUNC_START sub_0801BCCC
sub_0801BCCC: @ 0x0801BCCC
	add r2, r0, #0
	add r1, r2, #0
	add r1, r1, #118
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801BCE2
	mov r0, #1
	strb r0, [r2, #20]
_0801BCE2:
	bx lr
	THUMB_FUNC_END sub_0801BCCC

