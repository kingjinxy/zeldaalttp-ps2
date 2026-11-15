	THUMB_FUNC_START sub_080BE5FC
sub_080BE5FC: @ 0x080BE5FC
	push {r4-r6,lr}
	ldr r0, _080BE620  @ =gRam
	ldr r1, _080BE624  @ =0x0000098F
	add r4, r0, r1
	ldrb r0, [r4]
	cmp r0, #0
	bne _080BE630
	ldr r1, _080BE628  @ =gUnknown_03003E48
	mov r0, #2
	bl sub_080679CC
	lsl r0, r0, #16
	cmp r0, #0
	beq _080BE62C
	bl sub_080698FC
	b _080BE630
	.byte 0x00
	.byte 0x00
_080BE620:
	.4byte gRam
_080BE624:
	.4byte 0x0000098F
_080BE628:
	.4byte gUnknown_03003E48
_080BE62C:
	mov r0, #1
	strb r0, [r4]
_080BE630:
	ldr r4, _080BE890  @ =0x04000208
	mov r0, #0
	strh r0, [r4]
	ldr r1, _080BE894  @ =0x040000DC
	mov r0, #0
	str r0, [r1]
	bl sub_0812A90C
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	ldr r1, _080BE898  @ =gUnknown_02002000
	bl sub_08067A04
	lsl r0, r0, #24
	lsr r5, r0, #24
	bl sub_0812A958
	mov r0, #1
	strh r0, [r4]
	ldr r0, _080BE89C  @ =gUnknown_0200247F
	ldrb r0, [r0]
	cmp r0, #1
	beq _080BE662
	mov r5, #0
_080BE662:
	lsl r0, r5, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080BE66C
	b _080BE994
_080BE66C:
	mov r5, #1
	neg r5, r5
	cmp r0, r5
	bne _080BE676
	b _080BE990
_080BE676:
	ldr r1, _080BE8A0  @ =gRam
	ldr r0, _080BE8A4  @ =gUnknown_0200236A
	ldrh r2, [r0]
	ldr r3, _080BE8A8  @ =0x0000165A
	add r0, r1, r3
	strh r2, [r0]
	ldr r0, _080BE8AC  @ =gUnknown_0200236C
	ldrh r2, [r0]
	ldr r4, _080BE8B0  @ =0x0000165C
	add r0, r1, r4
	strh r2, [r0]
	ldr r0, _080BE8B4  @ =gUnknown_0200236E
	ldrb r3, [r0]
	ldr r6, _080BE8B8  @ =0x0000165E
	add r0, r1, r6
	strb r3, [r0]
	ldr r0, _080BE8BC  @ =gUnknown_0200236F
	ldrb r2, [r0]
	add r4, r4, #3
	add r0, r1, r4
	strb r2, [r0]
	ldr r0, _080BE8C0  @ =gUnknown_02002370
	ldrb r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE8C4  @ =gUnknown_02002371
	ldrb r4, [r0]
	ldr r2, _080BE8C8  @ =0x00001661
	add r0, r1, r2
	strb r4, [r0]
	ldr r0, _080BE8CC  @ =gUnknown_02002372
	ldrb r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE8D0  @ =gUnknown_02002373
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE8D4  @ =gUnknown_02002374
	ldrh r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE8D8  @ =gUnknown_02002376
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE8DC  @ =gUnknown_02002378
	ldrb r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE8E0  @ =gUnknown_02002379
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE8E4  @ =gUnknown_0200237A
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE8E8  @ =gUnknown_0200237B
	ldrb r2, [r0]
	add r6, r6, #4
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE8EC  @ =gUnknown_0200237C
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE8F0  @ =gUnknown_0200237E
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE8F4  @ =gUnknown_02002380
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE8F8  @ =gUnknown_02002382
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE8FC  @ =gUnknown_02002384
	ldrh r2, [r0]
	add r6, r6, #12
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE900  @ =gUnknown_02002386
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE904  @ =gUnknown_02002388
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE908  @ =gUnknown_0200238A
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE90C  @ =gUnknown_0200238C
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE910  @ =gUnknown_0200238E
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE914  @ =gUnknown_02002390
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE918  @ =gUnknown_02002392
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE91C  @ =gUnknown_02002394
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE920  @ =gUnknown_02002396
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE924  @ =gUnknown_02002398
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE928  @ =gUnknown_0200239A
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE92C  @ =gUnknown_0200239C
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE930  @ =gUnknown_0200239E
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE934  @ =gUnknown_020023A0
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE938  @ =gUnknown_020023A2
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE93C  @ =gUnknown_020023A4
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE940  @ =gUnknown_020023A6
	ldrb r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE944  @ =gUnknown_020023A7
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE948  @ =gUnknown_020023A8
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE94C  @ =gUnknown_020023A9
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE950  @ =gUnknown_020023AA
	ldrh r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE954  @ =gUnknown_020023AC
	ldrh r2, [r0]
	add r6, r6, #6
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE958  @ =gUnknown_020023AE
	ldrh r2, [r0]
	sub r6, r6, #4
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE95C  @ =gUnknown_020023B0
	ldrh r2, [r0]
	add r6, r6, #2
	add r0, r1, r6
	strh r2, [r0]
	ldr r0, _080BE960  @ =gUnknown_020023B2
	ldrb r2, [r0]
	add r6, r6, #108
	add r0, r1, r6
	strb r2, [r0]
	ldr r2, _080BE964  @ =gUnknown_0201094F
	ldr r0, _080BE968  @ =gUnknown_020023B3
	ldrb r0, [r0]
	strb r0, [r2]
	add r2, r2, #16
	ldr r0, _080BE96C  @ =gUnknown_020023B4
	ldrb r0, [r0]
	strb r0, [r2]
	add r2, r2, #16
	ldr r0, _080BE970  @ =gUnknown_020023B5
	ldrb r0, [r0]
	strb r0, [r2]
	add r2, r2, #16
	ldr r0, _080BE974  @ =gUnknown_020023B6
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080BE978  @ =gUnknown_020023B7
	ldrb r2, [r0]
	sub r6, r6, #103
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE97C  @ =gUnknown_020023B8
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE980  @ =gUnknown_020023B9
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE984  @ =gUnknown_020023BA
	ldrb r2, [r0]
	add r6, r6, #1
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _080BE988  @ =gUnknown_020023BB
	ldrb r0, [r0]
	ldr r2, _080BE98C  @ =0x000016B5
	add r1, r1, r2
	strb r0, [r1]
	orr r3, r3, r4
	lsl r3, r3, #24
	cmp r3, #0
	bne _080BE88C
	b _080BE994
