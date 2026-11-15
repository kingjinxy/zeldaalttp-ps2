	THUMB_FUNC_START sub_0800C328
sub_0800C328: @ 0x0800C328
	push {r4-r6,lr}
	add r3, r0, #0
	add r4, r3, #0
	add r4, r4, #126
	ldrh r2, [r4]
	mov r1, #0
	ldrsh r0, [r4, r1]
	cmp r0, #0
	bge _0800C358
	mov r2, #50
	ldrsh r0, [r3, r2]
	ldr r2, _0800C354  @ =gUnknown_03000450
	mov r4, #32
	ldrsh r1, [r2, r4]
	sub r0, r0, r1
	mov r5, #54
	ldrsh r1, [r3, r5]
	mov r6, #34
	ldrsh r2, [r2, r6]
	sub r1, r1, r2
	mov r2, #0
	b _0800C378
_0800C354:
	.4byte gUnknown_03000450
_0800C358:
	mov r5, #250
	lsl r5, r5, #1
	cmp r0, r5
	ble _0800C388
	mov r1, #50
	ldrsh r0, [r3, r1]
	ldr r2, _0800C384  @ =gUnknown_03000450
	mov r4, #32
	ldrsh r1, [r2, r4]
	sub r0, r0, r1
	mov r6, #54
	ldrsh r1, [r3, r6]
	mov r3, #34
	ldrsh r2, [r2, r3]
	sub r1, r1, r2
	add r2, r5, #0
_0800C378:
	mov r3, #0
	bl sub_0800CE74
	mov r0, #1
	b _0800C412
	.byte 0x00
	.byte 0x00
_0800C384:
	.4byte gUnknown_03000450
_0800C388:
	add r1, r3, #0
	add r1, r1, #125
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r2, r0
	strh r0, [r4]
	add r0, r3, #0
	add r0, r0, #124
	ldrb r0, [r0]
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #16
	ble _0800C3AC
	mov r0, #16
	strb r0, [r1]
_0800C3AC:
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r2, #16
	neg r2, r2
	cmp r0, r2
	bge _0800C3BA
	strb r2, [r1]
_0800C3BA:
	mov r6, #123
	add r6, r6, r3
	mov r12, r6
	add r1, r3, #0
	add r1, r1, #122
	ldrb r0, [r1]
	ldrb r5, [r6]
	add r0, r0, r5
	strb r0, [r6]
	add r0, r3, #0
	add r0, r0, #121
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #16
	ble _0800C3E4
	mov r0, #16
	strb r0, [r1]
_0800C3E4:
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, r2
	bge _0800C3EE
	strb r2, [r1]
_0800C3EE:
	mov r1, #50
	ldrsh r0, [r3, r1]
	ldr r2, _0800C418  @ =gUnknown_03000450
	mov r5, #32
	ldrsh r1, [r2, r5]
	sub r0, r0, r1
	mov r6, #54
	ldrsh r1, [r3, r6]
	mov r3, #34
	ldrsh r2, [r2, r3]
	sub r1, r1, r2
	mov r5, #0
	ldrsh r2, [r4, r5]
	mov r6, r12
	ldrb r3, [r6]
	bl sub_0800CE74
	mov r0, #0
_0800C412:
	pop {r4-r6}
	pop {r1}
	bx r1
_0800C418:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0800C328

