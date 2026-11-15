	THUMB_FUNC_START sub_080AA3EC
sub_080AA3EC: @ 0x080AA3EC
	push {r4-r6,lr}
	ldr r0, _080AA468  @ =gUnknown_02000400
	ldrh r5, [r0]
	ldr r3, _080AA46C  @ =gRam
	ldr r1, _080AA470  @ =0x00000A4E
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r0, r0, #1
	lsl r4, r5, #1
	ldr r6, _080AA474  @ =gUnknown_02000402
	add r2, r4, r6
	ldr r1, _080AA478  @ =gUnknown_0816DEE0
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r6, _080AA47C  @ =0x00007FFE
	add r0, r1, r6
	strh r0, [r2]
	ldr r2, _080AA480  @ =gUnknown_02000404
	add r0, r4, r2
	add r6, r6, #4
	add r2, r6, #0
	strh r2, [r0]
	ldr r6, _080AA484  @ =gUnknown_0200040A
	add r0, r4, r6
	ldr r6, _080AA488  @ =0xFFFF8004
	add r1, r1, r6
	strh r1, [r0]
	ldr r1, _080AA48C  @ =gUnknown_0200040C
	add r0, r4, r1
	strh r2, [r0]
	ldr r2, _080AA490  @ =0x00000A53
	add r3, r3, r2
	ldrb r1, [r3]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080AA4A8
	ldr r6, _080AA494  @ =gUnknown_02000406
	add r1, r4, r6
	ldr r2, _080AA498  @ =0x00009053
	add r0, r2, #0
	strh r0, [r1]
	add r6, r6, #2
	add r1, r4, r6
	ldr r2, _080AA49C  @ =0x00009853
	add r0, r2, #0
	strh r0, [r1]
	add r6, r6, #6
	add r1, r4, r6
	ldr r2, _080AA4A0  @ =0x00009453
	add r0, r2, #0
	strh r0, [r1]
	add r6, r6, #2
	add r1, r4, r6
	ldr r2, _080AA4A4  @ =0x00009C53
	add r0, r2, #0
	strh r0, [r1]
	b _080AA4C4
	.byte 0x00
	.byte 0x00
_080AA468:
	.4byte gUnknown_02000400
_080AA46C:
	.4byte gRam
_080AA470:
	.4byte 0x00000A4E
_080AA474:
	.4byte gUnknown_02000402
_080AA478:
	.4byte gUnknown_0816DEE0
_080AA47C:
	.4byte 0x00007FFE
_080AA480:
	.4byte gUnknown_02000404
_080AA484:
	.4byte gUnknown_0200040A
_080AA488:
	.4byte 0xFFFF8004
_080AA48C:
	.4byte gUnknown_0200040C
_080AA490:
	.4byte 0x00000A53
_080AA494:
	.4byte gUnknown_02000406
_080AA498:
	.4byte 0x00009053
_080AA49C:
	.4byte 0x00009853
_080AA4A0:
	.4byte 0x00009453
_080AA4A4:
	.4byte 0x00009C53
_080AA4A8:
	ldr r6, _080AA4E0  @ =gUnknown_02000406
	add r0, r4, r6
	ldr r2, _080AA4E4  @ =0x000080F5
	add r1, r2, #0
	strh r1, [r0]
	add r6, r6, #2
	add r0, r4, r6
	strh r1, [r0]
	ldr r2, _080AA4E8  @ =gUnknown_0200040E
	add r0, r4, r2
	strh r1, [r0]
	add r6, r6, #8
	add r0, r4, r6
	strh r1, [r0]
_080AA4C4:
	lsl r0, r5, #1
	ldr r1, _080AA4EC  @ =gUnknown_02000412
	add r0, r0, r1
	ldr r2, _080AA4F0  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, _080AA4F4  @ =gUnknown_02000400
	add r0, r5, #0
	add r0, r0, #8
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA4E0:
	.4byte gUnknown_02000406
_080AA4E4:
	.4byte 0x000080F5
_080AA4E8:
	.4byte gUnknown_0200040E
_080AA4EC:
	.4byte gUnknown_02000412
_080AA4F0:
	.4byte 0x0000FFFF
_080AA4F4:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_080AA3EC

