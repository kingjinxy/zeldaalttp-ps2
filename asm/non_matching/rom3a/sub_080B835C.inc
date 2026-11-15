	THUMB_FUNC_START sub_080B835C
sub_080B835C: @ 0x080B835C
	push {r4-r7,lr}
	ldr r5, _080B83CC  @ =gRam
	ldr r1, _080B83D0  @ =gUnknown_0817064C
	ldr r2, _080B83D4  @ =0x000009AD
	add r0, r5, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldr r3, _080B83D8  @ =0x00000A1C
	add r4, r5, r3
	mov r7, #0
	strh r0, [r4]
	bl sub_08078840
	ldr r0, _080B83DC  @ =0x00000516
	add r3, r5, r0
	ldrh r0, [r3]
	ldr r6, _080B83E0  @ =0x0000FFFC
	add r2, r6, #0
	and r2, r2, r0
	mov r1, #2
	mov r12, r1
	mov r0, r12
	orr r2, r2, r0
	orr r2, r2, r7
	strh r2, [r3]
	ldrh r0, [r4]
	cmp r0, #155
	bne _080B83FC
	ldr r2, _080B83E4  @ =0x0000051E
	add r1, r5, r2
	ldr r0, _080B83E8  @ =0x00003C42
	strh r0, [r1]
	ldr r3, _080B83EC  @ =0x00000998
	add r1, r5, r3
	mov r0, #14
	strb r0, [r1]
	ldr r4, _080B83F0  @ =0x00000999
	add r1, r5, r4
	mov r0, #16
	strb r0, [r1]
	ldr r0, _080B83F4  @ =0x00000514
	add r2, r5, r0
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	strh r0, [r2]
	ldr r2, _080B83F8  @ =gUnknown_020020CA
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r3, #0
	orr r0, r0, r1
	b _080B84AE
_080B83CC:
	.4byte gRam
_080B83D0:
	.4byte gUnknown_0817064C
_080B83D4:
	.4byte 0x000009AD
_080B83D8:
	.4byte 0x00000A1C
_080B83DC:
	.4byte 0x00000516
_080B83E0:
	.4byte 0x0000FFFC
_080B83E4:
	.4byte 0x0000051E
_080B83E8:
	.4byte 0x00003C42
_080B83EC:
	.4byte 0x00000998
_080B83F0:
	.4byte 0x00000999
_080B83F4:
	.4byte 0x00000514
_080B83F8:
	.4byte gUnknown_020020CA
_080B83FC:
	cmp r0, #156
	bne _080B843C
	ldr r4, _080B8428  @ =0x0000051E
	add r1, r5, r4
	ldr r0, _080B842C  @ =0x00003C42
	strh r0, [r1]
	ldr r0, _080B8430  @ =0x00000998
	add r1, r5, r0
	mov r0, #14
	strb r0, [r1]
	ldr r2, _080B8434  @ =0x00000999
	add r1, r5, r2
	mov r0, #16
	strb r0, [r1]
	ldr r3, _080B8438  @ =0x00000514
	add r2, r5, r3
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	b _080B84AE
_080B8428:
	.4byte 0x0000051E
_080B842C:
	.4byte 0x00003C42
_080B8430:
	.4byte 0x00000998
_080B8434:
	.4byte 0x00000999
_080B8438:
	.4byte 0x00000514
_080B843C:
	cmp r0, #157
	bne _080B8484
	ldr r4, _080B8470  @ =0x0000051E
	add r1, r5, r4
	ldr r0, _080B8474  @ =0x00003C42
	strh r0, [r1]
	ldr r1, _080B8478  @ =0x00000998
	add r0, r5, r1
	mov r1, #8
	strb r1, [r0]
	ldr r4, _080B847C  @ =0x00000999
	add r0, r5, r4
	strb r1, [r0]
	and r2, r2, r6
	mov r0, #3
	orr r2, r2, r0
	strh r2, [r3]
	ldr r0, _080B8480  @ =0x00000514
	add r2, r5, r0
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	mov r1, r12
	orr r0, r0, r1
	b _080B84AE
	.byte 0x00
	.byte 0x00
_080B8470:
	.4byte 0x0000051E
_080B8474:
	.4byte 0x00003C42
