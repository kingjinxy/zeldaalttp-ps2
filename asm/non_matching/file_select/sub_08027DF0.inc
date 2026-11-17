	THUMB_FUNC_START sub_08027DF0
sub_08027DF0: @ 0x08027DF0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	add r4, r1, #0
	ldrh r0, [r5, #50]
	ldrh r1, [r4, #50]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #32
	bls _08027E0C
	b _08027F34
_08027E0C:
	ldrh r0, [r5, #54]
	ldrh r1, [r4, #54]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #32
	bls _08027E1E
	b _08027F34
_08027E1E:
	ldrb r1, [r4, #10]
	add r0, r1, #0
	add r0, r0, #120
	add r7, r5, r0
	ldr r0, _08027E84  @ =gUnknown_08137B10
	mov r8, r0
	lsl r1, r1, #2
	add r1, r1, r8
	add r6, r5, #0
	add r6, r6, #125
	ldrb r2, [r6]
	ldr r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _08027E88
	add r0, r5, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08027F34
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803CECC
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r2, r2, #4
	mov r0, #24
	and r2, r2, r0
	mov r1, #16
	add r0, r2, #0
	eor r0, r0, r1
	lsl r0, r0, #24
	add r1, r4, #0
	add r1, r1, #42
	lsr r0, r0, #26
	ldrb r1, [r1]
	cmp r0, r1
	bne _08027F34
	strb r2, [r7]
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	ldrb r1, [r6]
	orr r0, r0, r1
	strb r0, [r6]
	b _08027ECC
	.byte 0x00
	.byte 0x00
_08027E84:
	.4byte gUnknown_08137B10
_08027E88:
	add r0, r5, #0
	add r0, r0, #41
	add r1, r5, #0
	add r1, r1, #124
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _08027ECC
	ldrb r0, [r7]
	add r0, r0, #2
	mov r1, #30
	and r0, r0, r1
	strb r0, [r7]
	ldrb r0, [r7]
	add r0, r0, #2
	mov r1, #24
	and r0, r0, r1
	mov r1, #16
	eor r0, r0, r1
	asr r0, r0, #2
	add r1, r4, #0
	add r1, r1, #42
	strb r0, [r1]
	cmp r0, #6
	bne _08027EC2
	ldrb r0, [r4, #28]
	mov r1, #4
	orr r0, r0, r1
	b _08027ECA
_08027EC2:
	ldrb r1, [r4, #28]
	mov r0, #5
	neg r0, r0
	and r0, r0, r1
_08027ECA:
	strb r0, [r4, #28]
_08027ECC:
	ldr r2, _08027F18  @ =gUnknown_0813CE38
	ldrb r1, [r7]
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r3, [r5, #50]
	add r0, r0, r3
	lsl r0, r0, #16
	add r1, r1, #1
	add r1, r1, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r5, #54]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r7, r0, #16
	asr r0, r0, #16
	lsr r6, r1, #16
	asr r1, r1, #16
	add r2, r5, #0
	add r2, r2, #80
	ldrh r2, [r2]
	bl sub_080093AC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #15
	beq _08027F20
	strh r7, [r4, #50]
	strh r6, [r4, #54]
	ldr r0, _08027F1C  @ =gUnknown_08137B10
	ldrb r1, [r4, #10]
	lsl r1, r1, #2
	add r1, r1, r0
	ldrb r0, [r1]
	b _08027F36
_08027F18:
	.4byte gUnknown_0813CE38
_08027F1C:
	.4byte gUnknown_08137B10
_08027F20:
	ldr r2, _08027F40  @ =gUnknown_03006A30
	ldrb r0, [r4, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r2
	ldrb r2, [r1, #15]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1, #15]
_08027F34:
	mov r0, #0
_08027F36:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
_08027F40:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08027DF0

