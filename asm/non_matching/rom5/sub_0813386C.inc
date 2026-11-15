	THUMB_FUNC_START sub_0813386C
sub_0813386C: @ 0x0813386C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _08133918  @ =gRam
	ldr r3, _0813391C  @ =0x00000968
	add r2, r1, r3
	mov r3, #0
	strh r0, [r2]
	ldr r4, _08133920  @ =0x00000DB8
	add r6, r1, r4
	strb r3, [r6]
	ldr r0, _08133924  @ =0x000009C6
	add r2, r1, r0
	ldrh r0, [r2]
	add r5, r1, #0
	cmp r0, #127
	bls _08133890
	b _08133994
_08133890:
	ldr r1, _08133928  @ =gUnknown_0822C624
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r2, [r0]
	ldrh r1, [r2]
	ldr r0, _0813392C  @ =0x0000FFFF
	cmp r1, r0
	beq _08133994
	mov r12, r5
	add r3, r2, #0
	ldr r1, _08133930  @ =0x0000178A
	add r7, r5, r1
	mov r8, r5
_081338AA:
	ldr r0, _0813391C  @ =0x00000968
	add r0, r0, r12
	mov r4, #0
	ldrsh r2, [r0, r4]
	ldrh r1, [r3]
	ldr r4, _08133934  @ =0x00007FFF
	add r0, r4, #0
	and r0, r0, r1
	cmp r2, r0
	bne _0813398A
	ldrh r4, [r3, #2]
	cmp r4, #0
	beq _081338D0
	cmp r4, #127
	bgt _081338D4
	ldrb r1, [r6]
	add r0, r4, #0
	orr r0, r0, r1
	strb r0, [r6]
_081338D0:
	cmp r4, #127
	ble _08133978
_081338D4:
	ldr r0, _08133920  @ =0x00000DB8
	add r3, r5, r0
	mov r0, #255
	strb r0, [r3]
	cmp r4, #132
	beq _08133948
	cmp r4, #130
	beq _08133940
	ldr r1, _08133924  @ =0x000009C6
	add r0, r5, r1
	ldrh r2, [r0]
	ldr r1, _08133938  @ =gUnknown_02002280
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08133948
	cmp r2, #91
	bne _08133940
	ldr r1, _0813393C  @ =0x00001663
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #13
	beq _08133940
	ldrb r1, [r7]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _081339AA
	mov r0, #4
	strb r0, [r3]
	b _081339AA
	.byte 0x00
	.byte 0x00
_08133918:
	.4byte gRam
_0813391C:
	.4byte 0x00000968
_08133920:
	.4byte 0x00000DB8
_08133924:
	.4byte 0x000009C6
_08133928:
	.4byte gUnknown_0822C624
_0813392C:
	.4byte 0x0000FFFF
_08133930:
	.4byte 0x0000178A
_08133934:
	.4byte 0x00007FFF
_08133938:
	.4byte gUnknown_02002280
_0813393C:
	.4byte 0x00001663
_08133940:
	mov r0, #123
	ldr r1, _0813396C  @ =gUnknown_03002734
	bl sub_0812A324
_08133948:
	ldr r1, _08133970  @ =gUnknown_0822C824
	mov r0, #15
	and r4, r4, r0
	asr r0, r4, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _08133974  @ =0x0000097C
	add r0, r0, r8
	strh r1, [r0]
	ldrb r1, [r7]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _081339AA
	mov r0, #4
	strb r0, [r6]
	b _081339AA
_0813396C:
	.4byte gUnknown_03002734
_08133970:
	.4byte gUnknown_0822C824
_08133974:
	.4byte 0x0000097C
_08133978:
	ldrb r1, [r7]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08133986
	mov r0, #4
	strb r0, [r6]
_08133986:
	mov r0, #1
	b _081339AC
_0813398A:
	add r3, r3, #4
	ldrh r1, [r3]
	ldr r0, _081339B8  @ =0x0000FFFF
	cmp r1, r0
	bne _081338AA
_08133994:
	ldr r3, _081339BC  @ =0x0000178A
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _081339AA
	ldr r4, _081339C0  @ =0x00000DB8
	add r1, r5, r4
	mov r0, #4
	strb r0, [r1]
_081339AA:
	mov r0, #0
_081339AC:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081339B8:
	.4byte 0x0000FFFF
_081339BC:
	.4byte 0x0000178A
_081339C0:
	.4byte 0x00000DB8
	THUMB_FUNC_END sub_0813386C

	.INCBIN "baserom.gba", 0x1339C4, 0x134028-0x1339C4

