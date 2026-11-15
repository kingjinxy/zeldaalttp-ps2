	THUMB_FUNC_START sub_08086A2C
sub_08086A2C: @ 0x08086A2C
	push {r4-r7,lr}
	ldr r1, _08086AF0  @ =gRam
	ldr r0, _08086AF4  @ =0x00000ADC
	add r2, r1, r0
	ldrh r3, [r2]
	ldr r0, _08086AF8  @ =0x0000FFFF
	add r4, r1, #0
	cmp r3, r0
	beq _08086B30
	ldr r1, _08086AFC  @ =0x0000172C
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08086B30
	sub r1, r1, #103
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #12
	bne _08086B30
	ldrh r5, [r2]
	ldr r0, _08086B00  @ =0x00000BFE
	add r2, r4, r0
	ldr r1, _08086B04  @ =gUnknown_081676D2
	lsr r0, r3, #9
	lsl r6, r0, #1
	add r1, r6, r1
	ldrh r7, [r2]
	ldrh r3, [r1]
	and r3, r3, r7
	ldr r1, _08086B08  @ =0x000016D5
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r5, r2
	beq _08086A8C
	ldr r1, _08086B0C  @ =gUnknown_08153560
	asr r0, r5, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r2, r0
	bne _08086A8C
	ldr r0, _08086B10  @ =gUnknown_081676B2
	add r0, r6, r0
	ldrh r0, [r0]
	add r3, r0, #0
	orr r3, r3, r7
_08086A8C:
	ldr r2, _08086B00  @ =0x00000BFE
	add r0, r4, r2
	ldrh r1, [r0]
	cmp r3, r1
	beq _08086B30
	mov r1, #0
	strh r3, [r0]
	ldr r2, _08086B14  @ =0x00000978
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _08086AF4  @ =0x00000ADC
	add r0, r4, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	bl sub_080869A8
	bl sub_08089F74
	ldr r1, _08086B18  @ =0x00000B08
	add r0, r4, r1
	ldrh r0, [r0]
	bl sub_080835C8
	bl sub_08085978
	ldr r2, _08086B1C  @ =0x000016C4
	add r0, r4, r2
	ldr r3, _08086B20  @ =0x00000952
	add r1, r4, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r2, _08086B24  @ =0x00000504
	add r1, r4, r2
	strh r0, [r1]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r4, r3
	ldr r3, _08086B28  @ =0x00000958
	add r2, r4, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08086B2C  @ =0x00000506
	add r2, r4, r3
	strh r0, [r2]
	mov r0, #55
	bl sub_0812A324
	b _08086B34
_08086AF0:
	.4byte gRam
_08086AF4:
	.4byte 0x00000ADC
_08086AF8:
	.4byte 0x0000FFFF
_08086AFC:
	.4byte 0x0000172C
_08086B00:
	.4byte 0x00000BFE
_08086B04:
	.4byte gUnknown_081676D2
_08086B08:
	.4byte 0x000016D5
_08086B0C:
	.4byte gUnknown_08153560
_08086B10:
	.4byte gUnknown_081676B2
_08086B14:
	.4byte 0x00000978
_08086B18:
	.4byte 0x00000B08
_08086B1C:
	.4byte 0x000016C4
_08086B20:
	.4byte 0x00000952
_08086B24:
	.4byte 0x00000504
_08086B28:
	.4byte 0x00000958
_08086B2C:
	.4byte 0x00000506
_08086B30:
	bl sub_08086218
_08086B34:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08086A2C

	.byte 0x00
	.byte 0x00
