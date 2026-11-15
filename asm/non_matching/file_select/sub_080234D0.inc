	THUMB_FUNC_START sub_080234D0
sub_080234D0: @ 0x080234D0
	push {r4-r6,lr}
	add r4, r0, #0
	bl sub_0803DB4C
	ldrb r0, [r4, #21]
	cmp r0, #5
	bne _08023570
	ldr r2, _08023568  @ =gUnknown_03006A30
	ldrb r1, [r4, #11]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r3, [r0]
	add r5, r4, #0
	add r5, r5, #116
	ldrb r0, [r5]
	cmp r0, #0
	bne _08023528
	ldr r1, _0802356C  @ =gUnknown_0813BE48
	add r2, r3, #0
	add r2, r2, #42
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r6, [r4, #50]
	add r0, r0, r6
	strh r0, [r3, #50]
	ldrb r0, [r2]
	add r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r3, #54]
	mov r0, #1
	strb r0, [r5]
	mov r0, #2
	strb r0, [r4, #24]
_08023528:
	add r0, r3, #0
	add r0, r0, #42
	ldrb r1, [r0]
	lsr r1, r1, #1
	add r0, r4, #0
	add r0, r0, #117
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, #1
	cmp r1, r0
	bne _0802357C
	add r0, r3, #0
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802357C
	add r0, r4, #0
	bl sub_080237F8
	ldrb r0, [r5]
	cmp r0, #1
	bne _0802357C
	mov r0, #2
	strb r0, [r5]
	ldr r0, [r4, #84]
	mov r1, #28
	bl 0x08003870
	mov r0, #164
	bl 0x08003DFC
	b _0802357C
_08023568:
	.4byte gUnknown_03006A30
_0802356C:
	.4byte gUnknown_0813BE48
_08023570:
	mov r0, #0
	mov r1, #3
	strb r1, [r4, #20]
	add r1, r4, #0
	add r1, r1, #116
	strb r0, [r1]
_0802357C:
	add r0, r4, #0
	bl 0x08003C10
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080234D0

