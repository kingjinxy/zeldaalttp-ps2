	THUMB_FUNC_START sub_0806D3B8
sub_0806D3B8: @ 0x0806D3B8
	push {r4,lr}
	ldr r4, _0806D438  @ =gRam
	mov r0, #176
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
	ldr r1, _0806D43C  @ =0x00000CF5
	add r0, r4, r1
	ldr r2, _0806D440  @ =0x00000CF6
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _0806D3F0
	ldr r0, _0806D444  @ =0x000009B5
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0806D448  @ =0x00000514
	add r2, r4, r1
	ldrh r1, [r2]
	ldr r0, _0806D44C  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strh r0, [r2]
_0806D3F0:
	bl sub_0806F2E4
	ldr r2, _0806D450  @ =0x00000952
	add r0, r4, r2
	ldrh r1, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _0806D454  @ =0x00000958
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	bl sub_08079338
	ldr r0, _0806D458  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_0812EF98
	ldr r1, _0806D45C  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #138
	bne _0806D430
	bl sub_0812F150
	bl sub_08092874
_0806D430:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806D438:
	.4byte gRam
_0806D43C:
	.4byte 0x00000CF5
_0806D440:
	.4byte 0x00000CF6
_0806D444:
	.4byte 0x000009B5
_0806D448:
	.4byte 0x00000514
_0806D44C:
	.4byte 0x0000FFFC
_0806D450:
	.4byte 0x00000952
_0806D454:
	.4byte 0x00000958
_0806D458:
	.4byte 0x000009E8
_0806D45C:
	.4byte 0x000009DA
	THUMB_FUNC_END sub_0806D3B8

