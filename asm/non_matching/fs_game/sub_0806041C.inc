	THUMB_FUNC_START sub_0806041C
sub_0806041C: @ 0x0806041C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	add r1, r7, #4
	strh r0, [r1]
	add r1, r7, #4
	ldrh r0, [r1]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _08060534  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	add r2, r3, #0
	add r2, r2, #16
	sub r3, r1, r2
	asr r1, r3, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _08060534  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	add r3, r4, #0
	add r3, r3, #16
	sub r2, r2, r3
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r0, r7, #4
	ldrh r1, [r0]
	add r0, r1, #1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _08060534  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _08060534  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	add r3, r4, #0
	add r3, r3, #16
	sub r2, r2, r3
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r0, r7, #4
	ldrh r1, [r0]
	add r0, r1, #2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _08060534  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	add r2, r3, #0
	add r2, r2, #16
	sub r3, r1, r2
	asr r1, r3, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _08060534  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add r0, r7, #4
	ldrh r1, [r0]
	add r0, r1, #3
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _08060534  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _08060534  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	mov r2, #128
	lsl r2, r2, #8
	bl sub_08014658
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08060534:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0806041C

