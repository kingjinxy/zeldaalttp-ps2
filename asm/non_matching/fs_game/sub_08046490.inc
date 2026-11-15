	THUMB_FUNC_START sub_08046490
sub_08046490: @ 0x08046490
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #115
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #125
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #115
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
	add r1, r1, #110
	ldrh r0, [r1]
	cmp r0, #31
	bhi _08046534
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #110
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #110
	ldrh r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #110
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, _08046530  @ =gUnknown_0813E4CC
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #110
	ldrh r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	mov r3, #0
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	lsl r2, r1, #5
	asr r1, r2, #8
	add r2, r1, #0
	mov r3, #32
	sub r1, r3, r2
	add r2, r0, #0
	add r0, r0, #114
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _08046594
_08046530:
	.4byte gUnknown_0813E4CC
_08046534:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08046594
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #112
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #29
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
	mov r0, #159
	bl sub_08003DFC
_08046594:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08046490

