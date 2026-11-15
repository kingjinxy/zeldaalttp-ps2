	THUMB_FUNC_START sub_08079410
sub_08079410: @ 0x08079410
	push {r4-r7,lr}
	mov r2, #0
	ldr r5, _080794DC  @ =gRam
	mov r3, #0
	ldr r4, _080794E0  @ =gUnknown_02000C00
_0807941A:
	mov r0, #192
	lsl r0, r0, #1
	add r1, r2, r0
	asr r1, r1, #1
	lsl r1, r1, #1
	ldr r7, _080794E4  @ =gUnknown_02000800
	add r0, r1, r7
	strh r3, [r0]
	lsr r0, r2, #1
	lsl r0, r0, #1
	add r0, r0, r4
	strh r3, [r0]
	add r0, r2, #0
	add r0, r0, #128
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	strh r3, [r0]
	mov r6, #128
	lsl r6, r6, #1
	add r0, r2, r6
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	strh r3, [r0]
	add r1, r1, r4
	strh r3, [r1]
	add r0, r2, #2
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #128
	bne _0807941A
	ldr r0, _080794E8  @ =0x00000CAB
	add r1, r5, r0
	mov r0, #4
	strb r0, [r1]
	ldr r1, _080794EC  @ =0x00000CAC
	add r0, r5, r1
	mov r1, #3
	strb r1, [r0]
	ldr r2, _080794F0  @ =0x00000CAD
	add r0, r5, r2
	strb r1, [r0]
	mov r6, #203
	lsl r6, r6, #4
	add r0, r5, r6
	strb r1, [r0]
	ldr r0, _080794F4  @ =0x00000CA9
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
	sub r2, r2, #13
	add r1, r5, r2
	ldrb r0, [r1]
	strh r0, [r1]
	bl sub_08133438
	bl sub_08130030
	bl sub_081305E0
	bl sub_0813068C
	bl sub_0813076C
	bl sub_08133398
	bl sub_081331F4
	bl sub_08130384
	mov r2, #0
	mov r6, #216
	lsl r6, r6, #1
	ldr r5, _080794E0  @ =gUnknown_02000C00
	mov r4, #232
	lsl r4, r4, #1
	add r3, r7, #0
_080794B6:
	add r1, r2, r6
	asr r1, r1, #1
	lsl r1, r1, #1
	add r1, r1, r5
	add r0, r2, r4
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r1]
	add r0, r2, #2
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #16
	bne _080794B6
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080794DC:
	.4byte gRam
_080794E0:
	.4byte gUnknown_02000C00
_080794E4:
	.4byte gUnknown_02000800
_080794E8:
	.4byte 0x00000CAB
_080794EC:
	.4byte 0x00000CAC
_080794F0:
	.4byte 0x00000CAD
_080794F4:
	.4byte 0x00000CA9
	THUMB_FUNC_END sub_08079410

