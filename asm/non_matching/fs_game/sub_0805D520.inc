	THUMB_FUNC_START sub_0805D520
sub_0805D520: @ 0x0805D520
	push {r4,r7,lr}
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
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0805D5DC  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0805D5DC  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r0, [r1]
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #2
	beq _0805D5E0
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	mov r0, #47
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #7
	mov r0, #1
	bl sub_08008F48
	b _0805D608
_0805D5DC:
	.4byte gUnknown_03000450
_0805D5E0:
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #8
	mov r0, #88
	bl sub_08014658
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #124
	ldrh r1, [r2]
	mov r2, #128
	lsl r2, r2, #8
	mov r0, #1
	bl sub_08008F48
_0805D608:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
	mov r0, #136
	bl sub_08003DFC
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805D520

