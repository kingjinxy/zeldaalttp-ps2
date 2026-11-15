	THUMB_FUNC_START sub_0801A1B8
sub_0801A1B8: @ 0x0801A1B8
	push {lr}
	mov r1, #10
	strb r1, [r0, #20]
	add r2, r0, #0
	add r2, r2, #125
	mov r1, #1
	strb r1, [r2]
	add r3, r0, #0
	add r3, r3, #118
	ldrb r2, [r3]
	mov r1, #15
	and r1, r1, r2
	add r1, r1, #32
	strb r1, [r3]
	mov r1, #1
	bl 0x08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A1B8

	.byte 0x00
	.byte 0x00
