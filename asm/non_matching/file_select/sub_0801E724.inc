	THUMB_FUNC_START sub_0801E724
sub_0801E724: @ 0x0801E724
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #23]
	sub r0, r0, #1
	strb r0, [r2, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801E74A
	mov r0, #1
	strb r0, [r2, #20]
	strb r0, [r2, #23]
	mov r0, #128
	str r0, [r2, #12]
	add r0, r2, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r2, #0
	bl 0x08003870
_0801E74A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E724

	.byte 0x00
	.byte 0x00
