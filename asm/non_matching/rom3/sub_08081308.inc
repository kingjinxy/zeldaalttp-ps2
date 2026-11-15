	THUMB_FUNC_START sub_08081308
sub_08081308: @ 0x08081308
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	str r0, [sp]
	add r0, r1, #0
	ldr r4, _08081330  @ =gRam
	ldr r2, _08081334  @ =0x00000968
	add r1, r4, r2
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r1]
	bl sub_0808125C
	mov r5, #0
	ldr r6, _08081338  @ =0x00001912
	add r0, r4, r6
	b _08081494
_08081330:
	.4byte gRam
_08081334:
	.4byte 0x00000968
_08081338:
	.4byte 0x00001912
_0808133C:
	ldr r4, [sp]
	asr r3, r4, #1
	lsl r2, r5, #1
	ldr r7, _0808142C  @ =gRam
	add r0, r7, r6
	add r0, r2, r0
	ldrh r1, [r0]
	ldr r4, _08081430  @ =0x00000964
	add r0, r7, r4
	strh r1, [r0]
	mov r4, #255
	and r4, r4, r1
	lsl r0, r3, #1
	ldr r6, _08081434  @ =gUnknown_0816789C
	add r0, r0, r6
	str r2, [sp, #4]
	ldrh r0, [r0]
	cmp r4, r0
	beq _080813A2
	add r3, r3, #1
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	cmp r4, r0
	beq _080813A2
	add r3, r3, #1
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	cmp r4, r0
	beq _080813A2
	add r3, r3, #1
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	cmp r4, r0
	beq _080813A2
	add r3, r3, #1
	lsl r0, r3, #1
	add r0, r0, r6
	ldrh r0, [r0]
	cmp r4, r0
	beq _080813A2
	add r3, r3, #1
	lsl r0, r3, #1
	add r0, r0, r6
	add r7, r5, #1
	str r7, [sp, #12]
	ldrh r0, [r0]
	cmp r4, r0
	bne _08081484
_080813A2:
	ldr r0, _08081438  @ =gUnknown_081678CC
	lsl r1, r3, #1
	add r1, r1, r0
	ldrh r0, [r1]
	ldr r1, _0808143C  @ =gUnknown_03002B90
	strh r0, [r1]
	mov r3, #0
	add r5, r5, #1
	str r5, [sp, #12]
	ldr r6, _0808142C  @ =gRam
	ldr r2, _08081440  @ =0x00000BFE
	add r2, r2, r6
	mov r12, r2
	ldr r4, _08081444  @ =gUnknown_081676B2
	mov r8, r4
	ldr r7, _08081448  @ =0x000018D0
	add r4, r6, r7
	mov r0, #255
	lsl r0, r0, #8
	mov r9, r0
	ldr r1, _0808144C  @ =0x0000097C
	add r1, r1, r6
	mov r10, r1
_080813D0:
	lsl r5, r3, #1
	ldrh r7, [r4]
	mov r2, sp
	strh r7, [r2, #8]
	ldrb r1, [r4]
	ldr r2, _0808143C  @ =gUnknown_03002B90
	mov r7, #0
	ldrsh r0, [r2, r7]
	cmp r1, r0
	bne _0808147C
	mov r4, r9
	mov r0, sp
	ldrh r0, [r0, #8]
	and r4, r4, r0
	mov r0, #192
	lsl r0, r0, #6
	cmp r4, r0
	beq _08081484
	mov r0, #136
	lsl r0, r0, #7
	cmp r4, r0
	beq _08081404
	mov r0, #192
	lsl r0, r0, #5
	cmp r4, r0
	bne _08081458
_08081404:
	mov r2, r10
	mov r3, #0
	ldrsh r1, [r2, r3]
	ldr r4, _08081450  @ =0x000009DC
	add r0, r6, r4
	ldrh r0, [r0]
	cmp r1, r0
	bne _08081484
	mov r0, #0
	ldr r6, _08081454  @ =gUnknown_03002D40
	strh r0, [r6]
	mov r7, r8
	add r1, r5, r7
	mov r2, r12
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
	b _08081484
	.byte 0x00
	.byte 0x00
_0808142C:
	.4byte gRam
_08081430:
	.4byte 0x00000964
_08081434:
	.4byte gUnknown_0816789C
_08081438:
	.4byte gUnknown_081678CC
_0808143C:
	.4byte gUnknown_03002B90
_08081440:
	.4byte 0x00000BFE
_08081444:
	.4byte gUnknown_081676B2
_08081448:
	.4byte 0x000018D0
_0808144C:
	.4byte 0x0000097C
_08081450:
	.4byte 0x000009DC
_08081454:
	.4byte gUnknown_03002D40
_08081458:
	ldr r0, [sp, #4]
	add r0, r0, r8
	ldr r3, _08081478  @ =gUnknown_03003B40
	ldrh r1, [r3]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08081484
	mov r4, r8
	add r0, r5, r4
	mov r6, r12
	ldrh r1, [r6]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r6]
	b _08081484
_08081478:
	.4byte gUnknown_03003B40
_0808147C:
	add r4, r4, #2
	add r3, r3, #1
	cmp r3, #7
	ble _080813D0
_08081484:
	ldr r5, [sp, #12]
	cmp r5, #8
	beq _0808149E
	lsl r0, r5, #1
	ldr r6, _080814B0  @ =0x00001912
	ldr r7, _080814B4  @ =gRam
	add r1, r7, r6
	add r0, r0, r1
_08081494:
	ldrh r0, [r0]
	ldr r1, _080814B8  @ =0x0000FFFF
	cmp r0, r1
	beq _0808149E
	b _0808133C
_0808149E:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080814B0:
	.4byte 0x00001912
_080814B4:
	.4byte gRam
_080814B8:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08081308

