	THUMB_FUNC_START sub_0801A038
sub_0801A038: @ 0x0801A038
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r1, r4, #0
	add r1, r1, #112
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801A084
	mov r3, #3
	mov r0, #3
	strb r0, [r4, #20]
	sub r1, r1, #66
	mov r0, #8
	strb r0, [r1]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #29]
	add r1, r4, #0
	add r1, r1, #94
	ldrb r0, [r1]
	orr r0, r0, r3
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
_0801A084:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A038

	.byte 0x00
	.byte 0x00
