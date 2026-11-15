	THUMB_FUNC_START sub_0810C7A4
sub_0810C7A4: @ 0x0810C7A4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _0810C888  @ =gUnknown_0817CD98
	add r0, r6, #0
	mov r2, #5
	bl sub_080C9480
	ldr r1, _0810C88C  @ =gRam
	ldr r2, _0810C890  @ =0x00000F92
	add r0, r1, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	mov r3, #150
	lsl r3, r3, #4
	add r2, r1, r3
	strh r0, [r2]
	mov r4, #2
	add r5, r1, #0
	mov r12, r2
	ldr r7, _0810C894  @ =0xFFFFFC00
	mov r8, r7
	mov r9, r5
	ldr r0, _0810C898  @ =gUnknown_03003E74
	mov r10, r0
_0810C7E0:
	ldr r0, _0810C898  @ =gUnknown_03003E74
	lsl r3, r4, #24
	asr r2, r3, #26
	ldrh r0, [r0]
	add r2, r2, r0
	lsl r2, r2, #3
	add r2, r2, r5
	ldr r1, _0810C89C  @ =0x00000554
	add r2, r2, r1
	ldrh r4, [r2]
	lsl r1, r4, #22
	lsr r1, r1, #22
	mov r7, r12
	ldrh r7, [r7]
	add r1, r1, r7
	ldr r7, _0810C8A0  @ =0x000003FF
	add r0, r7, #0
	and r1, r1, r0
	mov r0, r8
	and r0, r0, r4
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #128
	lsl r0, r0, #19
	add r3, r3, r0
	lsr r4, r3, #24
	asr r3, r3, #24
	cmp r3, #17
	ble _0810C7E0
	mov r1, #0
	mov r2, r9
	ldr r3, _0810C8A4  @ =0x00000F52
	add r0, r2, r3
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #4
	bls _0810C82C
	mov r1, #1
_0810C82C:
	cmp r1, #0
	beq _0810C844
	mov r7, r10
	ldrh r0, [r7]
	add r0, r0, #4
	lsl r0, r0, #3
	add r0, r0, r2
	mov r1, #170
	lsl r1, r1, #3
	add r0, r0, r1
	mov r1, #240
	strb r1, [r0]
_0810C844:
	ldr r3, _0810C8A8  @ =0x00001052
	add r0, r2, r3
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0810C870
	mov r7, r10
	ldrh r1, [r7]
	add r1, r1, #4
	lsl r1, r1, #3
	add r1, r1, r2
	ldr r0, _0810C8AC  @ =0x00000553
	add r1, r1, r0
	ldrb r2, [r1]
	mov r3, #16
	mov r0, #17
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r1]
_0810C870:
	mov r1, #0
	ldrb r0, [r4]
	cmp r0, #4
	bls _0810C87A
	mov r1, #1
_0810C87A:
	cmp r1, #0
	beq _0810C8B0
	add r0, r6, #0
	bl sub_0810C8F0
	b _0810C8DA
	.byte 0x00
	.byte 0x00
_0810C888:
	.4byte gUnknown_0817CD98
_0810C88C:
	.4byte gRam
_0810C890:
	.4byte 0x00000F92
_0810C894:
	.4byte 0xFFFFFC00
_0810C898:
	.4byte gUnknown_03003E74
_0810C89C:
	.4byte 0x00000554
_0810C8A0:
	.4byte 0x000003FF
_0810C8A4:
	.4byte 0x00000F52
_0810C8A8:
	.4byte 0x00001052
_0810C8AC:
	.4byte 0x00000553
_0810C8B0:
	mov r1, r10
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _0810C8E8  @ =0x00001142
	add r0, r0, r9
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #159
	bhi _0810C8DA
	ldr r4, _0810C8EC  @ =0x00001122
	add r4, r4, r9
	add r4, r6, r4
	ldrb r5, [r4]
	mov r0, #254
	and r0, r0, r5
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080CA59C
	strb r5, [r4]
_0810C8DA:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0810C8E8:
	.4byte 0x00001142
_0810C8EC:
	.4byte 0x00001122
	THUMB_FUNC_END sub_0810C7A4

