	THUMB_FUNC_START sub_080291F8
sub_080291F8: @ 0x080291F8
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r1, _08029218  @ =gUnknown_0813D248
	ldrb r2, [r4, #10]
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r5, [r0]
	cmp r2, #1
	bne _0802920C
	b _08029314
_0802920C:
	cmp r2, #1
	bgt _0802921C
	cmp r2, #0
	beq _0802922A
	b _08029710
	.byte 0x00
	.byte 0x00
_08029218:
	.4byte gUnknown_0813D248
_0802921C:
	cmp r2, #2
	bne _08029222
	b _08029430
_08029222:
	cmp r2, #3
	bne _08029228
	b _0802958C
_08029228:
	b _08029710
_0802922A:
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _0802930C  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	add r0, r0, #8
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	ldrh r0, [r5]
	add r5, r5, #2
	lsr r6, r1, #16
	ldr r2, _08029310  @ =0xFFBF0000
	add r1, r1, r2
	lsr r1, r1, #16
	add r4, r4, #80
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #62
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r1, r6, #0
	add r1, r1, #66
	b _08029578
_0802930C:
	.4byte gUnknown_03000450
_08029310:
	.4byte 0xFFBF0000
_08029314:
	mov r3, #50
	ldrsh r1, [r4, r3]
	ldr r2, _08029428  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	ldrh r0, [r5]
	add r5, r5, #2
	lsr r6, r1, #16
	ldr r2, _0802942C  @ =0xFFBE0000
	add r1, r1, r2
	lsr r1, r1, #16
	add r4, r4, #80
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #62
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #62
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r1, r6, #0
	add r1, r1, #66
	b _08029578
_08029428:
	.4byte gUnknown_03000450
_0802942C:
	.4byte 0xFFBE0000
_08029430:
	mov r3, #50
	ldrsh r1, [r4, r3]
	ldr r2, _08029584  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	add r0, r0, #8
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	ldrh r0, [r5]
	add r5, r5, #2
	lsr r6, r1, #16
	ldr r2, _08029588  @ =0xFFBE0000
	add r1, r1, r2
	lsr r1, r1, #16
	add r4, r4, #80
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #62
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #61
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #62
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #66
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r1, r6, #0
	add r1, r1, #67
_08029578:
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	b _08029710
_08029584:
	.4byte gUnknown_03000450
_08029588:
	.4byte 0xFFBE0000
_0802958C:
	mov r3, #50
	ldrsh r1, [r4, r3]
	ldr r2, _08029718  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	ldrh r0, [r5]
	add r5, r5, #2
	lsr r6, r1, #16
	ldr r2, _0802971C  @ =0xFFBD0000
	add r1, r1, r2
	lsr r1, r1, #16
	add r4, r4, #80
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #66
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #62
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	sub r1, r1, #61
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	sub r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #61
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #62
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #63
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #65
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r5, r5, #2
	add r1, r6, #0
	add r1, r1, #66
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	ldrh r0, [r5]
	add r1, r6, #0
	add r1, r1, #67
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
_08029710:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08029718:
	.4byte gUnknown_03000450
_0802971C:
	.4byte 0xFFBD0000
	THUMB_FUNC_END sub_080291F8

