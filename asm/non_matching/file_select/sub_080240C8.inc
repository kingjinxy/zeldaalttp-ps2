	THUMB_FUNC_START sub_080240C8
sub_080240C8: @ 0x080240C8
	push {r4-r7,lr}
	add r7, r0, #0
	ldr r0, _08024164  @ =gUnknown_03006C80
	ldrb r1, [r0, #5]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0802415E
	ldrb r0, [r7, #23]
	cmp r0, #0
	beq _0802410A
	sub r0, r0, #1
	strb r0, [r7, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802415E
	add r0, r7, #0
	add r0, r0, #43
	ldrb r1, [r0]
	add r1, r1, #16
	asr r1, r1, #5
	mov r0, #7
	and r1, r1, r0
	add r0, r7, #0
	add r0, r0, #42
	strb r1, [r0]
	add r1, r1, #20
	add r0, r7, #0
	bl 0x08003870
	mov r0, #158
	bl 0x08003DFC
_0802410A:
	ldr r0, [r7, #84]
	ldr r6, _08024168  @ =gUnknown_0813E4CC
	add r1, r7, #0
	add r1, r1, #43
	ldrb r3, [r1]
	lsl r1, r3, #1
	add r1, r1, r6
	mov r2, #0
	ldrsh r1, [r1, r2]
	add r4, r7, #0
	add r4, r4, #124
	ldrh r5, [r4]
	add r2, r1, #0
	mul r2, r5, r2
	lsl r2, r2, #8
	asr r2, r2, #16
	lsl r2, r2, #16
	add r3, r3, #64
	lsl r3, r3, #1
	add r3, r3, r6
	mov r6, #0
	ldrsh r1, [r3, r6]
	add r3, r1, #0
	mul r3, r5, r3
	asr r3, r3, #8
	neg r3, r3
	sub r3, r3, #4
	lsl r3, r3, #16
	add r1, r7, #0
	bl sub_0803D4A4
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #63
	bls _0802415E
	mov r0, #2
	strb r0, [r7, #20]
	mov r0, #60
	strb r0, [r7, #23]
_0802415E:
	pop {r4-r7}
	pop {r0}
	bx r0
_08024164:
	.4byte gUnknown_03006C80
_08024168:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_080240C8

