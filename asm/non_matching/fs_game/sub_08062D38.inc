	THUMB_FUNC_START sub_08062D38
sub_08062D38: @ 0x08062D38
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	bl sub_08050338
	add r1, r0, #0
	ldr r0, [r7]
	lsl r2, r1, #24
	lsr r1, r2, #24
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #3
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r1, [r7]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08062DD0  @ =gUnknown_03000450
	ldrh r2, [r1, #24]
	sub r1, r0, r2
	asr r0, r1, #4
	ldr r2, [r7]
	mov r3, #54
	ldrsh r1, [r2, r3]
	ldr r2, _08062DD0  @ =gUnknown_03000450
	ldrh r3, [r2, #26]
	sub r1, r1, r3
	asr r2, r1, #4
	add r1, r2, #0
	lsl r2, r1, #6
	add r1, r2, #0
	orr r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl 0x08008F48
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08062DD0:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08062D38