_080BE88C:
	mov r0, #0
	b _080BE998
_080BE890:
	.4byte 0x04000208
_080BE894:
	.4byte 0x040000DC
_080BE898:
	.4byte gUnknown_02002000
_080BE89C:
	.4byte gUnknown_0200247F
_080BE8A0:
	.4byte gRam
_080BE8A4:
	.4byte gUnknown_0200236A
_080BE8A8:
	.4byte 0x0000165A
_080BE8AC:
	.4byte gUnknown_0200236C
_080BE8B0:
	.4byte 0x0000165C
_080BE8B4:
	.4byte gUnknown_0200236E
_080BE8B8:
	.4byte 0x0000165E
_080BE8BC:
	.4byte gUnknown_0200236F
_080BE8C0:
	.4byte gUnknown_02002370
_080BE8C4:
	.4byte gUnknown_02002371
_080BE8C8:
	.4byte 0x00001661
_080BE8CC:
	.4byte gUnknown_02002372
_080BE8D0:
	.4byte gUnknown_02002373
_080BE8D4:
	.4byte gUnknown_02002374
_080BE8D8:
	.4byte gUnknown_02002376
_080BE8DC:
	.4byte gUnknown_02002378
_080BE8E0:
	.4byte gUnknown_02002379
_080BE8E4:
	.4byte gUnknown_0200237A
_080BE8E8:
	.4byte gUnknown_0200237B
_080BE8EC:
	.4byte gUnknown_0200237C
_080BE8F0:
	.4byte gUnknown_0200237E
_080BE8F4:
	.4byte gUnknown_02002380
_080BE8F8:
	.4byte gUnknown_02002382
_080BE8FC:
	.4byte gUnknown_02002384
_080BE900:
	.4byte gUnknown_02002386
_080BE904:
	.4byte gUnknown_02002388
_080BE908:
	.4byte gUnknown_0200238A
_080BE90C:
	.4byte gUnknown_0200238C
_080BE910:
	.4byte gUnknown_0200238E
_080BE914:
	.4byte gUnknown_02002390
_080BE918:
	.4byte gUnknown_02002392
_080BE91C:
	.4byte gUnknown_02002394
_080BE920:
	.4byte gUnknown_02002396
_080BE924:
	.4byte gUnknown_02002398
_080BE928:
	.4byte gUnknown_0200239A
_080BE92C:
	.4byte gUnknown_0200239C
_080BE930:
	.4byte gUnknown_0200239E
_080BE934:
	.4byte gUnknown_020023A0
_080BE938:
	.4byte gUnknown_020023A2
_080BE93C:
	.4byte gUnknown_020023A4
_080BE940:
	.4byte gUnknown_020023A6
_080BE944:
	.4byte gUnknown_020023A7
_080BE948:
	.4byte gUnknown_020023A8
_080BE94C:
	.4byte gUnknown_020023A9
_080BE950:
	.4byte gUnknown_020023AA
_080BE954:
	.4byte gUnknown_020023AC
_080BE958:
	.4byte gUnknown_020023AE
_080BE95C:
	.4byte gUnknown_020023B0
_080BE960:
	.4byte gUnknown_020023B2
_080BE964:
	.4byte gUnknown_0201094F
_080BE968:
	.4byte gUnknown_020023B3
_080BE96C:
	.4byte gUnknown_020023B4
_080BE970:
	.4byte gUnknown_020023B5
_080BE974:
	.4byte gUnknown_020023B6
_080BE978:
	.4byte gUnknown_020023B7
_080BE97C:
	.4byte gUnknown_020023B8
_080BE980:
	.4byte gUnknown_020023B9
_080BE984:
	.4byte gUnknown_020023BA
_080BE988:
	.4byte gUnknown_020023BB
_080BE98C:
	.4byte 0x000016B5
_080BE990:
	bl sub_080698FC
_080BE994:
	mov r0, #1
	neg r0, r0
_080BE998:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BE5FC

	.byte 0x00
	.byte 0x00
