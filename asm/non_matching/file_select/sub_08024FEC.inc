	THUMB_FUNC_START sub_08024FEC
sub_08024FEC: @ 0x08024FEC
	push {r4-r6,lr}
	add r5, r0, #0
	add r6, r5, #0
	add r6, r6, #43
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldrb r0, [r6]
	add r0, r0, #16
	asr r1, r0, #5
	mov r0, #7
	and r1, r1, r0
	add r0, r5, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _08025018
	strb r1, [r0]
	add r1, r1, #20
	add r0, r5, #0
	bl sub_08003870
_08025018:
	ldr r4, [r5, #84]
	ldr r3, _08025054  @ =gUnknown_0813E4CC
	ldrb r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r3
	mov r2, #0
	ldrsh r1, [r0, r2]
	add r2, r5, #0
	add r2, r2, #124
	ldrh r0, [r2]
	mul r0, r1, r0
	asr r0, r0, #8
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r5, #50]
	ldrb r0, [r6]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r3
	mov r3, #0
	ldrsh r1, [r0, r3]
	ldrh r0, [r2]
	mul r1, r0, r1
	asr r1, r1, #8
	ldrh r0, [r4, #54]
	sub r0, r0, r1
	strh r0, [r5, #54]
	pop {r4-r6}
	pop {r0}
	bx r0
_08025054:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_08024FEC