_080B8478:
	.4byte 0x00000998
_080B847C:
	.4byte 0x00000999
_080B8480:
	.4byte 0x00000514
_080B8484:
	cmp r0, #158
	bne _080B84B0
	ldr r2, _080B856C  @ =0x000009E5
	add r1, r5, r2
	mov r0, #4
	strb r0, [r1]
	ldr r3, _080B8570  @ =0x00000514
	add r2, r5, r3
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	mov r3, #1
	orr r0, r0, r3
	strh r0, [r2]
	mov r4, #163
	lsl r4, r4, #3
	add r2, r5, r4
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	orr r0, r0, r3
_080B84AE:
	strh r0, [r2]
_080B84B0:
	ldr r5, _080B8574  @ =gRam
	ldr r1, _080B8578  @ =0x00000B02
	add r0, r5, r1
	mov r7, #0
	mov r1, #0
	strh r1, [r0]
	mov r2, #176
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	bl sub_08079204
	bl sub_08092874
	ldr r1, _080B857C  @ =gUnknown_0814CE1C
	ldr r3, _080B8580  @ =0x00000C99
	add r0, r5, r3
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_0812FCDC
	bl sub_080836B8
	ldr r4, _080B8584  @ =0x000009AD
	add r6, r5, r4
	ldrb r1, [r6]
	lsr r1, r1, #1
	ldr r0, _080B8588  @ =gUnknown_08170698
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r3, _080B858C  @ =0x00000C9B
	add r0, r5, r3
	strb r2, [r0]
	ldr r0, _080B8590  @ =gUnknown_081706BE
	add r1, r1, r0
	ldrb r1, [r1]
	lsl r1, r1, #26
	lsr r1, r1, #24
	ldr r3, _080B8594  @ =gUnknown_0822BC6C
	add r0, r1, #2
	add r0, r0, r3
	ldrb r2, [r0]
	ldr r4, _080B8598  @ =0x00000CA5
	add r0, r5, r4
	strb r2, [r0]
	add r1, r1, #3
	add r1, r1, r3
	ldrb r1, [r1]
	ldr r2, _080B859C  @ =0x00000CA6
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _080B85A0  @ =0x00000C9C
	add r1, r5, r3
	mov r4, #10
	mov r0, #10
	strh r0, [r1]
	bl sub_0812E8DC
	ldr r1, _080B85A4  @ =0x00000CA9
	add r0, r5, r1
	strb r4, [r0]
	bl sub_08079540
	ldr r2, _080B85A8  @ =0x00000A1C
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #159
	bne _080B853E
	bl sub_08132F78
_080B853E:
	ldr r3, _080B85AC  @ =0x000009CE
	add r1, r5, r3
	mov r0, #9
	strb r0, [r1]
	ldr r4, _080B85B0  @ =0x00000A02
	add r0, r5, r4
	strb r7, [r0]
	ldr r1, _080B85B4  @ =0x00000A03
	add r0, r5, r1
	strb r7, [r0]
	mov r2, #152
	lsl r2, r2, #4
	add r0, r5, r2
	strb r7, [r0]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	bl sub_080B85B8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B856C:
	.4byte 0x000009E5
_080B8570:
	.4byte 0x00000514
_080B8574:
	.4byte gRam
_080B8578:
	.4byte 0x00000B02
_080B857C:
	.4byte gUnknown_0814CE1C
_080B8580:
	.4byte 0x00000C99
_080B8584:
	.4byte 0x000009AD
_080B8588:
	.4byte gUnknown_08170698
_080B858C:
	.4byte 0x00000C9B
_080B8590:
	.4byte gUnknown_081706BE
_080B8594:
	.4byte gUnknown_0822BC6C
_080B8598:
	.4byte 0x00000CA5
_080B859C:
	.4byte 0x00000CA6
_080B85A0:
	.4byte 0x00000C9C
_080B85A4:
	.4byte 0x00000CA9
_080B85A8:
	.4byte 0x00000A1C
_080B85AC:
	.4byte 0x000009CE
_080B85B0:
	.4byte 0x00000A02
_080B85B4:
	.4byte 0x00000A03
	THUMB_FUNC_END sub_080B835C

