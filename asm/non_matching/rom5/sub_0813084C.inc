	THUMB_FUNC_START sub_0813084C
sub_0813084C: @ 0x0813084C
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r4, _08130944  @ =gRam
	mov r0, #202
	lsl r0, r0, #4
	add r6, r4, r0
	mov r0, #0
	strh r0, [r6]
	lsl r1, r1, #2
	ldr r3, _08130948  @ =gUnknown_0822BD1C
	add r0, r1, r3
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08130874
	ldr r7, _0813094C  @ =0x00000CAC
	add r0, r4, r7
	strb r2, [r0]
_08130874:
	add r0, r1, #1
	add r0, r0, r3
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0813088A
	ldr r7, _08130950  @ =0x00000CAD
	add r0, r4, r7
	strb r2, [r0]
_0813088A:
	add r0, r1, #2
	add r0, r0, r3
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _081308A2
	mov r2, #203
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
_081308A2:
	lsl r1, r5, #1
	ldr r3, _08130954  @ =gUnknown_0822BD98
	add r0, r1, r3
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _081308BA
	ldr r5, _08130958  @ =0x00000CA5
	add r0, r4, r5
	strb r2, [r0]
_081308BA:
	add r0, r1, #1
	add r0, r0, r3
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _081308D0
	ldr r7, _0813095C  @ =0x00000CA6
	add r0, r4, r7
	strb r1, [r0]
_081308D0:
	bl sub_0813068C
	bl sub_0813076C
	ldr r1, _08130960  @ =gUnknown_0822BB64
	mov r2, #203
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r4, _08130964  @ =gUnknown_02031800
	add r2, r0, r4
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r5, _08130968  @ =gUnknown_020008E0
	add r1, r0, r5
_081308F8:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _081308F8
	ldr r2, _0813096C  @ =gUnknown_0822BBB4
	ldr r1, _08130944  @ =gRam
	ldr r7, _08130958  @ =0x00000CA5
	add r0, r1, r7
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r4, _08130970  @ =gUnknown_02030400
	add r2, r0, r4
	mov r5, #202
	lsl r5, r5, #4
	add r1, r1, r5
	ldrh r0, [r1]
	lsl r0, r0, #1
	ldr r7, _08130974  @ =gUnknown_02000AA0
	add r1, r0, r7
_0813092C:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _0813092C
	bl sub_081300EC
	pop {r4-r7}
	pop {r0}
	bx r0
_08130944:
	.4byte gRam
_08130948:
	.4byte gUnknown_0822BD1C
_0813094C:
	.4byte 0x00000CAC
_08130950:
	.4byte 0x00000CAD
_08130954:
	.4byte gUnknown_0822BD98
_08130958:
	.4byte 0x00000CA5
_0813095C:
	.4byte 0x00000CA6
_08130960:
	.4byte gUnknown_0822BB64
_08130964:
	.4byte gUnknown_02031800
_08130968:
	.4byte gUnknown_020008E0
_0813096C:
	.4byte gUnknown_0822BBB4
_08130970:
	.4byte gUnknown_02030400
_08130974:
	.4byte gUnknown_02000AA0
	THUMB_FUNC_END sub_0813084C

