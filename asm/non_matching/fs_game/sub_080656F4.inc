	THUMB_FUNC_START sub_080656F4
sub_080656F4: @ 0x080656F4
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #120
	bhi _08065738
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
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
	cmp r1, #120
	bne _08065730
	ldr r0, [r7]
	mov r1, #1
	bl 0x08003870
	b _08065736
_08065730:
	ldr r0, [r7]
	bl sub_080660BC
_08065736:
	b _08065948
_08065738:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08065750
	b _08065948
_08065750:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
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
	cmp r1, #187
	bls _08065774
	b _080658DC
_08065774:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #122
	bne _0806579E
	mov r0, #177
	bl play_sound
	ldr r0, [r7]
	bl 0x08003B94
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #224
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	b _080657BE
_0806579E:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #152
	bne _080657BE
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_080657BE:
	ldr r0, _080658D0  @ =gUnknown_03000488
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #0
	sub r1, r1, #120
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, r3
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080658D0  @ =gUnknown_03000488
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #0
	sub r1, r1, #120
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r1, #0
	mov r4, #128
	lsl r4, r4, #1
	add r1, r2, r4
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #2]
	ldr r0, _080658D0  @ =gUnknown_03000488
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r1, _080658D0  @ =gUnknown_03000488
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0803D770
	ldr r0, [r7]
	ldr r1, _080658D4  @ =gUnknown_0813E4CC
	ldr r2, [r7]
	ldrb r3, [r2, #24]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	mov r3, #0
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	lsl r2, r1, #4
	asr r1, r2, #8
	add r2, r1, #0
	mov r4, #252
	lsl r4, r4, #1
	add r1, r2, r4
	ldr r3, _080658D4  @ =gUnknown_0813E4CC
	add r2, r3, #0
	mov r2, #224
	lsl r2, r2, #1
	add r3, r3, r2
	mov r4, #0
	ldrsh r2, [r3, r4]
	add r3, r2, #0
	lsl r2, r3, #4
	asr r3, r2, #8
	add r2, r3, #0
	sub r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r2, _080658D4  @ =gUnknown_0813E4CC
	add r1, r2, #0
	mov r1, #224
	lsl r1, r1, #1
	add r2, r2, r1
	mov r3, #0
	ldrsh r1, [r2, r3]
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r3, r2, #3
	asr r1, r3, #8
	ldr r2, _080658D4  @ =gUnknown_0813E4CC
	ldr r3, [r7]
	ldrb r4, [r3, #24]
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r2, r4
	mov r4, #0
	ldrsh r2, [r3, r4]
	add r4, r2, #0
	lsl r3, r4, #1
	add r3, r3, r2
	lsl r2, r3, #3
	asr r3, r2, #8
	add r2, r3, #0
	ldr r4, _080658D8  @ =0xFFFFFE08
	add r3, r2, r4
	add r2, r3, #0
	sub r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #3
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	b _08065948
_080658D0:
	.4byte gUnknown_03000488
_080658D4:
	.4byte gUnknown_0813E4CC
_080658D8:
	.4byte 0xFFFFFE08
_080658DC:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #210
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #252
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #252
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	ldr r0, [r7]
	bl 0x08003BCC
	mov r0, #178
	bl 0x08003DFC
_08065948:
	ldr r0, [r7]
	bl 0x08003828
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080656F4

	.byte 0x00
	.byte 0x00
