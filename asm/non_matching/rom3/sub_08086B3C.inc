	THUMB_FUNC_START sub_08086B3C
sub_08086B3C: @ 0x08086B3C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	ldr r1, _08086BF4  @ =gRam
	ldr r2, _08086BF8  @ =0x00001770
	add r0, r1, r2
	ldrb r6, [r0]
	add r4, r1, #0
	cmp r6, #0
	beq _08086B56
	b _08086E44
_08086B56:
	ldr r3, _08086BFC  @ =0x000016D5
	add r0, r4, r3
	ldrb r1, [r0]
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	strh r1, [r0]
	mov r7, #182
	lsl r7, r7, #5
	add r3, r4, r7
	ldr r0, _08086C00  @ =gUnknown_081677E4
	lsr r1, r1, #1
	lsl r5, r1, #1
	add r0, r5, r0
	ldrh r2, [r0]
	ldrh r3, [r3]
	add r2, r2, r3
	mov r1, #252
	lsl r1, r1, #1
	add r0, r1, #0
	and r2, r2, r0
	lsl r2, r2, #3
	mov r7, #150
	lsl r7, r7, #4
	add r3, r4, r7
	strh r2, [r3]
	ldr r1, _08086C04  @ =0x000016C4
	add r0, r4, r1
	ldr r1, _08086C08  @ =gUnknown_081677EC
	add r1, r5, r1
	mov r7, #0
	ldrsh r0, [r0, r7]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r1, #252
	lsl r1, r1, #1
	and r0, r0, r1
	asr r1, r0, #3
	orr r1, r1, r2
	strh r1, [r3]
	mov r2, #161
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08086BBC
	mov r7, #128
	lsl r7, r7, #5
	add r0, r7, #0
	orr r1, r1, r0
	strh r1, [r3]
_08086BBC:
	mov r0, #0
	ldrsh r2, [r3, r0]
	str r2, [sp]
	ldr r1, _08086C0C  @ =gUnknown_0200CBA0
	add r0, r2, r1
	ldrb r1, [r0]
	mov r3, #240
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #240
	beq _08086C14
	ldr r0, _08086C10  @ =gUnknown_081677F4
	add r0, r5, r0
	ldrh r0, [r0]
	add r0, r2, r0
	str r0, [sp]
	ldr r2, _08086C0C  @ =gUnknown_0200CBA0
	add r0, r0, r2
	ldrb r1, [r0]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #240
	beq _08086C14
	mov r3, #182
	lsl r3, r3, #4
	add r0, r4, r3
	strh r6, [r0]
	b _08086E44
_08086BF4:
	.4byte gRam
_08086BF8:
	.4byte 0x00001770
_08086BFC:
	.4byte 0x000016D5
_08086C00:
	.4byte gUnknown_081677E4
_08086C04:
	.4byte 0x000016C4
_08086C08:
	.4byte gUnknown_081677EC
_08086C0C:
	.4byte gUnknown_0200CBA0
_08086C10:
	.4byte gUnknown_081677F4
_08086C14:
	ldr r3, [sp]
	ldr r5, _08086C58  @ =gUnknown_0200CBA0
	add r0, r3, r5
	ldrb r0, [r0]
	mov r5, #15
	and r5, r5, r0
	ldr r7, _08086C5C  @ =0x00000C06
	add r0, r4, r7
	mov r6, #0
	strh r5, [r0]
	lsl r2, r5, #1
	ldr r0, _08086C60  @ =0x000018F0
	add r0, r0, r4
	mov r9, r0
	add r0, r2, r0
	ldrh r1, [r0]
	mov r7, #3
	mov r8, r7
	mov r0, r8
	and r0, r0, r1
	lsl r0, r0, #1
	mov r7, #151
	lsl r7, r7, #4
	add r1, r4, r7
	mov r7, #0
	ldrsh r1, [r1, r7]
	cmp r0, r1
	beq _08086C64
	mov r1, #182
	lsl r1, r1, #4
	add r0, r4, r1
	strh r6, [r0]
	b _08086E44
	.byte 0x00
	.byte 0x00
_08086C58:
	.4byte gUnknown_0200CBA0
_08086C5C:
	.4byte 0x00000C06
_08086C60:
	.4byte 0x000018F0
_08086C64:
	ldr r7, _08086D10  @ =0x000018B0
	add r0, r4, r7
	add r0, r2, r0
	ldrh r0, [r0]
	mov r1, #254
	and r1, r1, r0
	cmp r1, #40
	bne _08086D30
	ldr r1, _08086D14  @ =0x00001804
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08086C80
	b _08086E44
_08086C80:
	ldr r2, _08086D18  @ =0x0000177F
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #62
	bls _08086C8C
	b _08086E44
