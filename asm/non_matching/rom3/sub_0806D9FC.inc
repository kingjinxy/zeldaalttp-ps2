	THUMB_FUNC_START sub_0806D9FC
sub_0806D9FC: @ 0x0806D9FC
	push {r4-r6,lr}
	ldr r4, _0806DAA0  @ =gRam
	ldr r0, _0806DAA4  @ =0x00000952
	add r5, r4, r0
	ldrh r1, [r5]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _0806DAA8  @ =0x00000958
	add r6, r4, r3
	ldrh r1, [r6]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	bl sub_0806F2E4
	mov r2, #22
	ldr r1, _0806DAAC  @ =gUnknown_0814CAD4
	ldr r3, _0806DAB0  @ =0x00000ABA
	add r0, r4, r3
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806DA3A
	mov r2, #23
	mov r1, #0
_0806DA3A:
	ldr r3, _0806DAB4  @ =0x000009B4
	add r0, r4, r3
	strb r2, [r0]
	ldr r2, _0806DAB8  @ =0x000009B5
	add r0, r4, r2
	strb r1, [r0]
	bl sub_0806D598
	ldr r3, _0806DABC  @ =0x00001712
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0806DAC0  @ =0x000016C4
	add r0, r4, r1
	ldrh r0, [r0]
	ldrh r1, [r5]
	sub r0, r0, r1
	ldr r3, _0806DAC4  @ =0x00000504
	add r2, r4, r3
	strh r0, [r2]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r0, [r0]
	ldrh r1, [r6]
	sub r0, r0, r1
	add r3, r3, #2
	add r1, r4, r3
	strh r0, [r1]
	ldr r1, _0806DAC8  @ =0x00000B0A
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806DAD4
	ldr r3, _0806DACC  @ =0x000009DE
	add r1, r4, r3
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	ldr r0, _0806DAD0  @ =0x00000B0C
	add r1, r4, r0
	mov r0, #32
	strh r0, [r1]
	mov r0, #52
	add r1, r2, #0
	bl sub_0812A324
	b _0806DAEE
	.byte 0x00
	.byte 0x00
_0806DAA0:
	.4byte gRam
_0806DAA4:
	.4byte 0x00000952
_0806DAA8:
	.4byte 0x00000958
_0806DAAC:
	.4byte gUnknown_0814CAD4
_0806DAB0:
	.4byte 0x00000ABA
_0806DAB4:
	.4byte 0x000009B4
_0806DAB8:
	.4byte 0x000009B5
_0806DABC:
	.4byte 0x00001712
_0806DAC0:
	.4byte 0x000016C4
_0806DAC4:
	.4byte 0x00000504
_0806DAC8:
	.4byte 0x00000B0A
_0806DACC:
	.4byte 0x000009DE
_0806DAD0:
	.4byte 0x00000B0C
_0806DAD4:
	ldr r3, _0806DB10  @ =0x000009DE
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _0806DB14  @ =0x00000B0C
	add r1, r4, r0
	mov r0, #48
	strh r0, [r1]
	mov r0, #50
	add r1, r2, #0
	bl sub_0812A324
_0806DAEE:
	mov r0, #70
	mov r1, #0
	bl sub_0812A324
	bl sub_08070BB0
	bl sub_08079338
	ldr r1, _0806DB18  @ =gRam
	ldr r2, _0806DB1C  @ =0x000009E8
	add r1, r1, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_0806DB10:
	.4byte 0x000009DE
_0806DB14:
	.4byte 0x00000B0C
_0806DB18:
	.4byte gRam
_0806DB1C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806D9FC

