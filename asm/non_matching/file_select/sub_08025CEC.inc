	THUMB_FUNC_START sub_08025CEC
sub_08025CEC: @ 0x08025CEC
	push {r4-r6,lr}
	add r6, r0, #0
	bl sub_08026244
	ldr r2, [r6, #84]
	add r0, r2, #0
	add r0, r0, #42
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r1, _08025DB4  @ =gUnknown_0813C5D4
	add r0, r0, r1
	mov r5, #0
	ldrsb r5, [r0, r5]
	ldrh r1, [r2, #50]
	add r5, r5, r1
	mov r4, #1
	ldrsb r4, [r0, r4]
	ldrh r2, [r2, #54]
	add r4, r4, r2
	mov r2, #50
	ldrsh r0, [r6, r2]
	mov r2, #54
	ldrsh r1, [r6, r2]
	lsl r5, r5, #16
	asr r5, r5, #16
	lsl r4, r4, #16
	asr r4, r4, #16
	add r2, r5, #0
	add r3, r4, #0
	bl 0x08003F54
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r6, #0
	bl 0x080040C4
	mov r1, #50
	ldrsh r0, [r6, r1]
	mov r2, #54
	ldrsh r1, [r6, r2]
	add r2, r5, #0
	add r3, r4, #0
	bl 0x08003F54
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r6, #0
	bl 0x080040C4
	add r0, r6, #0
	bl sub_0803CC20
	ldr r3, [r6, #84]
	add r0, r3, #0
	add r0, r0, #42
	ldrb r4, [r0]
	lsl r4, r4, #3
	mov r5, #50
	ldrsh r0, [r6, r5]
	mov r2, #54
	ldrsh r1, [r6, r2]
	mov r5, #50
	ldrsh r2, [r3, r5]
	mov r5, #54
	ldrsh r3, [r3, r5]
	bl 0x08003F54
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r4, r0
	bne _08025DAC
	mov r0, #3
	strb r0, [r6, #20]
	mov r0, #224
	lsl r0, r0, #3
	str r0, [r6, #12]
	ldr r0, [r6, #84]
	add r0, r0, #42
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r0, r0, #8
	mov r1, #24
	and r0, r0, r1
	add r1, r6, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r2, [r6, #84]
	ldrb r1, [r2, #24]
	mov r0, #2
	orr r0, r0, r1
	strb r0, [r2, #24]
	mov r0, #97
	bl 0x08003DFC
_08025DAC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08025DB4:
	.4byte gUnknown_0813C5D4
	THUMB_FUNC_END sub_08025CEC

