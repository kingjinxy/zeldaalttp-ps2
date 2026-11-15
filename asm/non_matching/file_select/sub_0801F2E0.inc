	THUMB_FUNC_START sub_0801F2E0
sub_0801F2E0: @ 0x0801F2E0
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801F32E
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #192
	lsl r0, r0, #1
	str r0, [r4, #12]
	mov r0, #224
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #51
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	lsr r1, r1, #3
	add r1, r1, #8
	add r0, r4, #0
	bl 0x08003870
	add r0, r4, #0
	bl sub_0804CA4C
_0801F32E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F2E0

