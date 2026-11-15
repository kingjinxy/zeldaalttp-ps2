	THUMB_FUNC_START sub_0803D8AC
sub_0803D8AC: @ 0x0803D8AC
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #118
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #119
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	bcc _0803D900
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #124
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #126
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	mov r0, #1
	b _0803D9EA
_0803D900:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #118
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #118
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	mov r2, #0
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	mov r3, #0
	ldrsh r1, [r2, r3]
	sub r0, r0, r1
	str r0, [r7, #4]
	add r4, r7, #0
	add r4, r4, #8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldrb r0, [r1]
	ldr r1, [r7, #4]
	mul r0, r1, r0
	add r1, r0, #0
	lsl r0, r1, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #119
	ldrb r1, [r2]
	bl __divsi3
	asr r1, r0, #8
	add r0, r1, #0
	strh r0, [r4]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r2]
	ldrh r3, [r1]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	mov r2, #0
	ldrsh r0, [r1, r2]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #122
	mov r3, #0
	ldrsh r1, [r2, r3]
	sub r0, r0, r1
	str r0, [r7, #4]
	add r4, r7, #0
	add r4, r4, #8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #118
	ldrb r0, [r1]
	ldr r1, [r7, #4]
	mul r0, r1, r0
	add r1, r0, #0
	lsl r0, r1, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #119
	ldrb r1, [r2]
	bl __divsi3
	asr r1, r0, #8
	add r0, r1, #0
	strh r0, [r4]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #122
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r2]
	ldrh r3, [r1]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	mov r0, #0
	b _0803D9EA
_0803D9EA:
	add sp, sp, #12
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803D8AC

	.byte 0x00
	.byte 0x00
