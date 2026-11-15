	THUMB_FUNC_START sub_080E3A94
sub_080E3A94: @ 0x080E3A94
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #27
	add r1, r4, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080E3B96
	add r0, r4, #0
	mov r1, #99
	bl sub_080CF140
	ldr r7, _080E3BA0  @ =gRam
	ldr r0, _080E3BA4  @ =0x00000FB2
	add r0, r0, r7
	mov r12, r0
	add r0, r4, r0
	ldrb r5, [r0]
	ldr r1, _080E3BA8  @ =0x00000FF2
	add r0, r7, r1
	add r4, r4, r0
	ldrb r0, [r4]
	cmp r0, #71
	bls _080E3AD2
	add r0, r5, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
_080E3AD2:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	ldr r0, _080E3BAC  @ =gUnknown_0817718C
	add r0, r5, r0
	ldrb r0, [r0]
	ldrh r2, [r1]
	add r2, r2, r0
	ldr r0, _080E3BB0  @ =gUnknown_08177194
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r3, _080E3BB4  @ =0x00000964
	add r1, r7, r3
	ldr r0, _080E3BB8  @ =gUnknown_0817719C
	add r0, r5, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080E3BBC  @ =gUnknown_081771A4
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080E3BC0  @ =0x00000EE2
	add r0, r7, r3
	add r0, r6, r0
	mov r3, #0
	mov r8, r3
	strb r2, [r0]
	ldr r3, _080E3BC4  @ =0x00000F02
	add r0, r7, r3
	add r0, r6, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080E3BC8  @ =0x00000ED2
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	sub r3, r3, #16
	add r0, r7, r3
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080E3BCC  @ =0x00000F22
	add r1, r7, r0
	add r1, r6, r1
	ldr r0, _080E3BD0  @ =gUnknown_081771AC
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r2, r2, #64
	add r1, r7, r2
	add r1, r6, r1
	ldr r0, _080E3BD4  @ =gUnknown_081771B4
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r3, r12
	add r1, r6, r3
	mov r0, #3
	and r0, r0, r5
	strb r0, [r1]
	ldr r1, _080E3BD8  @ =0x00001132
	add r2, r7, r1
	add r2, r6, r2
	ldr r1, _080E3BDC  @ =gUnknown_081771BC
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080E3BE0  @ =0x00001142
	add r0, r7, r2
	add r0, r6, r0
	mov r3, r8
	strb r3, [r0]
	mov r1, #0
	ldrb r0, [r4]
	cmp r0, #71
	bls _080E3B74
	mov r1, #1
_080E3B74:
	ldr r2, _080E3BE4  @ =0x00000F62
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	cmp r1, #0
	beq _080E3B96
	ldr r0, _080E3BE8  @ =gShield
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E3B96
	ldr r3, _080E3BEC  @ =0x000011B2
	add r0, r7, r3
	add r0, r6, r0
	ldrb r2, [r0]
	mov r1, #223
	and r1, r1, r2
	strb r1, [r0]
_080E3B96:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080E3BA0:
	.4byte gRam
_080E3BA4:
	.4byte 0x00000FB2
_080E3BA8:
	.4byte 0x00000FF2
_080E3BAC:
	.4byte gUnknown_0817718C
_080E3BB0:
	.4byte gUnknown_08177194
_080E3BB4:
	.4byte 0x00000964
_080E3BB8:
	.4byte gUnknown_0817719C
_080E3BBC:
	.4byte gUnknown_081771A4
_080E3BC0:
	.4byte 0x00000EE2
_080E3BC4:
	.4byte 0x00000F02
_080E3BC8:
	.4byte 0x00000ED2
_080E3BCC:
	.4byte 0x00000F22
_080E3BD0:
	.4byte gUnknown_081771AC
_080E3BD4:
	.4byte gUnknown_081771B4
_080E3BD8:
	.4byte 0x00001132
_080E3BDC:
	.4byte gUnknown_081771BC
_080E3BE0:
	.4byte 0x00001142
_080E3BE4:
	.4byte 0x00000F62
_080E3BE8:
	.4byte gShield
_080E3BEC:
	.4byte 0x000011B2
	THUMB_FUNC_END sub_080E3A94

