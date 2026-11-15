	THUMB_FUNC_START sub_0811C3C4
sub_0811C3C4: @ 0x0811C3C4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811C3E6
	b _0811C638
_0811C3E6:
	ldr r1, _0811C424  @ =gRam
	mov r2, #182
	lsl r2, r2, #5
	add r0, r1, r2
	ldrh r0, [r0]
	add r3, r0, #0
	add r3, r3, #8
	mov r5, #16
	neg r5, r5
	add r0, r5, #0
	and r3, r3, r0
	mov r7, #150
	lsl r7, r7, #4
	add r6, r1, r7
	strh r3, [r6]
	ldr r0, _0811C428  @ =gUnknown_0822A950
	ldr r5, _0811C42C  @ =gUnknown_0822A940
	sub r0, r0, r5
	sub r4, r0, #2
	mov r9, r1
	cmp r4, #0
	bge _0811C414
	b _0811C514
_0811C414:
	asr r2, r4, #31
	sub r0, r4, r2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	lsl r1, r3, #16
	asr r1, r1, #16
	b _0811C444
_0811C424:
	.4byte gRam
_0811C428:
	.4byte gUnknown_0822A950
_0811C42C:
	.4byte gUnknown_0822A940
_0811C430:
	sub r4, r4, #2
	cmp r4, #0
	blt _0811C514
	asr r2, r4, #31
	sub r0, r4, r2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r5
	mov r7, #0
	ldrsh r1, [r6, r7]
_0811C444:
	mov r3, #0
	ldrsh r0, [r0, r3]
	add r3, r2, #0
	cmp r1, r0
	bne _0811C430
	cmp r4, #0
	blt _0811C514
	ldr r2, _0811C4C4  @ =gUnknown_0822A9C8
	sub r1, r4, r3
	asr r1, r1, #1
	add r0, r1, #1
	add r0, r0, r2
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	strb r0, [r3]
	add r1, r1, r2
	ldrb r4, [r1]
	mov r0, #0
	ldrsb r0, [r3, r0]
	cmp r4, r0
	beq _0811C514
	ldr r5, _0811C4C8  @ =gUnknown_0822A950
	mov r10, r5
	ldr r6, _0811C4CC  @ =0x000016C4
	add r6, r6, r9
	ldr r1, _0811C4D0  @ =gUnknown_0822A96A
	ldr r0, _0811C4D4  @ =gUnknown_0822A950
	sub r1, r1, r0
	mov r8, r1
	mov r5, sp
	ldr r7, _0811C4D8  @ =0x00000E15
	add r7, r7, r9
	mov r12, r7
_0811C48A:
	lsr r0, r4, #31
	add r0, r4, r0
	asr r0, r0, #1
	lsl r0, r0, #1
	mov r1, r10
	add r2, r0, r1
	mov r7, #0
	ldrsh r1, [r2, r7]
	mov r7, #0
	ldrsh r0, [r6, r7]
	cmp r1, r0
	bge _0811C4F8
	add r0, r1, #0
	add r0, r0, #15
	mov r2, #0
	ldrsh r1, [r6, r2]
	cmp r0, r1
	blt _0811C4F8
	cmp r4, r8
	bne _0811C4E0
	ldr r3, _0811C4DC  @ =gUnknown_03003A34
	ldrb r1, [r3]
	cmp r1, #0
	bne _0811C502
	ldrb r0, [r5]
	add r0, r0, r12
	strb r1, [r0]
	b _0811C638
	.byte 0x00
	.byte 0x00
_0811C4C4:
	.4byte gUnknown_0822A9C8
_0811C4C8:
	.4byte gUnknown_0822A950
_0811C4CC:
	.4byte 0x000016C4
_0811C4D0:
	.4byte gUnknown_0822A96A
_0811C4D4:
	.4byte gUnknown_0822A950
_0811C4D8:
	.4byte 0x00000E15
_0811C4DC:
	.4byte gUnknown_03003A34
_0811C4E0:
	ldr r7, _0811C4F4  @ =gUnknown_03003A34
	ldrb r0, [r7]
	cmp r0, #0
	beq _0811C502
	ldrb r0, [r5]
	add r0, r0, r12
	mov r1, #0
	strb r1, [r0]
	b _0811C638
	.byte 0x00
	.byte 0x00
_0811C4F4:
	.4byte gUnknown_03003A34
_0811C4F8:
	add r4, r4, #2
	mov r0, #0
	ldrsb r0, [r3, r0]
	cmp r4, r0
	bne _0811C48A
