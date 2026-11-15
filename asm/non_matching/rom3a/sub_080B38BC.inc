	THUMB_FUNC_START sub_080B38BC
sub_080B38BC: @ 0x080B38BC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _080B3904  @ =gUnknown_083BFDC4
	ldr r1, _080B3908  @ =0x0600F000
	bl LZ77UnCompVram
	ldr r4, _080B390C  @ =gUnknown_0816EFA4
	ldr r3, _080B3910  @ =gRam
	ldr r1, _080B3914  @ =0x00000AB2
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r4
	ldrb r0, [r0]
	cmp r0, #255
	bne _080B38E4
	b _080B3B70
_080B38E4:
	ldr r0, _080B3918  @ =gUnknown_02000400
	ldrh r7, [r0]
	ldr r2, _080B391C  @ =0x0000098E
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #5
	bne _080B38F8
	b _080B3A08
_080B38F8:
	cmp r0, #5
	bgt _080B3920
	cmp r0, #3
	beq _080B3926
	b _080B3A88
	.byte 0x00
	.byte 0x00
_080B3904:
	.4byte gUnknown_083BFDC4
_080B3908:
	.4byte 0x0600F000
_080B390C:
	.4byte gUnknown_0816EFA4
_080B3910:
	.4byte gRam
_080B3914:
	.4byte 0x00000AB2
_080B3918:
	.4byte gUnknown_02000400
_080B391C:
	.4byte 0x0000098E
_080B3920:
	cmp r0, #6
	beq _080B3926
	b _080B3A88
_080B3926:
	lsl r2, r7, #1
	ldr r3, _080B39C4  @ =gUnknown_02000402
	add r1, r2, r3
	ldr r4, _080B39C8  @ =0x0000F045
	add r0, r4, #0
	strh r0, [r1]
	ldr r5, _080B39CC  @ =gUnknown_02000414
	add r1, r2, r5
	ldr r3, _080B39D0  @ =0x0000F085
	add r0, r3, #0
	strh r0, [r1]
	ldr r4, _080B39D4  @ =gUnknown_02000404
	add r0, r2, r4
	mov r1, #7
	strh r1, [r0]
	add r5, r5, #2
	add r0, r2, r5
	strh r1, [r0]
	ldr r0, _080B39D8  @ =gUnknown_0816EFA4
	mov r8, r0
	add r6, r2, #0
	ldr r1, _080B39DC  @ =gUnknown_0816EF84
	mov r9, r1
	ldr r2, _080B39E0  @ =gUnknown_0816EF94
	mov r10, r2
	add r7, r7, #18
	mov r12, r7
	ldr r5, _080B39E4  @ =gUnknown_0816EF58
	ldr r3, _080B39E8  @ =gUnknown_02000406
	add r4, r6, r3
	add r3, r6, #0
	ldr r7, _080B39EC  @ =gUnknown_02000418
	mov r2, #5
