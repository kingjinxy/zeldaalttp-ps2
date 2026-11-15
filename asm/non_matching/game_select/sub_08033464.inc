	THUMB_FUNC_START sub_08033464
sub_08033464: @ 0x08033464
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r1, _080334A4  @ =gUnknown_02016D60
	ldrh r0, [r1, #6]
	ldrh r2, [r1, #4]
	add r0, r0, r2
	strh r0, [r1, #4]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #255
	bgt _08033480
	b _080335E0
_08033480:
	add r6, r1, #0
	ldr r3, _080334A8  @ =gUnknown_030004A0
	mov r8, r3
_08033486:
	ldr r4, _080334AC  @ =0xFFFFFF00
	add r0, r4, #0
	ldrh r1, [r6, #4]
	add r0, r0, r1
	strh r0, [r6, #4]
	mov r2, r8
	ldrh r0, [r2, #12]
	mov r1, #7
	and r1, r1, r0
	cmp r1, #0
	beq _080334B0
	cmp r1, #4
	bne _080334A2
	b _08033598
_080334A2:
	b _080335CE
_080334A4:
	.4byte gUnknown_02016D60
_080334A8:
	.4byte gUnknown_030004A0
_080334AC:
	.4byte 0xFFFFFF00
_080334B0:
	str r1, [sp]
	mov r3, r8
	ldrh r1, [r3, #12]
	add r1, r1, #208
	mov r0, #248
	and r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _08033500  @ =gBG0Buffer
	add r1, r1, r0
	mov r0, sp
	ldr r2, _08033504  @ =0x01000020
	bl CpuFastSet
	ldr r0, [r6, #24]
	sub r0, r0, #1
	str r0, [r6, #24]
	cmp r0, #0
	bne _08033574
	ldr r0, [r6, #20]
	cmp r0, #0
	bne _08033566
	ldr r4, _08033508  @ =gUnknown_02016D60
	mov r7, #1
_080334DE:
	ldr r0, [r4, #16]
	ldr r1, [r4, #12]
	ldr r2, [r4, #8]
	bl sub_0800F68C
	add r5, r0, #0
	lsl r0, r5, #16
	lsr r0, r0, #16
	cmp r0, #2
	beq _0803350C
	cmp r0, #7
	beq _0803352A
	cmp r5, #10
	bne _08033548
	str r7, [r4, #24]
	b _0803354C
	.byte 0x00
	.byte 0x00
_08033500:
	.4byte gBG0Buffer
_08033504:
	.4byte 0x01000020
_08033508:
	.4byte gUnknown_02016D60
_0803350C:
	ldr r1, [r4, #28]
	cmp r1, #0
	bne _08033514
	strb r7, [r4, #1]
_08033514:
	cmp r1, #4
	bne _0803351A
	strb r0, [r4, #1]
_0803351A:
	bl sub_0803361C
	ldr r1, [r4, #16]
	ldr r0, [r1]
	add r0, r0, #64
	str r0, [r1]
	str r7, [r4, #24]
	b _0803354C
_0803352A:
	ldr r2, [r4, #16]
	ldrh r1, [r2, #16]
	ldr r3, _08033544  @ =0x00000FFF
	add r0, r3, #0
	and r1, r1, r0
	ldr r0, [r4, #12]
	ldrb r0, [r0, #4]
	sub r0, r0, #1
	lsl r0, r0, #12
	orr r1, r1, r0
	strh r1, [r2, #16]
	b _0803354C
	.byte 0x00
	.byte 0x00
_08033544:
	.4byte 0x00000FFF
_08033548:
	mov r0, #2
	str r0, [r4, #24]
_0803354C:
	ldr r0, [r4, #24]
	cmp r0, #0
	beq _080334DE
	lsl r0, r5, #16
	cmp r0, #0
	bne _08033574
	mov r0, #3
	strb r0, [r6, #1]
	mov r0, #8
	str r0, [r6, #24]
	mov r0, #1
	str r0, [r6, #20]
	b _08033574
_08033566:
	ldr r0, [r6, #8]
	bl sub_0800EEE0
	mov r0, #2
	strb r0, [r6]
	mov r0, #180
	strh r0, [r6, #4]
_08033574:
	ldr r2, [r6, #16]
	ldr r0, [r2]
	ldr r1, _08033590  @ =gUnknown_0202D910
	cmp r0, r1
	bcc _080335CE
	ldr r4, _08033594  @ =0xFFFFF800
	add r0, r0, r4
	str r0, [r2]
	add r0, r1, #0
	add r1, r1, r4
	mov r2, #64
	bl CpuFastSet
	b _080335CE
_08033590:
	.4byte gUnknown_0202D910
_08033594:
	.4byte 0xFFFFF800
_08033598:
	ldr r3, [r6, #16]
	ldr r4, _080335EC  @ =gUnknown_08427A64
	ldr r2, [r4, #4]
	mov r0, #226
	lsl r0, r0, #6
	add r1, r2, r0
	ldr r0, [r3, #4]
	cmp r0, r1
	bls _080335C4
	str r2, [r3, #4]
	ldr r3, [r6, #16]
	ldrh r2, [r4, #16]
	ldr r1, _080335F0  @ =0x000003FF
	add r0, r1, #0
	and r2, r2, r0
	ldrh r0, [r3, #16]
	mov r4, #240
	lsl r4, r4, #8
	add r1, r4, #0
	and r0, r0, r1
	orr r2, r2, r0
	strh r2, [r3, #16]
_080335C4:
	ldr r0, _080335F4  @ =gBG0Buffer
	mov r1, r8
	str r0, [r1, #16]
	mov r0, #1
	strh r0, [r1, #14]
_080335CE:
	mov r2, r8
	ldrh r0, [r2, #12]
	add r0, r0, #1
	strh r0, [r2, #12]
	mov r3, #4
	ldrsh r0, [r6, r3]
	cmp r0, #255
	ble _080335E0
	b _08033486
_080335E0:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080335EC:
	.4byte gUnknown_08427A64
_080335F0:
	.4byte 0x000003FF
_080335F4:
	.4byte gBG0Buffer
	THUMB_FUNC_END sub_08033464

