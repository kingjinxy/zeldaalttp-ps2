	THUMB_FUNC_START sub_0801EA88
sub_0801EA88: @ 0x0801EA88
	push {r4-r6,lr}
	add r5, r0, #0
	bl 0x08009664
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801EABA
	mov r0, #6
	strb r0, [r5, #20]
	mov r0, #224
	str r0, [r5, #12]
	add r2, r5, #0
	add r2, r2, #43
	ldrb r0, [r2]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r5, #16]
	mov r0, #8
	mov r1, #0
	bl sub_080161F8
	b _0801EB2C
_0801EABA:
	add r0, r5, #0
	bl 0x08003828
	ldr r4, _0801EB34  @ =gUnknown_0813AEF8
	add r6, r5, #0
	add r6, r6, #42
	ldrb r0, [r6]
	lsl r0, r0, #2
	add r1, r0, r4
	mov r2, #0
	ldrsb r2, [r1, r2]
	ldrh r1, [r5, #50]
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r0, r0, #1
	add r0, r0, r4
	mov r3, #0
	ldrsb r3, [r0, r3]
	ldrh r0, [r5, #54]
	add r3, r3, r0
	lsl r3, r3, #16
	lsr r3, r3, #16
	add r0, r5, #0
	mov r1, #9
	bl 0x080017EC
	ldrb r1, [r6]
	lsl r1, r1, #2
	add r0, r1, #2
	add r0, r0, r4
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldrh r0, [r5, #50]
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r1, r1, #3
	add r1, r1, r4
	mov r3, #0
	ldrsb r3, [r1, r3]
	ldrh r1, [r5, #54]
	add r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	add r0, r5, #0
	mov r1, #9
	bl 0x080017EC
	add r0, r5, #0
	bl sub_0801EDB4
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801EB2C
	mov r0, #5
	strb r0, [r5, #20]
_0801EB2C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801EB34:
	.4byte gUnknown_0813AEF8
	THUMB_FUNC_END sub_0801EA88

