	THUMB_FUNC_START sub_0801FEA0
sub_0801FEA0: @ 0x0801FEA0
	push {lr}
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FED6
	mov r0, #5
	strb r0, [r3, #20]
	mov r0, #128
	strb r0, [r3, #23]
	mov r0, #16
	strb r0, [r3, #24]
	add r0, r0, #240
	str r0, [r3, #12]
	add r2, r3, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r0, #3
	and r0, r0, r1
	add r0, r0, #8
	strb r0, [r2]
	ldrb r1, [r2]
	add r0, r3, #0
	bl sub_08003870
_0801FED6:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FEA0

	.byte 0x00
	.byte 0x00
