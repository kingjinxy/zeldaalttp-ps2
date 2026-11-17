	THUMB_FUNC_START sub_08020A0C
sub_08020A0C: @ 0x08020A0C
	push {r4-r7,lr}
	add r4, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #27
	cmp r1, #1
	beq _08020A48
	cmp r1, #1
	bgt _08020A22
	cmp r1, #0
	beq _08020A2C
	b _08020A92
_08020A22:
	cmp r1, #2
	beq _08020A52
	cmp r1, #3
	beq _08020A74
	b _08020A92
_08020A2C:
	ldr r3, [r4, #72]
	ldrb r2, [r3, #4]
	ldrh r1, [r4, #50]
	add r0, r1, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r12, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r7, r1, #16
	ldrb r1, [r3, #5]
	ldrh r0, [r4, #54]
	sub r0, r0, r1
	b _08020A6C
_08020A48:
	ldr r2, [r4, #72]
	ldrb r1, [r2, #2]
	ldrh r0, [r4, #50]
	add r0, r0, r1
	b _08020A7C
_08020A52:
	ldr r3, [r4, #72]
	ldrb r2, [r3, #4]
	ldrh r1, [r4, #50]
	add r0, r1, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r12, r0
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r7, r1, #16
	ldrb r1, [r3, #5]
	ldrh r0, [r4, #54]
	add r0, r0, r1
_08020A6C:
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r3, r5, #0
	b _08020A92
_08020A74:
	ldr r2, [r4, #72]
	ldrb r1, [r2, #2]
	ldrh r0, [r4, #50]
	sub r0, r0, r1
_08020A7C:
	lsl r0, r0, #16
	lsr r7, r0, #16
	mov r12, r7
	ldrb r2, [r2, #3]
	ldrh r1, [r4, #54]
	sub r0, r1, r2
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r5, r1, #16
_08020A92:
	ldr r6, _08020ADC  @ =gUnknown_03000450
	ldrh r0, [r6, #24]
	mov r1, r12
	sub r0, r1, r0
	asr r0, r0, #4
	ldrh r1, [r6, #26]
	sub r1, r3, r1
	asr r1, r1, #4
	lsl r1, r1, #6
	orr r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r4, r4, #80
	ldrh r1, [r4]
	bl sub_080093C8
	lsl r0, r0, #24
	cmp r0, #0
	bne _08020AD8
	ldrh r0, [r6, #24]
	sub r0, r7, r0
	asr r0, r0, #4
	ldrh r1, [r6, #26]
	sub r1, r5, r1
	asr r1, r1, #4
	lsl r1, r1, #6
	orr r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r4]
	bl sub_080093C8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08020AE0
_08020AD8:
	mov r0, #0
	b _08020AE2
_08020ADC:
	.4byte gUnknown_03000450
_08020AE0:
	mov r0, #1
_08020AE2:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08020A0C

