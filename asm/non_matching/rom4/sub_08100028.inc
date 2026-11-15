	THUMB_FUNC_START sub_08100028
sub_08100028: @ 0x08100028
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _08100070  @ =gRam
	ldr r0, _08100074  @ =0x00000D94
	add r1, r4, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r5, #0
	bl sub_08100FC8
	ldr r1, _08100078  @ =0x00000F82
	add r4, r4, r1
	add r4, r5, r4
	ldrb r0, [r4]
	mov r1, #0
	cmp r0, #10
	bgt _0810005E
	cmp r0, #8
	blt _0810005E
	mov r1, #1
_0810005E:
	cmp r1, #0
	beq _08100080
	ldr r0, _08100070  @ =gRam
	ldr r2, _0810007C  @ =0x00001122
	add r0, r0, r2
	add r0, r5, r0
	mov r1, #7
	b _081000B4
	.byte 0x00
	.byte 0x00
_08100070:
	.4byte gRam
_08100074:
	.4byte 0x00000D94
_08100078:
	.4byte 0x00000F82
_0810007C:
	.4byte 0x00001122
_08100080:
	mov r2, #0
	ldr r1, _081000A0  @ =gRam
	ldr r3, _081000A4  @ =0x000009DA
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #236
	bne _08100090
	mov r2, #1
_08100090:
	cmp r2, #0
	beq _081000AC
	ldr r2, _081000A8  @ =0x00001122
	add r0, r1, r2
	add r0, r5, r0
	mov r1, #9
	b _081000B4
	.byte 0x00
	.byte 0x00
_081000A0:
	.4byte gRam
_081000A4:
	.4byte 0x000009DA
_081000A8:
	.4byte 0x00001122
_081000AC:
	ldr r3, _081001D8  @ =0x00001122
	add r0, r1, r3
	add r0, r5, r0
	mov r1, #1
_081000B4:
	strb r1, [r0]
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _081000C6
	b _0810039E
_081000C6:
	ldr r6, _081001DC  @ =gRam
	ldr r1, _081001E0  @ =0x00001072
	add r0, r6, r1
	add r2, r5, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _081000D6
	b _08100260
_081000D6:
	add r1, r0, #0
	sub r0, r1, #1
	strb r0, [r2]
	cmp r1, #11
	beq _081000E2
	b _08100260
_081000E2:
	ldr r2, _081001E4  @ =0x000010C2
	add r0, r6, r2
	add r4, r5, r0
	strb r3, [r4]
	ldr r1, _081001E8  @ =0x00001042
	add r0, r6, r1
	add r7, r5, r0
	strb r3, [r7]
	add r2, r2, #32
	add r0, r6, r2
	add r2, r5, r0
	ldrb r3, [r2]
	cmp r3, #0
	beq _08100100
	b _08100260
_08100100:
	sub r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #128
	strb r1, [r0]
	mov r0, #48
	strb r0, [r2]
	ldr r2, _081001D8  @ =0x00001122
	add r1, r6, r2
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #1
	mov r8, r0
	and r0, r0, r2
	strb r0, [r1]
	ldr r1, _081001EC  @ =0x00001162
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _08100134
	b _08100250
_08100134:
	strb r3, [r1]
	ldr r2, _081001F0  @ =0x00000DA6
	add r7, r6, r2
	ldrb r0, [r7]
	add r1, r0, #1
	strb r1, [r7]
	mov r2, #0
	ldr r3, _081001F4  @ =0x000009DA
	add r3, r3, r6
	mov r8, r3
	ldrh r0, [r3]
	cmp r0, #236
	bne _08100150
	mov r2, #1
_08100150:
	cmp r2, #0
	bne _0810015C
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _08100218
_0810015C:
	add r0, r5, #0
	bl sub_080C351C
	ldr r1, _081001F8  @ =0x00000F82
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	ldr r2, _081001FC  @ =0x00000FE2
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	ldr r3, _08100200  @ =0x00001172
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #1
	neg r1, r1
	strb r1, [r0]
	ldr r1, _08100204  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #10
	strb r1, [r0]
	mov r1, #0
	mov r2, r8
	ldrh r0, [r2]
	cmp r0, #236
	bne _08100198
	mov r1, #1
_08100198:
	cmp r1, #0
	beq _08100210
	mov r4, #0
	ldrb r3, [r7]
	cmp r4, r3
	bge _08100260
	ldr r0, _08100208  @ =0x00000FC2
	add r0, r0, r6
	mov r9, r0
	ldr r1, _0810020C  @ =gUnknown_02010990
	mov r8, r1
	add r6, r7, #0
_081001B0:
	add r0, r5, #0
	bl sub_08101290
	add r2, r4, #1
	cmp r0, #0
	blt _081001C8
	mov r3, r9
	add r1, r0, r3
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #4
	strb r0, [r1]
