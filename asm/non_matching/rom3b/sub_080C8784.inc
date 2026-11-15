	THUMB_FUNC_START sub_080C8784
sub_080C8784: @ 0x080C8784
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080C87AC  @ =gRam
	ldr r1, _080C87B0  @ =0x00000FC2
	add r0, r4, r1
	add r6, r5, r0
	ldrb r1, [r6]
	add r2, r1, #0
	cmp r2, #0
	bne _080C87B8
	ldr r3, _080C87B4  @ =0x00000FA2
	add r0, r4, r3
	add r0, r5, r0
	strb r2, [r0]
	add r0, r5, #0
	bl sub_080CB9D4
	b _080C894E
_080C87AC:
	.4byte gRam
_080C87B0:
	.4byte 0x00000FC2
_080C87B4:
	.4byte 0x00000FA2
_080C87B8:
	cmp r2, #63
	bls _080C883C
	ldr r2, _080C87D0  @ =0x00001122
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #5
	bne _080C87D4
	mov r0, #63
	strb r0, [r6]
	b _080C883C
	.byte 0x00
	.byte 0x00
_080C87D0:
	.4byte 0x00001122
_080C87D4:
	mov r0, #7
	and r0, r0, r1
	ldr r3, _080C882C  @ =0x000009AD
	add r1, r4, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r2, _080C8830  @ =0x00001605
	add r1, r4, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080C87F4
	add r0, r5, #0
	mov r1, #101
	bl sub_080CF140
_080C87F4:
	add r0, r5, #0
	bl SpriteActive_Main
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C880E
	b _080C894E
_080C880E:
	ldr r3, _080C8834  @ =0x00000964
	add r1, r4, r3
	ldrh r0, [r1]
	sub r0, r0, #8
	strh r0, [r1]
	ldrb r0, [r6]
	add r0, r0, #20
	ldr r2, _080C8838  @ =0x0000096C
	add r1, r4, r2
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080EA860
	b _080C894E
	.byte 0x00
	.byte 0x00
_080C882C:
	.4byte 0x000009AD
_080C8830:
	.4byte 0x00001605
_080C8834:
	.4byte 0x00000964
_080C8838:
	.4byte 0x0000096C
_080C883C:
	ldr r6, _080C887C  @ =gRam
	ldr r3, _080C8880  @ =0x00000FC2
	add r0, r6, r3
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #61
	bne _080C8852
	add r0, r5, #0
	mov r1, #108
	bl sub_080CF0AC
_080C8852:
	ldr r1, _080C8884  @ =0x00000FF2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #38
	beq _080C8862
	cmp r0, #19
	bne _080C8890
_080C8862:
	ldr r2, _080C8888  @ =0x00000F92
	add r1, r6, r2
	add r1, r5, r1
	ldr r2, _080C888C  @ =gUnknown_08172558
	ldrb r0, [r4]
	lsr r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C8B2C
	b _080C88C0
_080C887C:
	.4byte gRam
_080C8880:
	.4byte 0x00000FC2
_080C8884:
	.4byte 0x00000FF2
_080C8888:
	.4byte 0x00000F92
_080C888C:
	.4byte gUnknown_08172558
_080C8890:
	ldr r1, _080C8958  @ =gUnknown_08172538
	ldrb r0, [r4]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r2, [r0]
	cmp r2, #11
	bhi _080C88B2
	ldr r1, _080C895C  @ =gUnknown_08172588
	ldr r3, _080C8960  @ =0x00000FB2
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r2, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
_080C88B2:
	ldr r1, _080C8964  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	add r0, r5, #0
	bl sub_080C8998
_080C88C0:
	ldr r6, _080C8968  @ =gRam
	ldr r3, _080C896C  @ =0x00000996
	add r2, r6, r3
	ldr r1, _080C8970  @ =gUnknown_08172578
	ldr r3, _080C8974  @ =0x00000FC2
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r0, r0, r1
	ldrb r1, [r2]
	ldrb r4, [r0]
	and r4, r4, r1
	ldr r1, _080C8978  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	orr r4, r4, r0
	cmp r4, #0
	bne _080C894E
	ldr r1, _080C897C  @ =gUnknown_0822A8C8
	ldr r0, _080C8980  @ =gUnknown_0822A860
	sub r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_080C7490
	ldr r2, _080C8984  @ =0x000015E2
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #32
	beq _080C8910
	ldr r3, _080C8988  @ =0x00001102
	add r0, r6, r3
	add r0, r5, r0
	strb r4, [r0]
	ldr r1, _080C898C  @ =0x00001112
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
_080C8910:
	ldr r2, _080C8990  @ =0x00000F12
	add r0, r6, r2
	add r1, r5, r0
	ldr r3, _080C8988  @ =0x00001102
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080C8928
	add r0, r0, #3
_080C8928:
	asr r0, r0, #2
	strb r0, [r1]
	ldr r1, _080C8994  @ =0x00000F22
	add r0, r6, r1
	add r1, r5, r0
	ldr r2, _080C898C  @ =0x00001112
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080C8944
	add r0, r0, #3
_080C8944:
	asr r0, r0, #2
	strb r0, [r1]
	add r0, r5, #0
	bl Sprite3_Move
_080C894E:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C8958:
	.4byte gUnknown_08172538
_080C895C:
	.4byte gUnknown_08172588
_080C8960:
	.4byte 0x00000FB2
_080C8964:
	.4byte 0x00000F92
_080C8968:
	.4byte gRam
_080C896C:
	.4byte 0x00000996
_080C8970:
	.4byte gUnknown_08172578
_080C8974:
	.4byte 0x00000FC2
_080C8978:
	.4byte 0x000009AD
_080C897C:
	.4byte gUnknown_0822A8C8
_080C8980:
	.4byte gUnknown_0822A860
_080C8984:
	.4byte 0x000015E2
_080C8988:
	.4byte 0x00001102
_080C898C:
	.4byte 0x00001112
_080C8990:
	.4byte 0x00000F12
_080C8994:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080C8784

