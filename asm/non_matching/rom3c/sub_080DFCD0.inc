	THUMB_FUNC_START sub_080DFCD0
sub_080DFCD0: @ 0x080DFCD0
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DFD00  @ =gRam
	ldr r1, _080DFD04  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r3, _080DFD08  @ =gArrowUpgrades
	ldrb r0, [r3]
	cmp r0, #7
	bne _080DFD0C
	add r0, r4, #0
	mov r1, #155
	mov r2, sp
	bl sub_080C9564
	add r0, r4, #0
	bl sub_080E04D4
	b _080DFD3C
	.byte 0x00
	.byte 0x00
_080DFD00:
	.4byte gRam
_080DFD04:
	.4byte 0x00000F52
_080DFD08:
	.4byte gArrowUpgrades
_080DFD0C:
	add r0, r0, #1
	strb r0, [r3]
	ldr r2, _080DFD44  @ =gUnknown_0816B5A0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r6, _080DFD48  @ =0x00001AEC
	add r0, r5, r6
	strb r1, [r0]
	ldr r1, _080DFD4C  @ =gArrowFiller
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080DFD50  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #67
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #154
	mov r2, sp
	bl sub_080C9564
_080DFD3C:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DFD44:
	.4byte gUnknown_0816B5A0
_080DFD48:
	.4byte 0x00001AEC
_080DFD4C:
	.4byte gArrowFiller
_080DFD50:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DFCD0