_081001C8:
	ldrb r0, [r6]
	mov r1, r8
	strb r0, [r1, #2]
	add r4, r2, #0
	ldrb r2, [r6]
	cmp r4, r2
	blt _081001B0
	b _08100260
_081001D8:
	.4byte 0x00001122
_081001DC:
	.4byte gRam
_081001E0:
	.4byte 0x00001072
_081001E4:
	.4byte 0x000010C2
_081001E8:
	.4byte 0x00001042
_081001EC:
	.4byte 0x00001162
_081001F0:
	.4byte 0x00000DA6
_081001F4:
	.4byte 0x000009DA
_081001F8:
	.4byte 0x00000F82
_081001FC:
	.4byte 0x00000FE2
_08100200:
	.4byte 0x00001172
_08100204:
	.4byte 0x00000F92
_08100208:
	.4byte 0x00000FC2
_0810020C:
	.4byte gUnknown_02010990
_08100210:
	add r0, r5, #0
	bl sub_08101290
	b _08100260
_08100218:
	bl sub_080CBB34
	add r0, r5, #0
	bl sub_080CA5D8
	ldr r3, _08100248  @ =0x00000FC2
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	mov r0, #1
	neg r0, r0
	strb r0, [r4]
	ldr r0, _0810024C  @ =0x00001649
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #96
	bl sub_080CF140
	b _0810039E
	.byte 0x00
	.byte 0x00
_08100248:
	.4byte 0x00000FC2
_0810024C:
	.4byte 0x00001649
_08100250:
	mov r0, #96
	strb r0, [r7]
	strb r0, [r4]
	ldr r1, _081002CC  @ =0x00001002
	add r0, r6, r1
	add r0, r5, r0
	mov r2, r8
	strb r2, [r0]
_08100260:
	mov r0, #1
	cmp r0, #0
	bne _08100268
	b _0810039E
_08100268:
	ldr r3, _081002D0  @ =gRam
	ldr r1, _081002D4  @ =0x00000F62
	add r0, r3, r1
	add r0, r5, r0
	ldrb r6, [r0]
	add r7, r3, #0
	cmp r6, #0
	beq _0810027A
	b _08100378
_0810027A:
	ldr r2, _081002D8  @ =0x00001052
	add r0, r3, r2
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	bne _0810029A
	ldr r0, _081002DC  @ =0x00000FC2
	add r1, r3, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810029A:
	ldr r1, _081002E0  @ =0x00000FD2
	add r0, r3, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _08100358
	ldr r2, _081002E4  @ =0x00000DA5
	add r0, r3, r2
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r1, _081002E8  @ =0x00000D74
	add r0, r3, r1
	add r2, r5, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _081002F0
	sub r0, r0, #1
	strb r0, [r2]
	ldr r2, _081002EC  @ =0x00000F52
	add r0, r3, r2
	add r0, r5, r0
	strb r6, [r0]
	b _08100306
	.byte 0x00
	.byte 0x00
_081002CC:
	.4byte 0x00001002
_081002D0:
	.4byte gRam
_081002D4:
	.4byte 0x00000F62
_081002D8:
	.4byte 0x00001052
_081002DC:
	.4byte 0x00000FC2
_081002E0:
	.4byte 0x00000FD2
_081002E4:
	.4byte 0x00000DA5
_081002E8:
	.4byte 0x00000D74
_081002EC:
	.4byte 0x00000F52
_081002F0:
	ldr r1, _0810033C  @ =0x00000F52
	add r0, r3, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08100306
	mov r0, #16
	strb r0, [r4]
	mov r0, #128
	strb r0, [r2]
	strb r6, [r1]
_08100306:
	ldr r2, _08100340  @ =0x00000F02
	add r0, r7, r2
	add r0, r5, r0
	ldr r3, _08100344  @ =0x000016C5
	add r1, r7, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08100348  @ =0x00000EF2
	add r0, r7, r1
	add r0, r5, r0
	ldr r2, _0810034C  @ =0x000016C1
	add r1, r7, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _08100350  @ =gUnknown_0817ADAC
	ldr r3, _08100354  @ =0x00000F82
	add r0, r7, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _0810039E
	.byte 0x00
	.byte 0x00
_0810033C:
	.4byte 0x00000F52
_08100340:
	.4byte 0x00000F02
_08100344:
	.4byte 0x000016C5
_08100348:
	.4byte 0x00000EF2
_0810034C:
	.4byte 0x000016C1
_08100350:
	.4byte gUnknown_0817ADAC
_08100354:
	.4byte 0x00000F82
_08100358:
	ldr r1, _08100374  @ =0x00000F52
	add r0, r3, r1
	add r0, r5, r0
	strb r6, [r0]
	ldrb r0, [r4]
	cmp r0, #8
	bne _0810036C
	add r0, r5, #0
	bl sub_08100EE4
_0810036C:
	add r0, r5, #0
	bl sub_08100DB4
	b _0810039E
_08100374:
	.4byte 0x00000F52
_08100378:
	ldr r2, _081003AC  @ =0x00000FC2
	add r0, r3, r2
	add r6, r5, r0
	ldrb r1, [r6]
	cmp r1, #0
	bne _0810038C
	sub r2, r2, #32
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
_0810038C:
	ldr r0, _081003B0  @ =0x00000F92
	add r1, r3, r0
	add r1, r5, r1
	ldr r2, _081003B4  @ =gUnknown_0817ADA4
	ldrb r0, [r6]
	lsr r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_0810039E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081003AC:
	.4byte 0x00000FC2
_081003B0:
	.4byte 0x00000F92
_081003B4:
	.4byte gUnknown_0817ADA4
	THUMB_FUNC_END sub_08100028