_080B3968:
	ldrh r0, [r5]
	strh r0, [r4]
	add r1, r3, r7
	ldrh r0, [r5, #12]
	strh r0, [r1]
	add r5, r5, #2
	add r4, r4, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _080B3968
	ldr r4, _080B39F0  @ =gUnknown_02000412
	add r2, r6, r4
	ldr r5, _080B39F4  @ =gRam
	ldr r0, _080B39F8  @ =0x00000AB2
	add r1, r5, r0
	ldrh r0, [r1]
	lsr r0, r0, #1
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r3, _080B39FC  @ =gUnknown_02000424
	add r2, r6, r3
	ldrh r0, [r1]
	lsr r0, r0, #1
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r0, [r0]
	strh r0, [r2]
	add r4, r4, #20
	add r1, r6, r4
	ldr r5, _080B3A00  @ =0x0000FFFF
	add r0, r5, #0
	strh r0, [r1]
	ldr r0, _080B3A04  @ =gUnknown_02000400
	mov r1, r12
	strh r1, [r0]
	b _080B3BDC
	.byte 0x00
	.byte 0x00
_080B39C4:
	.4byte gUnknown_02000402
_080B39C8:
	.4byte 0x0000F045
_080B39CC:
	.4byte gUnknown_02000414
_080B39D0:
	.4byte 0x0000F085
_080B39D4:
	.4byte gUnknown_02000404
_080B39D8:
	.4byte gUnknown_0816EFA4
_080B39DC:
	.4byte gUnknown_0816EF84
_080B39E0:
	.4byte gUnknown_0816EF94
_080B39E4:
	.4byte gUnknown_0816EF58
_080B39E8:
	.4byte gUnknown_02000406
_080B39EC:
	.4byte gUnknown_02000418
_080B39F0:
	.4byte gUnknown_02000412
_080B39F4:
	.4byte gRam
_080B39F8:
	.4byte 0x00000AB2
_080B39FC:
	.4byte gUnknown_02000424
_080B3A00:
	.4byte 0x0000FFFF
_080B3A04:
	.4byte gUnknown_02000400
_080B3A08:
	lsl r2, r7, #1
	ldr r5, _080B3A60  @ =gUnknown_02000402
	add r1, r2, r5
	ldr r5, _080B3A64  @ =0x0000F046
	add r0, r5, #0
	strh r0, [r1]
	ldr r0, _080B3A68  @ =gUnknown_02000412
	add r1, r2, r0
	add r5, r5, #64
	add r0, r5, #0
	strh r0, [r1]
	ldr r1, _080B3A6C  @ =gUnknown_02000404
	add r0, r2, r1
	mov r1, #6
	strh r1, [r0]
	ldr r5, _080B3A70  @ =gUnknown_02000414
	add r0, r2, r5
	strh r1, [r0]
	mov r8, r4
	add r6, r2, #0
	ldr r0, _080B3A74  @ =gUnknown_0816EF84
	mov r9, r0
	ldr r1, _080B3A78  @ =gUnknown_0816EF94
	mov r10, r1
	add r7, r7, #16
	mov r12, r7
	ldr r5, _080B3A7C  @ =gUnknown_0816EF70
	ldr r2, _080B3A80  @ =gUnknown_02000406
	add r4, r6, r2
	add r3, r6, #0
	ldr r7, _080B3A84  @ =gUnknown_02000416
	mov r2, #4
_080B3A48:
	ldrh r0, [r5]
	strh r0, [r4]
	add r1, r3, r7
	ldrh r0, [r5, #10]
	strh r0, [r1]
	add r5, r5, #2
	add r4, r4, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _080B3A48
	b _080B3AE0
_080B3A60:
	.4byte gUnknown_02000402
_080B3A64:
	.4byte 0x0000F046
_080B3A68:
	.4byte gUnknown_02000412
_080B3A6C:
	.4byte gUnknown_02000404
_080B3A70:
	.4byte gUnknown_02000414
_080B3A74:
	.4byte gUnknown_0816EF84
_080B3A78:
	.4byte gUnknown_0816EF94
_080B3A7C:
	.4byte gUnknown_0816EF70
_080B3A80:
	.4byte gUnknown_02000406
_080B3A84:
	.4byte gUnknown_02000416
_080B3A88:
	lsl r2, r7, #1
	ldr r5, _080B3B24  @ =gUnknown_02000402
	add r1, r2, r5
	ldr r3, _080B3B28  @ =0x0000F046
	add r0, r3, #0
	strh r0, [r1]
	ldr r4, _080B3B2C  @ =gUnknown_02000412
	add r1, r2, r4
	ldr r5, _080B3B30  @ =0x0000F086
	add r0, r5, #0
	strh r0, [r1]
	ldr r1, _080B3B34  @ =gUnknown_02000404
	add r0, r2, r1
	mov r1, #6
	strh r1, [r0]
	ldr r3, _080B3B38  @ =gUnknown_02000414
	add r0, r2, r3
	strh r1, [r0]
	ldr r4, _080B3B3C  @ =gUnknown_0816EFA4
	mov r8, r4
	add r6, r2, #0
	ldr r5, _080B3B40  @ =gUnknown_0816EF84
	mov r9, r5
	ldr r0, _080B3B44  @ =gUnknown_0816EF94
	mov r10, r0
	add r7, r7, #16
	mov r12, r7
	ldr r5, _080B3B48  @ =gUnknown_0816EF44
	ldr r1, _080B3B4C  @ =gUnknown_02000406
	add r4, r6, r1
	add r3, r6, #0
	ldr r7, _080B3B50  @ =gUnknown_02000416
	mov r2, #4
_080B3ACA:
	ldrh r0, [r5]
	strh r0, [r4]
	add r1, r3, r7
	ldrh r0, [r5, #10]
	strh r0, [r1]
	add r5, r5, #2
	add r4, r4, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _080B3ACA
_080B3AE0:
	ldr r3, _080B3B54  @ =gUnknown_02000410
	add r2, r6, r3
	ldr r4, _080B3B58  @ =gRam
	ldr r5, _080B3B5C  @ =0x00000AB2
	add r1, r4, r5
	ldrh r0, [r1]
	lsr r0, r0, #1
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r0, _080B3B60  @ =gUnknown_02000420
	add r2, r6, r0
	ldrh r0, [r1]
	lsr r0, r0, #1
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r10
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r2, _080B3B64  @ =gUnknown_02000422
	add r1, r6, r2
	ldr r3, _080B3B68  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	ldr r0, _080B3B6C  @ =gUnknown_02000400
	mov r4, r12
	strh r4, [r0]
	b _080B3BDC
_080B3B24:
	.4byte gUnknown_02000402
_080B3B28:
	.4byte 0x0000F046
_080B3B2C:
	.4byte gUnknown_02000412
_080B3B30:
	.4byte 0x0000F086
_080B3B34:
	.4byte gUnknown_02000404
_080B3B38:
	.4byte gUnknown_02000414
_080B3B3C:
	.4byte gUnknown_0816EFA4
_080B3B40:
	.4byte gUnknown_0816EF84
_080B3B44:
	.4byte gUnknown_0816EF94
_080B3B48:
	.4byte gUnknown_0816EF44
_080B3B4C:
	.4byte gUnknown_02000406
_080B3B50:
	.4byte gUnknown_02000416
_080B3B54:
	.4byte gUnknown_02000410
_080B3B58:
	.4byte gRam
_080B3B5C:
	.4byte 0x00000AB2
_080B3B60:
	.4byte gUnknown_02000420
_080B3B64:
	.4byte gUnknown_02000422
_080B3B68:
	.4byte 0x0000FFFF
_080B3B6C:
	.4byte gUnknown_02000400
_080B3B70:
	ldr r5, _080B3BF8  @ =0x0000098E
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #2
	bls _080B3BDC
	ldr r0, _080B3BFC  @ =gUnknown_02000400
	ldrh r7, [r0]
	lsl r2, r7, #1
	add r0, r0, #2
	add r1, r2, r0
	ldr r3, _080B3C00  @ =0x0000F044
	add r0, r3, #0
	strh r0, [r1]
	ldr r4, _080B3C04  @ =gUnknown_02000404
	add r0, r2, r4
	mov r3, #8
	strh r3, [r0]
	ldr r5, _080B3C08  @ =gUnknown_02000416
	add r1, r2, r5
	ldr r4, _080B3C0C  @ =0x0000F084
	add r0, r4, #0
	strh r0, [r1]
	add r5, r5, #2
	add r0, r2, r5
	strh r3, [r0]
	add r6, r2, #0
	ldr r5, _080B3C10  @ =gUnknown_0816EF24
	ldr r0, _080B3C14  @ =gUnknown_02000406
	add r4, r6, r0
	add r3, r6, #0
	ldr r1, _080B3C18  @ =gUnknown_0200041A
	mov r12, r1
	mov r2, #7
_080B3BB2:
	ldrh r0, [r5]
	strh r0, [r4]
	mov r0, r12
	add r1, r3, r0
	ldrh r0, [r5, #16]
	strh r0, [r1]
	add r5, r5, #2
	add r4, r4, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _080B3BB2
	ldr r2, _080B3C1C  @ =gUnknown_0200042A
	add r1, r6, r2
	ldr r3, _080B3C20  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	ldr r1, _080B3BFC  @ =gUnknown_02000400
	add r0, r7, #0
	add r0, r0, #20
	strh r0, [r1]
_080B3BDC:
	ldr r4, _080B3C24  @ =gRam
	ldr r5, _080B3C28  @ =0x00000A5A
	add r1, r4, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B3BF8:
	.4byte 0x0000098E
_080B3BFC:
	.4byte gUnknown_02000400
_080B3C00:
	.4byte 0x0000F044
_080B3C04:
	.4byte gUnknown_02000404
_080B3C08:
	.4byte gUnknown_02000416
_080B3C0C:
	.4byte 0x0000F084
_080B3C10:
	.4byte gUnknown_0816EF24
_080B3C14:
	.4byte gUnknown_02000406
_080B3C18:
	.4byte gUnknown_0200041A
_080B3C1C:
	.4byte gUnknown_0200042A
_080B3C20:
	.4byte 0x0000FFFF
_080B3C24:
	.4byte gRam
_080B3C28:
	.4byte 0x00000A5A
	THUMB_FUNC_END sub_080B38BC

