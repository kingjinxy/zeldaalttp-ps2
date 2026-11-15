	THUMB_FUNC_START sub_080DFB6C
sub_080DFB6C: @ 0x080DFB6C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DFB9C  @ =gRam
	ldr r0, _080DFBA0  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r3, _080DFBA4  @ =gBombUpgrades
	ldrb r0, [r3]
	cmp r0, #7
	bne _080DFBA8
	add r0, r4, #0
	mov r1, #155
	mov r2, sp
	bl sub_080C9564
	add r0, r4, #0
	bl sub_080E04D4
	b _080DFBD8
_080DFB9C:
	.4byte gRam
_080DFBA0:
	.4byte 0x00000F52
_080DFBA4:
	.4byte gBombUpgrades
_080DFBA8:
	add r0, r0, #1
	strb r0, [r3]
	ldr r2, _080DFBE0  @ =gUnknown_0816B590
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r6, _080DFBE4  @ =0x00001AEC
	add r0, r5, r6
	strb r1, [r0]
	ldr r1, _080DFBE8  @ =gBombFiller
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080DFBEC  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #39
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #153
	mov r2, sp
	bl sub_080C9564
_080DFBD8:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DFBE0:
	.4byte gUnknown_0816B590
_080DFBE4:
	.4byte 0x00001AEC
_080DFBE8:
	.4byte gBombFiller
_080DFBEC:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DFB6C

