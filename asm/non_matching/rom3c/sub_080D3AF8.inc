	THUMB_FUNC_START sub_080D3AF8
sub_080D3AF8: @ 0x080D3AF8
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080D3B34  @ =gRam
	ldr r1, _080D3B38  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080D3B3C  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D3B40  @ =0x00000965
	add r0, r4, r1
	strb r2, [r0]
	mov r1, #179
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080D3B44
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strh r2, [r0]
	b _080D3C50
_080D3B34:
	.4byte gRam
_080D3B38:
	.4byte 0x00000F92
_080D3B3C:
	.4byte 0x00000F52
_080D3B40:
	.4byte 0x00000965
_080D3B44:
	ldr r0, _080D3C6C  @ =gBookOfMudora
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3B56
	mov r0, #2
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3B56:
	ldr r0, _080D3C70  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080D3B6C
	mov r0, #1
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3B6C:
	ldr r0, _080D3C74  @ =gMagicPowder
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080D3B7E
	mov r0, #3
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3B7E:
	ldr r0, _080D3C78  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3B90
	mov r0, #4
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3B90:
	ldr r0, _080D3C7C  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3BA2
	mov r0, #5
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3BA2:
	ldr r2, _080D3C80  @ =0x0000165E
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080D3BB6
	mov r0, #6
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3BB6:
	ldr r0, _080D3C84  @ =gMagicUsage
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3BC8
	mov r0, #7
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3BC8:
	ldr r0, _080D3C88  @ =gBombosMedallion
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3BDA
	mov r0, #8
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3BDA:
	ldr r0, _080D3C8C  @ =0x00001662
	add r4, r4, r0
	ldrb r1, [r4]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	bne _080D3BF2
	mov r0, #9
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3BF2:
	ldrb r1, [r4]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _080D3C06
	mov r0, #10
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3C06:
	ldr r0, _080D3C90  @ =gMagicCape
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D3C18
	mov r0, #11
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3C18:
	ldr r0, _080D3C94  @ =gUnknown_020022DB
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080D3C2E
	mov r0, #12
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3C2E:
	ldr r0, _080D3C98  @ =gSword
	ldrb r0, [r0]
	cmp r0, #3
	bhi _080D3C40
	mov r0, #13
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
_080D3C40:
	mov r0, #14
	bl sub_080D3CD4
	cmp r0, #0
	bne _080D3C50
	mov r0, #15
	bl sub_080D3CD4
_080D3C50:
	ldr r3, _080D3C9C  @ =gRam
	ldr r1, _080D3CA0  @ =0x0000165F
	add r2, r3, r1
	ldrb r0, [r2]
	mov r1, #64
	eor r0, r0, r1
	strb r0, [r2]
	mov r1, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080D3CAC
	ldr r1, _080D3CA4  @ =gUnknown_08174F0C
	ldr r2, _080D3CA8  @ =0x00000961
	b _080D3CB2
_080D3C6C:
	.4byte gBookOfMudora
_080D3C70:
	.4byte gPendantCount
_080D3C74:
	.4byte gMagicPowder
_080D3C78:
	.4byte gFlippers
_080D3C7C:
	.4byte gMoonPearl
_080D3C80:
	.4byte 0x0000165E
_080D3C84:
	.4byte gMagicUsage
_080D3C88:
	.4byte gBombosMedallion
_080D3C8C:
	.4byte 0x00001662
_080D3C90:
	.4byte gMagicCape
_080D3C94:
	.4byte gUnknown_020022DB
_080D3C98:
	.4byte gSword
_080D3C9C:
	.4byte gRam
_080D3CA0:
	.4byte 0x0000165F
_080D3CA4:
	.4byte gUnknown_08174F0C
_080D3CA8:
	.4byte 0x00000961
_080D3CAC:
	ldr r1, _080D3CD0  @ =gUnknown_08174F0C
	mov r2, #150
	lsl r2, r2, #4
_080D3CB2:
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080D3CD0:
	.4byte gUnknown_08174F0C
	THUMB_FUNC_END sub_080D3AF8

