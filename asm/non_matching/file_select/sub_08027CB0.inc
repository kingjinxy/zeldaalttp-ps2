	THUMB_FUNC_START sub_08027CB0
sub_08027CB0: @ 0x08027CB0
	push {r4-r6,lr}
	add r6, r0, #0
	ldrb r2, [r6, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r6, #28]
	add r3, r6, #0
	add r3, r3, #46
	mov r0, #0
	strb r0, [r3]
	add r3, r3, #48
	ldrb r0, [r3]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r3]
	ldrb r0, [r6, #20]
	add r0, r0, #1
	strb r0, [r6, #20]
	ldr r0, _08027D38  @ =0x0000010F
	mov r2, #50
	ldrsh r1, [r6, r2]
	ldr r4, _08027D3C  @ =gUnknown_03000450
	ldrh r2, [r4, #24]
	sub r1, r1, r2
	asr r1, r1, #4
	mov r3, #54
	ldrsh r2, [r6, r3]
	ldrh r3, [r4, #26]
	sub r2, r2, r3
	asr r2, r2, #4
	lsl r2, r2, #6
	orr r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r5, r6, #0
	add r5, r5, #80
	ldrh r2, [r5]
	bl sub_08008F78
	mov r0, #50
	ldrsh r1, [r6, r0]
	ldrh r0, [r4, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r2, #54
	ldrsh r0, [r6, r2]
	ldrh r2, [r4, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	mov r0, #15
	bl sub_08008F3C
	add r0, r6, #0
	mov r1, #0
	bl sub_08003870
	pop {r4-r6}
	pop {r0}
	bx r0
_08027D38:
	.4byte 0x0000010F
_08027D3C:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08027CB0