_08086C8C:
	mov r3, #192
	lsl r3, r3, #4
	add r1, r4, r3
	mov r0, sp
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, sp
	bl sub_080AE700
	cmp r0, #0
	bne _08086CF6
	sub r7, r7, #95
	add r0, r4, r7
	ldr r2, [sp]
	add r2, r2, r0
	asr r1, r5, #1
	lsl r1, r1, #1
	mov r3, r9
	add r0, r1, r3
	ldrb r3, [r0]
	mov r0, r8
	and r0, r0, r3
	strb r0, [r2]
	ldr r5, _08086D1C  @ =0x00001849
	add r0, r4, r5
	ldr r3, [sp]
	add r3, r3, r0
	add r7, r7, #127
	add r0, r4, r7
	add r1, r1, r0
	ldrb r2, [r1]
	mov r0, #126
	and r0, r0, r2
	ldr r5, _08086D20  @ =0x00000BA8
	add r2, r4, r5
	lsl r0, r0, #2
	ldrb r2, [r2]
	add r0, r0, r2
	strb r0, [r3]
	sub r7, r7, #131
	add r0, r4, r7
	ldr r2, [sp]
	add r2, r2, r0
	ldrh r1, [r1]
	mov r0, #252
	lsl r0, r0, #5
	and r0, r0, r1
	ldr r3, _08086D24  @ =0x00000BAA
	add r1, r4, r3
	lsr r0, r0, #4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r2]
_08086CF6:
	ldr r5, _08086D28  @ =0x00000504
	add r1, r4, r5
	mov r0, #123
	bl sub_0812A324
	ldr r7, _08086D2C  @ =0x000009AD
	add r1, r4, r7
	mov r0, #10
	strb r0, [r1]
	bl sub_0809945C
	b _08086E48
	.byte 0x00
	.byte 0x00
_08086D10:
	.4byte 0x000018B0
_08086D14:
	.4byte 0x00001804
_08086D18:
	.4byte 0x0000177F
_08086D1C:
	.4byte 0x00001849
_08086D20:
	.4byte 0x00000BA8
_08086D24:
	.4byte 0x00000BAA
_08086D28:
	.4byte 0x00000504
_08086D2C:
	.4byte 0x000009AD
_08086D30:
	cmp r1, #28
	beq _08086D9A
	cmp r1, #30
	bne _08086D88
	ldr r1, _08086D78  @ =0x00000C02
	add r0, r4, r1
	strh r6, [r0]
	mov r2, #192
	lsl r2, r2, #4
	add r0, r4, r2
	strh r3, [r0]
	ldr r2, _08086D7C  @ =gBigKeys
	ldr r1, _08086D80  @ =gUnknown_081676B2
	ldr r3, _08086D84  @ =0x00000AB2
	add r0, r4, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _08086DA6
	mov r5, #182
	lsl r5, r5, #4
	add r1, r4, r5
	ldrh r0, [r1]
	cmp r0, #0
	bne _08086E44
	add r0, r0, #1
	strh r0, [r1]
	mov r0, #125
	bl sub_080AF4FC
	b _08086E44
_08086D78:
	.4byte 0x00000C02
_08086D7C:
	.4byte gBigKeys
_08086D80:
	.4byte gUnknown_081676B2
_08086D84:
	.4byte 0x00000AB2
_08086D88:
	add r0, r1, #0
	sub r0, r0, #28
	cmp r0, #15
	bhi _08086D94
	cmp r1, #42
	bne _08086D9A
_08086D94:
	bl sub_08086A2C
	b _08086E48
_08086D9A:
	ldr r1, _08086E24  @ =gKeyCount
	ldrb r0, [r1]
	cmp r0, #0
	beq _08086E44
	sub r0, r0, #1
	strb r0, [r1]
_08086DA6:
	ldr r7, _08086E28  @ =0x00000C02
	add r1, r4, r7
	mov r0, #0
	strh r0, [r1]
	ldr r1, [sp]
	mov r2, #192
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _08086E2C  @ =0x000009AD
	add r1, r4, r3
	mov r0, #4
	strb r0, [r1]
	mov r5, #150
	lsl r5, r5, #4
	add r1, r4, r5
	mov r0, #20
	strh r0, [r1]
	mov r3, #20
	ldr r2, _08086E30  @ =gUnknown_08153568
	add r7, r7, #4
	add r0, r4, r7
	ldrh r0, [r0]
	lsl r0, r0, #1
	ldr r5, _08086E34  @ =0x000018F0
	add r1, r4, r5
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	orr r0, r0, r3
	mov r7, #164
	lsl r7, r7, #4
	add r1, r4, r7
	strb r0, [r1]
	ldr r1, _08086E38  @ =0x000016C4
	add r0, r4, r1
	ldr r2, _08086E3C  @ =0x00000952
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _08086E40  @ =0x00000504
	add r1, r4, r3
	strh r0, [r1]
	mov r5, #182
	lsl r5, r5, #5
	add r0, r4, r5
	sub r7, r7, #232
	add r2, r4, r7
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	add r3, r3, #2
	add r2, r4, r3
	strh r0, [r2]
	mov r0, #19
	bl sub_0812A324
	b _08086E48
	.byte 0x00
	.byte 0x00
_08086E24:
	.4byte gKeyCount
_08086E28:
	.4byte 0x00000C02
_08086E2C:
	.4byte 0x000009AD
_08086E30:
	.4byte gUnknown_08153568
_08086E34:
	.4byte 0x000018F0
_08086E38:
	.4byte 0x000016C4
_08086E3C:
	.4byte 0x00000952
_08086E40:
	.4byte 0x00000504
_08086E44:
	bl sub_08086A2C
_08086E48:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08086B3C

	.byte 0x00
	.byte 0x00
