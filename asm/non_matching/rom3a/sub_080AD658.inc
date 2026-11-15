	THUMB_FUNC_START sub_080AD658
sub_080AD658: @ 0x080AD658
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	lsl r1, r1, #24
	lsr r6, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r1, sp, #4
	mov r0, #5
	strb r0, [r1]
	mov r8, r1
	ldr r4, _080AD688  @ =gUnknown_03003045
_080AD67A:
	ldrb r3, [r1]
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r2, r0
	bne _080AD68C
	mov r0, #1
	b _080AD698
_080AD688:
	.4byte gUnknown_03003045
_080AD68C:
	sub r0, r3, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AD67A
	mov r0, #0
_080AD698:
	cmp r0, #0
	bne _080AD78A
	mov r5, r8
	add r0, r6, #0
	add r1, r2, #0
	add r2, r5, #0
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080AD78A
	ldr r4, _080AD798  @ =gRam
	ldr r1, _080AD79C  @ =0x00000E29
	add r0, r4, r1
	ldrb r3, [r5]
	add r0, r0, r3
	mov r1, #16
	strb r1, [r0]
	ldr r7, _080AD7A0  @ =0x00001818
	add r0, r4, r7
	ldrb r1, [r5]
	add r0, r0, r1
	strb r2, [r0]
	ldrb r1, [r5]
	ldr r2, _080AD7A4  @ =0x00000E3D
	add r3, r4, r2
	add r1, r1, r3
	ldr r2, _080AD7A8  @ =gUnknown_0816E542
	ldr r7, _080AD7AC  @ =0x00000FB2
	add r0, r4, r7
	add r0, r0, r9
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r5]
	add r0, r0, r3
	ldrb r5, [r0]
	ldr r1, _080AD7B0  @ =0x00000EE2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r3, _080AD7B4  @ =0x00000F02
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	sub r7, r7, #224
	add r0, r4, r7
	add r0, r6, r0
	ldrb r1, [r0]
	sub r3, r3, #16
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r7, _080AD7B8  @ =0x00000958
	add r0, r4, r7
	ldrh r0, [r0]
	sub r2, r2, r0
	ldr r0, _080AD7BC  @ =0x00000964
	add r3, r4, r0
	strh r2, [r3]
	ldr r2, _080AD7C0  @ =0x00000952
	add r0, r4, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	add r7, r7, #8
	add r0, r4, r7
	strh r1, [r0]
	mov r1, sp
	ldrb r0, [r0]
	strb r0, [r1]
	add r2, r2, #15
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1, #1]
	ldrb r0, [r3]
	strb r0, [r1, #2]
	ldr r3, _080AD7C4  @ =0x00000965
	add r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r1, #3]
	ldr r1, _080AD7C8  @ =gUnknown_0816E54A
	lsr r0, r5, #1
	add r0, r0, r1
	ldrb r0, [r0]
	add r7, r7, #12
	add r1, r4, r7
	strb r0, [r1]
	mov r2, sp
	add r0, r2, r5
	ldrb r2, [r0]
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r5, #2
	cmp r2, r0
	bge _080AD766
	mov r5, #0
_080AD766:
	ldr r3, _080AD7CC  @ =0x00000DC5
	add r1, r4, r3
	mov r7, r8
	ldrb r7, [r7]
	add r1, r1, r7
	ldr r2, _080AD7D0  @ =gUnknown_0816E546
	add r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080AD7D4  @ =0x00000DD9
	add r1, r4, r0
	mov r3, r8
	ldrb r3, [r3]
	add r1, r1, r3
	add r0, r5, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080AD78A:
	add sp, sp, #8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080AD798:
	.4byte gRam
_080AD79C:
	.4byte 0x00000E29
_080AD7A0:
	.4byte 0x00001818
_080AD7A4:
	.4byte 0x00000E3D
_080AD7A8:
	.4byte gUnknown_0816E542
_080AD7AC:
	.4byte 0x00000FB2
_080AD7B0:
	.4byte 0x00000EE2
_080AD7B4:
	.4byte 0x00000F02
_080AD7B8:
	.4byte 0x00000958
_080AD7BC:
	.4byte 0x00000964
_080AD7C0:
	.4byte 0x00000952
_080AD7C4:
	.4byte 0x00000965
_080AD7C8:
	.4byte gUnknown_0816E54A
_080AD7CC:
	.4byte 0x00000DC5
_080AD7D0:
	.4byte gUnknown_0816E546
_080AD7D4:
	.4byte 0x00000DD9
	THUMB_FUNC_END sub_080AD658

