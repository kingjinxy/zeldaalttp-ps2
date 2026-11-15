	THUMB_FUNC_START sub_0801BC18
sub_0801BC18: @ 0x0801BC18
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801BC6C
	mov r0, #5
	bl sub_08012494
	add r1, r0, #0
	cmp r1, #0
	beq _0801BC66
	mov r0, #2
	strb r0, [r1, #10]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r2, r1, #0
	add r2, r2, #43
	strb r0, [r2]
	str r4, [r1, #84]
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	b _0801BC6C
_0801BC66:
	ldrb r0, [r4, #23]
	add r0, r0, #1
	strb r0, [r4, #23]
_0801BC6C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801BC18

	.byte 0x00
	.byte 0x00
