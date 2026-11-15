	THUMB_FUNC_START sub_08028CD0
sub_08028CD0: @ 0x08028CD0
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r1, _08028CF0  @ =gUnknown_0813D238
	ldrb r2, [r4, #10]
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r5, [r0]
	cmp r2, #1
	bne _08028CE4
	b _08028DEC
_08028CE4:
	cmp r2, #1
	bgt _08028CF4
	cmp r2, #0
	beq _08028D02
	b _080291E8
	.byte 0x00
	.byte 0x00
_08028CF0:
	.4byte gUnknown_0813D238
_08028CF4:
	cmp r2, #2
	bne _08028CFA
	b _08028F08
_08028CFA:
	cmp r2, #3
	bne _08028D00
	b _08029064
_08028D00:
	b _080291E8
_08028D02:
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _08028DE4  @ =gUnknown_03000450
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
	ldr r2, _08028DE8  @ =0xFFBF0000
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
	b _08029050
_08028DE4:
	.4byte gUnknown_03000450
_08028DE8:
	.4byte 0xFFBF0000
_08028DEC:
	mov r3, #50
	ldrsh r1, [r4, r3]
	ldr r2, _08028F00  @ =gUnknown_03000450
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
	ldr r2, _08028F04  @ =0xFFBE0000
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
	b _08029050
_08028F00:
	.4byte gUnknown_03000450
_08028F04:
	.4byte 0xFFBE0000
_08028F08:
	mov r3, #50
	ldrsh r1, [r4, r3]
	ldr r2, _0802905C  @ =gUnknown_03000450
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
	ldr r2, _08029060  @ =0xFFBE0000
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
_08029050:
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	bl sub_08014658
	b _080291E8
_0802905C:
	.4byte gUnknown_03000450
_08029060:
	.4byte 0xFFBE0000
_08029064:
	mov r3, #50
	ldrsh r1, [r4, r3]
	ldr r2, _080291F0  @ =gUnknown_03000450
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
	ldr r2, _080291F4  @ =0xFFBD0000
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
_080291E8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080291F0:
	.4byte gUnknown_03000450
_080291F4:
	.4byte 0xFFBD0000
	THUMB_FUNC_END sub_08028CD0

