	THUMB_FUNC_START sub_080B7120
sub_080B7120: @ 0x080B7120
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _080B7154  @ =gUnknown_0200688A
	mov r0, #0
	strb r0, [r1]
	ldr r5, _080B7158  @ =gUnknown_020068BF
	ldrb r4, [r5]
	cmp r4, #0
	bne _080B7166
	bl sub_08069FF4
	ldr r0, _080B715C  @ =gRam
	ldr r1, _080B7160  @ =0x0000099D
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B7164
	mov r0, #1
	strb r0, [r5]
	b _080B7166
	.byte 0x00
	.byte 0x00
_080B7154:
	.4byte gUnknown_0200688A
_080B7158:
	.4byte gUnknown_020068BF
_080B715C:
	.4byte gRam
_080B7160:
	.4byte 0x0000099D
_080B7164:
	strb r4, [r5]
_080B7166:
	ldr r1, _080B7180  @ =gUnknown_02006888
	mov r0, #56
	strb r0, [r1]
	bl 0x080B7BC8
	ldr r0, _080B7184  @ =gUnknown_02006885
	ldrb r0, [r0]
	cmp r0, #191
	bhi _080B7188
	bl sub_080B7F4C
	b _080B7296
	.byte 0x00
	.byte 0x00
_080B7180:
	.4byte gUnknown_02006888
_080B7184:
	.4byte gUnknown_02006885
_080B7188:
	ldr r1, _080B72A4  @ =gUnknown_02006889
	mov r0, #112
	strb r0, [r1]
	ldr r4, _080B72A8  @ =gUnknown_020068B0
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B71A0
	mov r0, #15
	strb r0, [r4]
_080B71A0:
	ldr r5, _080B72AC  @ =gRam
	ldr r0, _080B72B0  @ =gUnknown_02006890
	ldrb r2, [r0]
	add r0, r0, #1
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r3, _080B72B4  @ =gUnknown_08170160
	ldrb r0, [r4]
	add r0, r0, r3
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	mov r3, #150
	lsl r3, r3, #4
	add r4, r5, r3
	strh r2, [r4]
	bl 0x080B7C6C
	mov r2, #1
	add r6, r5, #0
	mov r8, r4
	ldr r0, _080B72B8  @ =0x00000961
	add r0, r0, r6
	mov r10, r0
_080B71D0:
	ldr r1, _080B72BC  @ =gUnknown_02006893
	mov r9, r1
	ldrb r1, [r1]
	ldr r3, _080B72C0  @ =0x0000096C
	add r0, r6, r3
	strb r1, [r0]
	ldr r0, _080B72C4  @ =gUnknown_0817015C
	lsl r5, r2, #24
	asr r4, r5, #24
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080B72C8  @ =0x00000968
	add r0, r6, r2
	strb r1, [r0]
	ldr r0, _080B72CC  @ =gUnknown_0817015E
	add r0, r4, r0
	ldrb r1, [r0]
	sub r3, r3, #3
	add r0, r6, r3
	strb r1, [r0]
	ldr r0, _080B72B0  @ =gUnknown_02006890
	ldrb r2, [r0]
	ldr r7, _080B72D0  @ =gUnknown_02006891
	ldrb r0, [r7]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080B72D4  @ =gUnknown_08170156
	lsl r1, r4, #1
	add r1, r1, r0
	mov r3, #128
	lsl r3, r3, #1
	add r0, r3, #0
	ldrh r1, [r1]
	add r0, r0, r1
	add r2, r2, r0
	mov r0, r8
	strh r2, [r0]
	ldr r0, _080B72A4  @ =gUnknown_02006889
	ldrb r1, [r0]
	ldr r0, _080B72D8  @ =gUnknown_0817015A
	add r0, r4, r0
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r2, _080B72DC  @ =0x00000964
	add r0, r6, r2
	strh r1, [r0]
	ldr r1, _080B72E0  @ =gUnknown_02006894
	mov r3, r8
	ldrb r0, [r3]
	strb r0, [r1]
	add r1, r1, #1
	mov r2, r10
	ldrb r0, [r2]
	strb r0, [r1]
	lsr r5, r5, #24
	add r0, r5, #0
	bl sub_080CEC80
	add r0, r5, #0
	mov r1, #12
	ldr r2, _080B72E4  @ =0x0000FFD0
	bl 0x080B7D48
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r2, r4, #24
	cmp r4, #0
	bge _080B71D0
	ldr r1, _080B72E8  @ =gUnknown_02006892
	ldrb r0, [r1]
	add r2, r0, #1
	strb r2, [r1]
	mov r0, #7
	and r0, r0, r2
	cmp r0, #0
	bne _080B7292
	mov r3, r9
	ldrb r0, [r3]
	cmp r0, #2
	bne _080B728A
	mov r0, #255
	strb r0, [r3]
	ldrb r0, [r7]
	cmp r0, #0
	bne _080B728A
	mov r0, #8
	and r2, r2, r0
	cmp r2, #0
	beq _080B728A
	mov r0, #81
	mov r1, #0
	bl sub_0812A324
_080B728A:
	ldr r1, _080B72BC  @ =gUnknown_02006893
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B7292:
	bl sub_080B7F4C
_080B7296:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B72A4:
	.4byte gUnknown_02006889
_080B72A8:
	.4byte gUnknown_020068B0
_080B72AC:
	.4byte gRam
_080B72B0:
	.4byte gUnknown_02006890
_080B72B4:
	.4byte gUnknown_08170160
_080B72B8:
	.4byte 0x00000961
_080B72BC:
	.4byte gUnknown_02006893
_080B72C0:
	.4byte 0x0000096C
_080B72C4:
	.4byte gUnknown_0817015C
_080B72C8:
	.4byte 0x00000968
_080B72CC:
	.4byte gUnknown_0817015E
_080B72D0:
	.4byte gUnknown_02006891
_080B72D4:
	.4byte gUnknown_08170156
_080B72D8:
	.4byte gUnknown_0817015A
_080B72DC:
	.4byte 0x00000964
_080B72E0:
	.4byte gUnknown_02006894
_080B72E4:
	.4byte 0x0000FFD0
_080B72E8:
	.4byte gUnknown_02006892
	THUMB_FUNC_END sub_080B7120

