	THUMB_FUNC_START sub_080A75FC
sub_080A75FC: @ 0x080A75FC
	push {r4,lr}
	ldr r0, _080A7698  @ =gMagicUsage
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A761E
	ldr r1, _080A769C  @ =gUnknown_0200B182
	ldr r2, _080A76A0  @ =0x0000B0F7
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _080A76A4  @ =0x0000B051
	add r0, r3, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r4, _080A76A8  @ =0x0000B0FA
	add r0, r4, #0
	strh r0, [r1]
_080A761E:
	ldr r0, _080A76AC  @ =gMagicMeter
	ldrb r0, [r0]
	add r0, r0, #7
	ldr r1, _080A76B0  @ =0x0000FFF8
	and r0, r0, r1
	ldr r3, _080A76B4  @ =gUnknown_0200B1C4
	ldr r2, _080A76B8  @ =gUnknown_0816B7E8
	lsr r1, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r3]
	add r3, r3, #64
	add r0, r1, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r3]
	add r3, r3, #64
	add r0, r1, #2
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r3]
	add r3, r3, #64
	add r1, r1, #3
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A76BC  @ =gRupeesCounter
	ldrh r0, [r0]
	bl sub_080A78A8
	ldr r0, _080A76C0  @ =gRupeesCount
	ldrh r1, [r0]
	ldr r0, _080A76C4  @ =0x000003E7
	cmp r1, r0
	bne _080A76E0
	ldr r3, _080A76C8  @ =gUnknown_0200B1CA
	ldr r1, _080A76CC  @ =gRam
	ldr r2, _080A76D0  @ =0x00000965
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r4, _080A76D4  @ =0xFFFF8000
	add r2, r4, #0
	orr r0, r0, r2
	strh r0, [r3]
	add r3, r3, #2
	ldr r4, _080A76D8  @ =0x00000968
	add r0, r1, r4
	ldrb r0, [r0]
	orr r0, r0, r2
	strh r0, [r3]
	add r3, r3, #2
	ldr r0, _080A76DC  @ =0x00000969
	add r1, r1, r0
	ldrb r0, [r1]
	orr r0, r0, r2
	strh r0, [r3]
	b _080A7700
	.byte 0x00
	.byte 0x00
_080A7698:
	.4byte gMagicUsage
_080A769C:
	.4byte gUnknown_0200B182
_080A76A0:
	.4byte 0x0000B0F7
_080A76A4:
	.4byte 0x0000B051
_080A76A8:
	.4byte 0x0000B0FA
_080A76AC:
	.4byte gMagicMeter
_080A76B0:
	.4byte 0x0000FFF8
_080A76B4:
	.4byte gUnknown_0200B1C4
_080A76B8:
	.4byte gUnknown_0816B7E8
_080A76BC:
	.4byte gRupeesCounter
_080A76C0:
	.4byte gRupeesCount
_080A76C4:
	.4byte 0x000003E7
_080A76C8:
	.4byte gUnknown_0200B1CA
_080A76CC:
	.4byte gRam
_080A76D0:
	.4byte 0x00000965
_080A76D4:
	.4byte 0xFFFF8000
_080A76D8:
	.4byte 0x00000968
_080A76DC:
	.4byte 0x00000969
_080A76E0:
	ldr r2, _080A7738  @ =gUnknown_0200B1CA
	ldr r1, _080A773C  @ =gRam
	ldr r3, _080A7740  @ =0x00000965
	add r0, r1, r3
	ldrb r0, [r0]
	strh r0, [r2]
	add r2, r2, #2
	ldr r4, _080A7744  @ =0x00000968
	add r0, r1, r4
	ldrb r0, [r0]
	strh r0, [r2]
	add r2, r2, #2
	ldr r0, _080A7748  @ =0x00000969
	add r1, r1, r0
	ldrb r0, [r1]
	strh r0, [r2]
_080A7700:
	ldr r4, _080A774C  @ =gBombs
	ldrb r0, [r4]
	bl sub_080A78A8
	ldr r1, _080A7750  @ =gUnknown_0816B588
	ldr r0, _080A7754  @ =gBombUpgrades
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r4]
	ldrb r0, [r0]
	cmp r1, r0
	bne _080A7760
	ldr r3, _080A7758  @ =gUnknown_0200B1D2
	ldr r1, _080A773C  @ =gRam
	ldr r2, _080A7744  @ =0x00000968
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r4, _080A775C  @ =0xFFFF8000
	add r2, r4, #0
	orr r0, r0, r2
	strh r0, [r3]
	add r3, r3, #2
	ldr r0, _080A7748  @ =0x00000969
	add r1, r1, r0
	ldrb r0, [r1]
	orr r0, r0, r2
	strh r0, [r3]
	b _080A7776
