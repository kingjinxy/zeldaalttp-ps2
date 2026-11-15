	THUMB_FUNC_START sub_080FC204
sub_080FC204: @ 0x080FC204
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080FC2E4  @ =gUnknown_02010994
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #3
	ldr r4, _080FC2E8  @ =gRam
	ldr r0, _080FC2EC  @ =gUnknown_0817A6E8
	mov r8, r0
	ldr r2, _080FC2F0  @ =0x00001052
	add r0, r4, r2
	add r5, r6, r0
	ldr r7, _080FC2F4  @ =gUnknown_0817A708
	mov r12, r7
	mov r0, #31
	mov r9, r0
_080FC22E:
	lsl r2, r1, #24
	asr r2, r2, #24
	ldr r1, _080FC2F8  @ =gUnknown_02010990
	add r3, r2, r1
	ldrb r0, [r5]
	mov r7, r12
	add r1, r2, r7
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, r9
	and r0, r0, r1
	add r0, r0, r8
	ldrb r0, [r0]
	strb r0, [r3]
	sub r2, r2, #1
	lsl r2, r2, #24
	lsr r1, r2, #24
	cmp r2, #0
	bge _080FC22E
	mov r1, #1
	ldr r2, _080FC2FC  @ =0x00001092
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FC264
	mov r1, #0
_080FC264:
	ldr r7, _080FC300  @ =0x00000996
	add r0, r4, r7
	ldrb r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	bne _080FC2BA
	ldr r1, _080FC304  @ =0x00000FB2
	add r0, r4, r1
	add r3, r6, r0
	ldrb r0, [r3]
	mov r2, #1
	and r2, r2, r0
	ldr r5, _080FC308  @ =gUnknown_020109B9
	ldr r0, _080FC30C  @ =gUnknown_0817A770
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r7, [r5]
	add r0, r0, r7
	strb r0, [r5]
	ldr r1, _080FC310  @ =gUnknown_0822A938
	add r1, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080FC29E
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080FC29E:
	mov r2, #0
	ldrb r1, [r5]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080FC2AC
	mov r2, #255
_080FC2AC:
	ldr r0, _080FC314  @ =gUnknown_020109B6
	ldrb r1, [r5]
	lsl r2, r2, #8
	orr r1, r1, r2
	ldrh r2, [r0]
	add r1, r1, r2
	strh r1, [r0]
_080FC2BA:
	ldr r7, _080FC2FC  @ =0x00001092
	add r0, r4, r7
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080FC368
	ldr r5, _080FC308  @ =gUnknown_020109B9
	ldrb r0, [r5]
	cmp r0, #0
	bne _080FC2D6
	add r0, r6, #0
	mov r1, #82
	bl sub_080CF140
_080FC2D6:
	ldrb r0, [r7]
	cmp r0, #2
	bne _080FC318
	add r0, r6, #0
	bl sub_080FC380
	b _080FC368
_080FC2E4:
	.4byte gUnknown_02010994
_080FC2E8:
	.4byte gRam
_080FC2EC:
	.4byte gUnknown_0817A6E8
_080FC2F0:
	.4byte 0x00001052
_080FC2F4:
	.4byte gUnknown_0817A708
_080FC2F8:
	.4byte gUnknown_02010990
_080FC2FC:
	.4byte 0x00001092
_080FC300:
	.4byte 0x00000996
_080FC304:
	.4byte 0x00000FB2
_080FC308:
	.4byte gUnknown_020109B9
_080FC30C:
	.4byte gUnknown_0817A770
_080FC310:
	.4byte gUnknown_0822A938
_080FC314:
	.4byte gUnknown_020109B6
_080FC318:
	cmp r0, #3
	bne _080FC324
	add r0, r6, #0
	bl sub_080FD108
	b _080FC368
_080FC324:
	ldr r1, _080FC374  @ =0x000010B2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r5]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _080FC368
	ldr r2, _080FC378  @ =0x00001082
	add r4, r4, r2
	add r4, r6, r4
	ldr r0, _080FC37C  @ =gUnknown_020109B6
	ldrh r0, [r0]
	lsr r0, r0, #8
	mov r5, #1
	mov r1, #1
	and r0, r0, r1
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C36D8
	eor r0, r0, r5
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r4, [r4]
	cmp r0, r4
	bne _080FC368
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	add r0, r6, #0
	mov r1, #44
	bl sub_080CF140
_080FC368:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FC374:
	.4byte 0x000010B2
_080FC378:
	.4byte 0x00001082
_080FC37C:
	.4byte gUnknown_020109B6
	THUMB_FUNC_END sub_080FC204

