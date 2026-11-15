	THUMB_FUNC_START sub_0812740C
sub_0812740C: @ 0x0812740C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _0812749C  @ =gRam
	ldr r1, _081274A0  @ =0x00001AE8
	add r0, r4, r1
	ldrb r3, [r0]
	ldr r2, _081274A4  @ =0x00001AE9
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r3, r3, r0
	cmp r3, #15
	bls _08127430
	ldr r5, _081274A8  @ =0x0000FFFD
	add r0, r3, r5
	lsl r0, r0, #16
	lsr r3, r0, #16
_08127430:
	ldr r0, _081274AC  @ =0x00001AF8
	add r7, r4, r0
	ldr r0, [r7]
	ldr r2, _081274B0  @ =0x00001AFC
	add r1, r4, r2
	ldr r1, [r1]
	mov r5, #216
	lsl r5, r5, #5
	add r2, r4, r5
	ldr r2, [r2]
	bl sub_08129D28
	add r6, r0, #0
	ldr r0, _081274B4  @ =gTextPointer
	mov r1, #127
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	ldr r0, _081274B8  @ =0x00001AD2
	add r2, r4, r0
	mov r0, #0
	strh r0, [r2]
	ldr r3, _081274BC  @ =0x00001AD6
	add r1, r4, r3
	strh r0, [r1]
	ldr r5, _081274C0  @ =0x0000098E
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08127544
	add r5, r1, #0
	add r4, r2, #0
_08127474:
	ldr r0, [r7]
	ldrh r1, [r5]
	add r1, r6, r1
	bl sub_08129E0C
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r0, #0
	mov r2, #0
	mov r8, r2
	cmp r0, #26
	beq _081274DE
	cmp r0, #26
	bgt _081274C4
	cmp r0, #0
	beq _081274D8
	cmp r0, #10
	beq _081274D8
	b _08127532
	.byte 0x00
	.byte 0x00
_0812749C:
	.4byte gRam
_081274A0:
	.4byte 0x00001AE8
_081274A4:
	.4byte 0x00001AE9
_081274A8:
	.4byte 0x0000FFFD
_081274AC:
	.4byte 0x00001AF8
_081274B0:
	.4byte 0x00001AFC
_081274B4:
	.4byte gTextPointer
_081274B8:
	.4byte 0x00001AD2
_081274BC:
	.4byte 0x00001AD6
_081274C0:
	.4byte 0x0000098E
_081274C4:
	cmp r0, #253
	beq _081274F8
	cmp r0, #253
	bgt _081274D2
	cmp r0, #252
	beq _081274EA
	b _08127532
_081274D2:
	cmp r1, #254
	beq _08127508
	b _08127532
_081274D8:
	ldrh r0, [r5]
	add r0, r0, #1
	b _08127530
_081274DE:
	add r0, r6, #0
	bl sub_081275AC
	cmp r0, #0
	beq _08127532
	b _0812759E
_081274EA:
	ldrh r0, [r4]
	ldr r3, _081274F4  @ =gTextPointer
	add r0, r0, r3
	mov r1, #2
	b _08127510
_081274F4:
	.4byte gTextPointer
_081274F8:
	ldrh r0, [r4]
	ldr r3, _08127504  @ =gTextPointer
	add r0, r0, r3
	mov r1, #1
	b _08127510
	.byte 0x00
	.byte 0x00
_08127504:
	.4byte gTextPointer
_08127508:
	ldrh r0, [r4]
	ldr r3, _0812753C  @ =gTextPointer
	add r0, r0, r3
	mov r1, r8
_08127510:
	strb r1, [r0]
	ldr r0, [r7]
	ldrh r1, [r5]
	add r1, r6, r1
	add r1, r1, #1
	bl sub_08129E0C
	ldrh r1, [r4]
	ldr r2, _08127540  @ =gUnknown_02005481
	add r1, r1, r2
	strb r0, [r1]
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	ldrh r0, [r5]
	add r0, r0, #2
_08127530:
	strh r0, [r5]
_08127532:
	mov r3, r8
	cmp r3, #0
	beq _08127474
	b _0812759E
	.byte 0x00
	.byte 0x00
_0812753C:
	.4byte gTextPointer
_08127540:
	.4byte gUnknown_02005481
_08127544:
	add r4, r1, #0
	add r5, r2, #0
	mov r8, r7
_0812754A:
	mov r1, r8
	ldr r0, [r1]
	ldrh r1, [r4]
	add r1, r6, r1
	bl sub_08129E0C
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r1, r0, #0
	mov r7, #0
	cmp r0, #10
	beq _08127594
	cmp r0, #10
	ble _08127576
	cmp r1, #26
	bne _0812757A
	add r0, r6, #0
	bl sub_0812775C
	cmp r0, #0
	beq _0812759A
	b _0812759E
_08127576:
	cmp r0, #0
	beq _08127594
_0812757A:
	mov r2, r8
	ldr r0, [r2]
	ldrh r1, [r4]
	add r1, r6, r1
	bl sub_08129E0C
	ldrh r1, [r5]
	ldr r3, _081275A8  @ =gTextPointer
	add r1, r1, r3
	strb r0, [r1]
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
_08127594:
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
_0812759A:
	cmp r7, #0
	beq _0812754A
_0812759E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_081275A8:
	.4byte gTextPointer
	THUMB_FUNC_END sub_0812740C

