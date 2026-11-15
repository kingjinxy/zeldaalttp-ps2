	THUMB_FUNC_START sub_08086218
sub_08086218: @ 0x08086218
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r2, _080863FC  @ =gRam
	ldr r1, _08086400  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	add r6, r2, #0
	cmp r0, #0
	bne _08086232
	b _0808649C
_08086232:
	ldr r2, _08086404  @ =0x000016EA
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #4
	beq _0808623E
	b _0808649C
_0808623E:
	ldr r3, _08086408  @ =0x000016F6
	add r0, r6, r3
	ldrb r0, [r0]
	add r1, r0, #0
	cmp r1, #127
	ble _08086254
	ldr r4, _0808640C  @ =0xFFFFFF00
	add r0, r4, #0
	orr r1, r1, r0
	lsl r0, r1, #16
	lsr r0, r0, #16
_08086254:
	mov r2, #182
	lsl r2, r2, #5
	add r1, r6, r2
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r1]
	add r0, r0, r1
	mov r3, #252
	lsl r3, r3, #1
	add r1, r3, #0
	and r0, r0, r1
	lsl r0, r0, #3
	mov r4, #150
	lsl r4, r4, #4
	add r2, r6, r4
	strh r0, [r2]
	ldr r1, _08086410  @ =0x000016F7
	add r0, r6, r1
	ldrb r0, [r0]
	add r1, r0, #0
	cmp r1, #127
	ble _0808628A
	ldr r3, _0808640C  @ =0xFFFFFF00
	add r0, r3, #0
	orr r1, r1, r0
	lsl r0, r1, #16
	lsr r0, r0, #16
_0808628A:
	lsl r0, r0, #16
	asr r0, r0, #16
	ldr r4, _08086414  @ =0x000016C4
	add r1, r6, r4
	mov r3, #0
	ldrsh r1, [r1, r3]
	add r0, r0, r1
	mov r1, #252
	lsl r1, r1, #1
	and r0, r0, r1
	asr r5, r0, #3
	mov r4, #0
	ldrsh r0, [r2, r4]
	orr r5, r5, r0
	mov r4, #65
	ldr r1, _08086418  @ =gUnknown_0200CBA0
	add r0, r5, r1
	ldrb r0, [r0]
	mov r7, #252
	add r3, r7, #0
	and r3, r3, r0
	cmp r3, #108
	beq _08086310
	mov r2, #240
	and r3, r3, r2
	cmp r3, #240
	beq _0808630A
	add r5, r5, #1
	mov r4, #64
	add r0, r5, r1
	ldrb r0, [r0]
	add r3, r7, #0
	and r3, r3, r0
	cmp r3, #108
	beq _08086310
	add r3, r2, #0
	and r3, r3, r0
	cmp r3, #240
	beq _0808630A
	add r5, r5, #63
	mov r4, #1
	add r0, r5, r1
	ldrb r0, [r0]
	add r3, r7, #0
	and r3, r3, r0
	cmp r3, #108
	beq _08086310
	add r3, r2, #0
	and r3, r3, r0
	cmp r3, #240
	beq _0808630A
	add r5, r5, #1
	mov r4, #0
	add r0, r5, r1
	ldrb r0, [r0]
	add r3, r7, #0
	and r3, r3, r0
	cmp r3, #108
	beq _08086310
	add r3, r2, #0
	and r3, r3, r0
	cmp r3, #240
	beq _0808630A
	b _0808649C
_0808630A:
	cmp r3, #108
	beq _08086310
	b _0808642C
_08086310:
	ldr r0, _0808641C  @ =0x0000097C
	add r1, r6, r0
	strh r4, [r1]
	cmp r4, #63
	ble _08086332
	mov r0, #15
	and r4, r4, r0
	strh r4, [r1]
	sub r5, r5, #64
	ldr r1, _08086418  @ =gUnknown_0200CBA0
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #252
	and r0, r0, r1
	cmp r0, #108
	beq _08086332
	add r5, r5, #64
_08086332:
	ldr r2, _0808641C  @ =0x0000097C
	add r0, r6, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #0
	beq _08086350
	sub r5, r5, #1
	ldr r4, _08086418  @ =gUnknown_0200CBA0
	add r0, r5, r4
	ldrb r1, [r0]
	mov r0, #252
	and r0, r0, r1
	cmp r0, #108
	beq _08086350
	add r5, r5, #1
