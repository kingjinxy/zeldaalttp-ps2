	THUMB_FUNC_START sub_080350B8
sub_080350B8: @ 0x080350B8
	push {r4,r5,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #97
	ldrb r1, [r0]
	ldr r3, _08035108  @ =gUnknown_0813E4CC
	add r2, r4, #0
	add r2, r2, #96
	ldrb r0, [r2]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r3
	mov r5, #0
	ldrsh r0, [r0, r5]
	mul r0, r1, r0
	asr r0, r0, #8
	add r0, r0, #120
	strh r0, [r4, #50]
	add r0, r4, #0
	add r0, r0, #98
	ldrb r1, [r0]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	mov r2, #0
	ldrsh r0, [r0, r2]
	mul r0, r1, r0
	asr r0, r0, #8
	add r0, r0, #156
	strh r0, [r4, #54]
	ldrb r0, [r4, #21]
	cmp r0, #5
	bhi _080351D6
	lsl r0, r0, #2
	ldr r1, _0803510C  @ =0x08035110
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08035108:
	.4byte gUnknown_0813E4CC
_0803510C:
	.4byte _0803510C+0x4
	.4byte _08035128
	.4byte _08035142
	.4byte _08035164
	.4byte _08035164
	.4byte _08035164
	.4byte _08035198
_08035128:
	add r0, r4, #0
	add r0, r0, #96
	ldrb r1, [r0]
	sub r1, r1, #2
	strb r1, [r0]
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080351D6
	mov r0, #64
	b _0803515A
_08035142:
	add r0, r4, #0
	add r0, r0, #96
	ldrb r1, [r0]
	sub r1, r1, #4
	strb r1, [r0]
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080351D6
	mov r0, #32
_0803515A:
	strb r0, [r4, #23]
	ldrb r0, [r4, #21]
	add r0, r0, #1
	strb r0, [r4, #21]
	b _080351D6
_08035164:
	add r0, r4, #0
	add r0, r0, #96
	ldrb r1, [r0]
	sub r1, r1, #8
	strb r1, [r0]
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080351D6
	mov r0, #32
	strb r0, [r4, #23]
	ldrb r0, [r4, #21]
	add r0, r0, #1
	strb r0, [r4, #21]
	add r1, r4, #0
	add r1, r1, #97
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r1, r1, #1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080351D6
_08035198:
	add r0, r4, #0
	add r0, r0, #96
	ldrb r1, [r0]
	sub r1, r1, #8
	strb r1, [r0]
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080351D6
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	strb r1, [r4, #21]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #23
	strb r0, [r1]
	mov r0, #128
	lsl r0, r0, #4
	str r0, [r4, #12]
	ldr r0, _080351DC  @ =0x000001FB
	bl play_sound
	mov r0, #0
	mov r1, #8
	mov r2, #0
	bl sub_08063D28
_080351D6:
	pop {r4,r5}
	pop {r0}
	bx r0
_080351DC:
	.4byte 0x000001FB
	THUMB_FUNC_END sub_080350B8

