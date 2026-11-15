	THUMB_FUNC_START sub_080AFF7C
sub_080AFF7C: @ 0x080AFF7C
	push {r4-r7,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #4
	bl sub_080CF388
	ldr r6, _080B0024  @ =gRam
	ldr r1, _080B0028  @ =0x00001A44
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r7, r6, r2
	strb r0, [r7]
	ldr r3, _080B002C  @ =0x00001A42
	add r0, r6, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	sub r3, r3, #4
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080B0030  @ =0x00000964
	add r2, r6, r1
	strb r0, [r2]
	sub r3, r3, #2
	add r0, r6, r3
	add r4, r4, r0
	ldrb r1, [r4]
	ldr r3, _080B0034  @ =0x00000965
	add r0, r6, r3
	strb r1, [r0]
	ldr r0, _080B0038  @ =0x00000958
	add r1, r6, r0
	ldrh r0, [r7]
	ldrh r1, [r1]
	sub r0, r0, r1
	strh r0, [r7]
	sub r3, r3, #19
	add r1, r6, r3
	ldrh r0, [r2]
	ldrh r1, [r1]
	sub r0, r0, r1
	strh r0, [r2]
	ldr r1, _080B003C  @ =gUnknown_0816E8D0
	ldr r3, _080B0040  @ =0x00001748
	add r0, r6, r3
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r1, _080B0044  @ =gUnknown_0816E8CB
	add r0, r0, #1
	add r3, r0, r1
	ldrb r0, [r3]
	cmp r0, #255
	beq _080B001A
	ldr r5, _080B0048  @ =gUnknown_03003E74
	ldrh r0, [r5]
	ldrh r1, [r2]
	ldrh r2, [r7]
	ldrb r3, [r3]
	ldr r7, _080B004C  @ =0x00001724
	add r4, r6, r7
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
_080B001A:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B0024:
	.4byte gRam
_080B0028:
	.4byte 0x00001A44
_080B002C:
	.4byte 0x00001A42
_080B0030:
	.4byte 0x00000964
_080B0034:
	.4byte 0x00000965
_080B0038:
	.4byte 0x00000958
_080B003C:
	.4byte gUnknown_0816E8D0
_080B0040:
	.4byte 0x00001748
_080B0044:
	.4byte gUnknown_0816E8CB
_080B0048:
	.4byte gUnknown_03003E74
_080B004C:
	.4byte 0x00001724
	THUMB_FUNC_END sub_080AFF7C

