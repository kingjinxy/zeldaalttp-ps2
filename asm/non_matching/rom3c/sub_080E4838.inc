	THUMB_FUNC_START sub_080E4838
sub_080E4838: @ 0x080E4838
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080E4C34
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _080E4904
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r6, _080E48CC  @ =gRam
	ldr r2, _080E48D0  @ =0x00000FB2
	add r1, r6, r2
	add r1, r1, r4
	mov r8, r1
	strb r0, [r1]
	add r2, r2, #208
	add r1, r6, r2
	add r1, r4, r1
	strb r0, [r1]
	ldr r1, _080E48D4  @ =0x00000F52
	add r0, r6, r1
	add r3, r4, r0
	ldrb r2, [r3]
	cmp r2, #0
	beq _080E48F0
	ldr r2, _080E48D8  @ =0x00000FC2
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E48E8
	ldr r1, _080E48DC  @ =0x00001052
	add r0, r6, r1
	add r1, r4, r0
	strb r7, [r1]
	ldrb r0, [r5]
	cmp r0, #79
	bls _080E48A2
	mov r0, #1
	strb r0, [r1]
_080E48A2:
	ldrb r0, [r5]
	cmp r0, #32
	bne _080E48AE
	add r0, r4, #0
	bl sub_080E4914
_080E48AE:
	ldrb r1, [r5]
	lsr r1, r1, #4
	ldr r0, _080E48E0  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r3, _080E48E4  @ =gUnknown_0817710C
	mov r4, r8
	ldrb r0, [r4]
	lsl r0, r0, #3
	orr r0, r0, r1
	add r0, r0, #32
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	b _080E4904
_080E48CC:
	.4byte gRam
_080E48D0:
	.4byte 0x00000FB2
_080E48D4:
	.4byte 0x00000F52
_080E48D8:
	.4byte 0x00000FC2
_080E48DC:
	.4byte 0x00001052
_080E48E0:
	.4byte 0x00000F92
_080E48E4:
	.4byte gUnknown_0817710C
_080E48E8:
	strb r0, [r3]
	mov r0, #32
	strb r0, [r5]
	b _080E4904
_080E48F0:
	ldr r1, _080E4910  @ =0x00000FC2
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080E4904
	add r0, r2, #1
	strb r0, [r3]
	mov r0, #112
	strb r0, [r1]
_080E4904:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E4910:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E4838