_08086350:
	add r0, r5, #0
	sub r0, r0, #65
	lsl r0, r0, #1
	mov r1, #151
	lsl r1, r1, #4
	add r2, r6, r1
	strh r0, [r2]
	ldr r3, _08086418  @ =gUnknown_0200CBA0
	add r0, r5, r3
	ldrb r3, [r0]
	mov r1, #2
	strb r1, [r0]
	ldr r4, _08086420  @ =gUnknown_0200CBA1
	add r0, r5, r4
	strb r1, [r0]
	add r4, r4, #63
	add r0, r5, r4
	strb r1, [r0]
	add r4, r4, #1
	add r0, r5, r4
	strb r1, [r0]
	ldr r1, _08086424  @ =gUnknown_08153540
	mov r0, #3
	and r3, r3, r0
	lsl r0, r3, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r0, _0808641C  @ =0x0000097C
	add r1, r6, r0
	mov r0, #4
	strh r0, [r1]
	mov r3, #0
	ldrsh r6, [r2, r3]
	ldr r7, _08086428  @ =gUnknown_02018000
	mov r8, r1
_08086396:
	add r0, r6, #0
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r0, r6, #0
	add r0, r0, #128
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r1, #128
	lsl r1, r1, #1
	add r0, r6, r1
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r2, #192
	lsl r2, r2, #1
	add r0, r6, r2
	bl sub_08080380
	asr r5, r0, #1
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r6, r6, #2
	mov r3, r8
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08086396
	b _08086490
	.byte 0x00
	.byte 0x00
_080863FC:
	.4byte gRam
_08086400:
	.4byte 0x000016E8
_08086404:
	.4byte 0x000016EA
_08086408:
	.4byte 0x000016F6
_0808640C:
	.4byte 0xFFFFFF00
_08086410:
	.4byte 0x000016F7
_08086414:
	.4byte 0x000016C4
_08086418:
	.4byte gUnknown_0200CBA0
_0808641C:
	.4byte 0x0000097C
_08086420:
	.4byte gUnknown_0200CBA1
_08086424:
	.4byte gUnknown_08153540
_08086428:
	.4byte gUnknown_02018000
_0808642C:
	ldr r4, _080864A8  @ =gUnknown_0200CBA0
	add r0, r5, r4
	ldrb r0, [r0]
	mov r4, #15
	and r4, r4, r0
	mov r1, #192
	lsl r1, r1, #4
	add r0, r6, r1
	strh r5, [r0]
	lsl r5, r4, #1
	ldr r2, _080864AC  @ =0x000018B0
	add r0, r6, r2
	add r0, r5, r0
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	cmp r0, #50
	bne _0808649C
	ldr r3, _080864B0  @ =0x00000504
	add r1, r6, r3
	mov r0, #123
	bl sub_0812A324
	ldr r0, _080864B4  @ =0x00000BFE
	add r3, r6, r0
	ldr r0, _080864B8  @ =gUnknown_081676B2
	add r0, r5, r0
	ldrh r1, [r3]
	ldrh r2, [r0]
	orr r1, r1, r2
	strh r1, [r3]
	ldr r3, _080864BC  @ =0x00000AA6
	add r1, r6, r3
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
	ldr r0, _080864C0  @ =0x00000C04
	add r1, r6, r0
	mov r0, #0
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08086140
	ldr r1, _080864C4  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	bl sub_080835C8
	bl sub_08085978
_08086490:
	bl sub_08089F74
	ldr r1, _080864C8  @ =gUnknown_03002734
	mov r0, #114
	bl sub_0812A324
_0808649C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080864A8:
	.4byte gUnknown_0200CBA0
_080864AC:
	.4byte 0x000018B0
_080864B0:
	.4byte 0x00000504
_080864B4:
	.4byte 0x00000BFE
_080864B8:
	.4byte gUnknown_081676B2
_080864BC:
	.4byte 0x00000AA6
_080864C0:
	.4byte 0x00000C04
_080864C4:
	.4byte 0x00000B08
_080864C8:
	.4byte gUnknown_03002734
	THUMB_FUNC_END sub_08086218