_0811C502:
	mov r3, r9
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r4, r0
	bne _0811C528
_0811C514:
	mov r0, sp
	ldr r1, _0811C524  @ =0x00000E15
	add r1, r1, r9
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
	b _0811C638
_0811C524:
	.4byte 0x00000E15
_0811C528:
	ldr r0, _0811C564  @ =gUnknown_0822A9AA
	lsr r1, r4, #31
	add r1, r4, r1
	asr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldr r5, _0811C568  @ =0x00000C0A
	add r2, r3, r5
	strh r0, [r2]
	sub r0, r0, #128
	ldr r7, _0811C56C  @ =0x00001732
	add r2, r3, r7
	strb r0, [r2]
	lsr r0, r0, #8
	ldr r5, _0811C570  @ =0x00001733
	add r2, r3, r5
	strb r0, [r2]
	ldr r0, _0811C574  @ =gUnknown_0817F8E4
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r7, _0811C578  @ =0x00000C04
	add r0, r3, r7
	strh r1, [r0]
	ldrh r0, [r0]
	cmp r0, #28
	beq _0811C57C
	cmp r0, #44
	beq _0811C58E
	b _0811C598
_0811C564:
	.4byte gUnknown_0822A9AA
_0811C568:
	.4byte 0x00000C0A
_0811C56C:
	.4byte 0x00001732
_0811C570:
	.4byte 0x00001733
_0811C574:
	.4byte gUnknown_0817F8E4
_0811C578:
	.4byte 0x00000C04
_0811C57C:
	ldr r0, _0811C648  @ =0x000009C6
	add r0, r0, r9
	ldrh r1, [r0]
	ldr r0, _0811C64C  @ =gUnknown_02002280
	add r1, r1, r0
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
_0811C58E:
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #123
	bl sub_080C19F8
_0811C598:
	ldr r5, _0811C650  @ =gRam
	mov r1, sp
	ldr r2, _0811C654  @ =0x0000184D
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r3, _0811C658  @ =0x00001732
	add r1, r5, r3
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, sp
	ldr r7, _0811C65C  @ =0x00001849
	add r0, r5, r7
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r2, _0811C660  @ =0x00001733
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	bl sub_08074354
	mov r1, #255
	ldr r0, _0811C664  @ =gUnknown_0822A96E
	and r4, r4, r1
	asr r2, r4, #1
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r3, r5, r7
	sub r0, r1, #2
	strh r0, [r3]
	sub r1, r1, #18
	ldr r0, _0811C668  @ =0x00000968
	add r4, r5, r0
	strh r1, [r4]
	ldr r0, _0811C66C  @ =gUnknown_0822A98C
	add r2, r2, r0
	ldrh r1, [r2]
	ldr r2, _0811C670  @ =0x00000964
	add r0, r5, r2
	strh r1, [r0]
	mov r3, #164
	lsl r3, r3, #4
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #123
	beq _0811C600
	mov r0, #58
	bl Sound_SetSfxPanWithPlayerCoords
_0811C600:
	ldr r7, _0811C674  @ =0x000016FA
	add r1, r5, r7
	mov r0, #4
	strb r0, [r1]
	ldr r0, _0811C678  @ =0x0000187F
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	mov r1, sp
	ldr r2, _0811C67C  @ =0x0000181D
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r4]
	strb r1, [r0]
	mov r1, sp
	ldr r3, _0811C680  @ =0x00001822
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r7, _0811C684  @ =0x00000969
	add r1, r5, r7
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_0811C638:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0811C648:
	.4byte 0x000009C6
_0811C64C:
	.4byte gUnknown_02002280
_0811C650:
	.4byte gRam
_0811C654:
	.4byte 0x0000184D
_0811C658:
	.4byte 0x00001732
_0811C65C:
	.4byte 0x00001849
_0811C660:
	.4byte 0x00001733
_0811C664:
	.4byte gUnknown_0822A96E
_0811C668:
	.4byte 0x00000968
_0811C66C:
	.4byte gUnknown_0822A98C
_0811C670:
	.4byte 0x00000964
_0811C674:
	.4byte 0x000016FA
_0811C678:
	.4byte 0x0000187F
_0811C67C:
	.4byte 0x0000181D
_0811C680:
	.4byte 0x00001822
_0811C684:
	.4byte 0x00000969
	THUMB_FUNC_END sub_0811C3C4

