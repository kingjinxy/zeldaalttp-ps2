	THUMB_FUNC_START sub_0801C780
sub_0801C780: @ 0x0801C780
	push {lr}
	mov r1, #1
	strb r1, [r0, #21]
	mov r1, #4
	strb r1, [r0, #23]
	add r3, r0, #0
	add r3, r3, #60
	ldrb r2, [r3]
	mov r1, #127
	and r1, r1, r2
	strb r1, [r3]
	add r2, r0, #0
	add r2, r2, #42
	mov r1, #6
	strb r1, [r2]
	bl sub_08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C780

	.byte 0x00
	.byte 0x00
