	THUMB_FUNC_START sub_080EE7D4
sub_080EE7D4: @ 0x080EE7D4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r10, r5
	ldr r6, _080EE87C  @ =gRam
	ldr r1, _080EE880  @ =0x00000F52
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _080EE7F4
	b _080EE9BC
_080EE7F4:
	add r0, r5, #0
	bl sub_080EF024
	ldr r2, _080EE884  @ =0x000010D2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EE820
	ldr r3, _080EE888  @ =0x00000FA2
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r7, _080EE88C  @ =0x00000AA8
	add r2, r6, r7
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #8
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
_080EE820:
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EE82E
	b _080EEA22
_080EE82E:
	ldr r7, _080EE890  @ =0x00000F92
	add r2, r6, r7
	add r2, r5, r2
	ldr r3, _080EE894  @ =gUnknown_08178AA8
	ldr r1, _080EE898  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080EE89C  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EE8A4
	add r0, r5, #0
	bl Sprite3_Move
	ldr r3, _080EE8A0  @ =0x00000F22
	add r0, r6, r3
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #64
	bne _080EE868
	b _080EEA22
_080EE868:
	add r0, r0, #1
	strb r0, [r1]
	sub r7, r7, #128
	add r1, r6, r7
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	b _080EEA22
	.byte 0x00
	.byte 0x00
_080EE87C:
	.4byte gRam
_080EE880:
	.4byte 0x00000F52
_080EE884:
	.4byte 0x000010D2
_080EE888:
	.4byte 0x00000FA2
_080EE88C:
	.4byte 0x00000AA8
_080EE890:
	.4byte 0x00000F92
_080EE894:
	.4byte gUnknown_08178AA8
_080EE898:
	.4byte 0x00000996
_080EE89C:
	.4byte 0x00000FC2
_080EE8A0:
	.4byte 0x00000F22
_080EE8A4:
	cmp r0, #207
	bhi _080EE91A
	ldr r1, _080EE984  @ =0x00001082
	add r0, r6, r1
	add r2, r5, r0
	ldrb r0, [r2]
	mov r3, #1
	mov r8, r3
	mov r4, r8
	and r4, r4, r0
	ldr r7, _080EE988  @ =0x00000F12
	add r1, r6, r7
	add r1, r5, r1
	ldr r3, _080EE98C  @ =gUnknown_08178AA4
	add r0, r4, r3
	ldrb r0, [r0]
	ldrb r7, [r1]
	add r0, r0, r7
	strb r0, [r1]
	ldr r1, _080EE990  @ =gUnknown_08178AAE
	add r1, r4, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080EE8DE
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080EE8DE:
	ldr r1, _080EE994  @ =0x00000FB2
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	mov r4, r8
	and r4, r4, r0
	ldr r2, _080EE998  @ =0x00000F22
	add r0, r6, r2
	add r6, r5, r0
	add r0, r4, r3
	ldrb r0, [r0]
	ldrb r3, [r6]
	add r0, r0, r3
	strb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EE908
	add r0, r5, #0
	mov r1, #100
	bl sub_080CF140
_080EE908:
	ldr r0, _080EE99C  @ =gUnknown_08178AAC
	add r0, r4, r0
	ldrb r1, [r6]
	ldrb r0, [r0]
	cmp r1, r0
	bne _080EE91A
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
_080EE91A:
	ldr r4, _080EE9A0  @ =gRam
	ldr r7, _080EE9A4  @ =0x00000968
	add r1, r4, r7
	mov r0, #120
	strb r0, [r1]
	ldr r0, _080EE9A8  @ =0x0000096C
	add r1, r4, r0
	mov r0, #80
	strb r0, [r1]
	ldr r1, _080EE9AC  @ =0x000016C5
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080EE9B0  @ =0x00000969
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080EE9B4  @ =0x000016C1
	add r0, r4, r3
	ldrb r1, [r0]
	add r7, r7, #5
	add r0, r4, r7
	strb r1, [r0]
	mov r0, r10
	mov r1, #5
	bl sub_080C2DCC
	ldr r0, _080EE998  @ =0x00000F22
	add r6, r4, r0
	add r6, r6, r10
	ldrb r1, [r6]
	mov r9, r1
	ldr r2, _080EE9B8  @ =0x00000961
	add r0, r4, r2
	ldrb r0, [r0]
	add r0, r0, r9
	strb r0, [r6]
	ldr r3, _080EE988  @ =0x00000F12
	add r5, r4, r3
	add r5, r5, r10
	ldrb r7, [r5]
	mov r8, r7
	mov r0, #150
	lsl r0, r0, #4
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, r8
	strb r0, [r5]
	mov r0, r10
	bl Sprite3_Move
	strb r7, [r5]
	mov r1, r9
	strb r1, [r6]
	b _080EEA22
_080EE984:
	.4byte 0x00001082
_080EE988:
	.4byte 0x00000F12
_080EE98C:
	.4byte gUnknown_08178AA4
_080EE990:
	.4byte gUnknown_08178AAE
_080EE994:
	.4byte 0x00000FB2
_080EE998:
	.4byte 0x00000F22
_080EE99C:
	.4byte gUnknown_08178AAC
_080EE9A0:
	.4byte gRam
_080EE9A4:
	.4byte 0x00000968
_080EE9A8:
	.4byte 0x0000096C
_080EE9AC:
	.4byte 0x000016C5
_080EE9B0:
	.4byte 0x00000969
_080EE9B4:
	.4byte 0x000016C1
_080EE9B8:
	.4byte 0x00000961
_080EE9BC:
	add r0, r5, #0
	bl sub_080EF050
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EEA22
	add r0, r5, #0
	bl Sprite3_MoveVert
	ldr r2, _080EEA30  @ =0x00001052
	add r0, r6, r2
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #31
	and r1, r1, r0
	cmp r1, #0
	bne _080EEA22
	ldr r3, _080EEA34  @ =0x00000F12
	add r0, r6, r3
	add r4, r5, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #252
	bne _080EEA08
	add r0, r5, #0
	bl sub_08100840
	add r0, r5, #0
	bl sub_08100840
_080EEA08:
	ldrb r0, [r4]
	cmp r0, #251
	bne _080EEA22
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	ldr r7, _080EEA38  @ =0x00000FC2
	add r0, r6, r7
	add r0, r0, r10
	mov r1, #255
	strb r1, [r0]
	mov r0, #252
	strb r0, [r4]
_080EEA22:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080EEA30:
	.4byte 0x00001052
_080EEA34:
	.4byte 0x00000F12
_080EEA38:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080EE7D4

