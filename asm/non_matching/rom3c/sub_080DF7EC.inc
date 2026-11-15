	THUMB_FUNC_START sub_080DF7EC
sub_080DF7EC: @ 0x080DF7EC
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _080DF80C  @ =gRam
	ldr r2, _080DF810  @ =0x00001AE2
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DF814
	add r0, r1, #0
	bl sub_080E03B4
	b _080DF864
	.byte 0x00
	.byte 0x00
_080DF80C:
	.4byte gRam
_080DF810:
	.4byte 0x00001AE2
_080DF814:
	ldr r0, _080DF86C  @ =gBombUpgrades
	ldr r1, _080DF870  @ =gArrowUpgrades
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r3, r0, #0
	orr r3, r3, r2
	cmp r3, #0
	beq _080DF826
	mov r3, #2
_080DF826:
	ldr r6, _080DF874  @ =0x00000F92
	add r0, r5, r6
	add r0, r4, r0
	strb r3, [r0]
	ldr r2, _080DF878  @ =gUnknown_08176688
	add r0, r3, r2
	ldrb r1, [r0]
	ldr r6, _080DF87C  @ =0x00001AEC
	add r0, r5, r6
	strb r1, [r0]
	add r0, r3, #1
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r2, _080DF880  @ =0x00001AED
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _080DF884  @ =0x00000151
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r6, _080DF888  @ =0x00000F52
	add r1, r5, r6
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080DF88C  @ =0x00001770
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
_080DF864:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DF86C:
	.4byte gBombUpgrades
_080DF870:
	.4byte gArrowUpgrades
_080DF874:
	.4byte 0x00000F92
_080DF878:
	.4byte gUnknown_08176688
_080DF87C:
	.4byte 0x00001AEC
_080DF880:
	.4byte 0x00001AED
_080DF884:
	.4byte 0x00000151
_080DF888:
	.4byte 0x00000F52
_080DF88C:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080DF7EC