_080A7738:
	.4byte gUnknown_0200B1CA
_080A773C:
	.4byte gRam
_080A7740:
	.4byte 0x00000965
_080A7744:
	.4byte 0x00000968
_080A7748:
	.4byte 0x00000969
_080A774C:
	.4byte gBombs
_080A7750:
	.4byte gUnknown_0816B588
_080A7754:
	.4byte gBombUpgrades
_080A7758:
	.4byte gUnknown_0200B1D2
_080A775C:
	.4byte 0xFFFF8000
_080A7760:
	ldr r2, _080A77B0  @ =gUnknown_0200B1D2
	ldr r1, _080A77B4  @ =gRam
	ldr r3, _080A77B8  @ =0x00000968
	add r0, r1, r3
	ldrb r0, [r0]
	strh r0, [r2]
	add r2, r2, #2
	ldr r4, _080A77BC  @ =0x00000969
	add r1, r1, r4
	ldrb r0, [r1]
	strh r0, [r2]
_080A7776:
	ldr r4, _080A77C0  @ =gArrowCount
	ldrb r0, [r4]
	bl sub_080A78A8
	ldr r1, _080A77C4  @ =gUnknown_0816B598
	ldr r0, _080A77C8  @ =gArrowUpgrades
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r4]
	ldrb r0, [r0]
	cmp r1, r0
	bne _080A77D4
	ldr r3, _080A77CC  @ =gUnknown_0200B1D8
	ldr r1, _080A77B4  @ =gRam
	ldr r2, _080A77B8  @ =0x00000968
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r4, _080A77D0  @ =0xFFFF8000
	add r2, r4, #0
	orr r0, r0, r2
	strh r0, [r3]
	add r3, r3, #2
	ldr r4, _080A77BC  @ =0x00000969
	add r0, r1, r4
	ldrb r0, [r0]
	orr r0, r0, r2
	strh r0, [r3]
	b _080A77EA
	.byte 0x00
	.byte 0x00
_080A77B0:
	.4byte gUnknown_0200B1D2
_080A77B4:
	.4byte gRam
_080A77B8:
	.4byte 0x00000968
_080A77BC:
	.4byte 0x00000969
_080A77C0:
	.4byte gArrowCount
_080A77C4:
	.4byte gUnknown_0816B598
_080A77C8:
	.4byte gArrowUpgrades
_080A77CC:
	.4byte gUnknown_0200B1D8
_080A77D0:
	.4byte 0xFFFF8000
_080A77D4:
	ldr r2, _080A7814  @ =gUnknown_0200B1D8
	ldr r1, _080A7818  @ =gRam
	ldr r3, _080A781C  @ =0x00000968
	add r0, r1, r3
	ldrb r0, [r0]
	strh r0, [r2]
	add r2, r2, #2
	ldr r4, _080A7820  @ =0x00000969
	add r0, r1, r4
	ldrb r0, [r0]
	strh r0, [r2]
_080A77EA:
	ldr r0, _080A7820  @ =0x00000969
	add r4, r1, r0
	mov r0, #127
	strb r0, [r4]
	ldr r0, _080A7824  @ =gKeyCount
	ldrb r0, [r0]
	cmp r0, #255
	beq _080A77FE
	bl sub_080A78A8
_080A77FE:
	ldr r1, _080A7828  @ =gUnknown_0200B1DE
	ldrb r0, [r4]
	strh r0, [r1]
	add r1, r0, #0
	cmp r1, #127
	bne _080A780E
	ldr r0, _080A782C  @ =gUnknown_0200B19E
	strh r1, [r0]
_080A780E:
	pop {r4}
	pop {r0}
	bx r0
_080A7814:
	.4byte gUnknown_0200B1D8
_080A7818:
	.4byte gRam
_080A781C:
	.4byte 0x00000968
_080A7820:
	.4byte 0x00000969
_080A7824:
	.4byte gKeyCount
_080A7828:
	.4byte gUnknown_0200B1DE
_080A782C:
	.4byte gUnknown_0200B19E
	THUMB_FUNC_END sub_080A75FC

