	THUMB_FUNC_START sub_0802614C
sub_0802614C: @ 0x0802614C
	push {r4,r5,lr}
	ldr r2, _08026198  @ =gUnknown_0813C624
	mov r1, #43
	add r1, r1, r0
	mov r12, r1
	ldrb r1, [r1]
	add r2, r1, r2
	ldr r4, [r0, #84]
	mov r3, #0
	ldrsb r3, [r2, r3]
	ldr r2, _0802619C  @ =gUnknown_0813E4CC
	lsl r1, r1, #4
	add r1, r1, r2
	mov r5, #0
	ldrsh r1, [r1, r5]
	mul r1, r3, r1
	asr r1, r1, #8
	ldrh r5, [r4, #50]
	add r1, r1, r5
	strh r1, [r0, #50]
	mov r5, r12
	ldrb r1, [r5]
	lsl r1, r1, #4
	add r1, r1, #128
	add r1, r1, r2
	mov r2, #0
	ldrsh r1, [r1, r2]
	add r2, r3, #0
	mul r2, r1, r2
	asr r2, r2, #8
	add r2, r2, #8
	ldrh r1, [r4, #54]
	sub r1, r1, r2
	strh r1, [r0, #54]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08026198:
	.4byte gUnknown_0813C624
_0802619C:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_0802614C

