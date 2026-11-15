	THUMB_FUNC_START sub_0802B0F8
sub_0802B0F8: @ 0x0802B0F8
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #126
	ldrh r0, [r1]
	cmp r0, #0
	beq _0802B120
	sub r0, r0, #1
	strh r0, [r1]
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0802B118
	add r0, r4, #0
	bl sub_0802B148
_0802B118:
	add r0, r4, #0
	bl 0x08003828
	b _0802B140
_0802B120:
	add r2, r4, #0
	add r2, r2, #120
	ldrb r0, [r2]
	cmp r0, #0
	beq _0802B134
	sub r0, r0, #1
	strb r0, [r2]
	mov r0, #32
	strh r0, [r1]
	b _0802B140
_0802B134:
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #10]
	add r0, r4, #0
	bl 0x08003870
_0802B140:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B0F8

	.byte 0x00
	.byte 0x00
