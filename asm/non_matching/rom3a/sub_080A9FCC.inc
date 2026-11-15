	THUMB_FUNC_START sub_080A9FCC
sub_080A9FCC: @ 0x080A9FCC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r0, _080AA164  @ =gUnknown_02000400
	ldrh r0, [r0]
	str r0, [sp, #4]
	ldr r1, _080AA168  @ =gUnknown_03002C7E
	mov r0, #0
	ldrsb r0, [r1, r0]
	sub r0, r0, #1
	str r0, [sp]
	ldr r0, _080AA16C  @ =gUnknown_0816DF10
	ldr r2, [sp]
	lsl r2, r2, #1
	str r2, [sp, #8]
	add r0, r2, r0
	ldrh r4, [r0]
	ldr r6, _080AA170  @ =0x00007FFE
	add r3, r4, r6
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r5, #192
	lsl r5, r5, #19
	add r7, r3, r5
	ldr r0, [sp, #4]
	lsl r2, r0, #1
	ldr r6, _080AA174  @ =gUnknown_02000402
	add r1, r2, r6
	ldr r6, _080AA178  @ =0x000092B2
	add r0, r6, #0
	strh r0, [r1]
	ldr r1, _080AA17C  @ =gUnknown_02000404
	add r0, r2, r1
	mov r6, #2
	strh r6, [r0]
	ldr r0, _080AA180  @ =gUnknown_02000406
	mov r12, r0
	add r1, r2, r0
	ldrh r0, [r7]
	strh r0, [r1]
	ldr r1, _080AA184  @ =0x06000002
	add r7, r3, r1
	ldr r3, _080AA188  @ =gUnknown_02000408
	mov r10, r3
	add r1, r2, r3
	ldrh r0, [r7]
	strh r0, [r1]
	ldr r7, _080AA18C  @ =0xFFFF803E
	add r4, r4, r7
	lsl r4, r4, #16
	lsr r4, r4, #16
	add r7, r4, r5
	ldr r0, _080AA190  @ =gUnknown_0200040A
	mov r8, r0
	add r1, r2, r0
	ldr r3, _080AA194  @ =0x000092F2
	add r0, r3, #0
	strh r0, [r1]
	ldr r5, _080AA198  @ =gUnknown_0200040C
	add r0, r2, r5
	strh r6, [r0]
	ldr r6, _080AA19C  @ =gUnknown_0200040E
	mov r9, r6
	add r1, r2, r6
	ldrh r0, [r7]
	strh r0, [r1]
	ldr r0, _080AA184  @ =0x06000002
	add r7, r4, r0
	add r6, r6, #2
	add r1, r2, r6
	ldrh r0, [r7]
	strh r0, [r1]
	ldr r4, _080AA1A0  @ =gUnknown_02000412
	add r2, r2, r4
	ldr r1, _080AA1A4  @ =0x0000FFFF
	add r0, r1, #0
	strh r0, [r2]
	ldr r2, [sp, #4]
	add r2, r2, #8
	str r2, [sp, #4]
	ldr r3, _080AA1A8  @ =gRam
	mov r7, #150
	lsl r7, r7, #4
	add r0, r3, r7
	mov r1, #0
	ldrsh r0, [r0, r1]
	sub r2, r0, #1
	ldr r3, [sp, #4]
	lsl r1, r3, #1
	ldr r7, _080AA174  @ =gUnknown_02000402
	add r3, r1, r7
	lsl r0, r2, #1
	ldr r2, _080AA1AC  @ =gUnknown_0816DEE0
	add r0, r0, r2
	ldrh r2, [r0]
	ldr r7, _080AA170  @ =0x00007FFE
	add r0, r2, r7
	strh r0, [r3]
	ldr r3, _080AA17C  @ =gUnknown_02000404
	add r0, r1, r3
	ldr r7, _080AA1B0  @ =0x0000C002
	add r3, r7, #0
	strh r3, [r0]
	add r12, r12, r1
	ldr r7, _080AA1B4  @ =0x000080F5
	add r0, r7, #0
	mov r7, r12
	strh r0, [r7]
	add r10, r10, r1
	ldr r7, _080AA1B8  @ =0xFFFF8004
	mov r12, r7
	add r2, r2, r12
	mov r7, r10
	strh r2, [r7]
	add r8, r8, r1
	mov r2, r8
	strh r3, [r2]
	add r5, r1, r5
	strh r0, [r5]
	add r9, r9, r1
	ldr r3, [sp, #8]
	ldr r7, _080AA1AC  @ =gUnknown_0816DEE0
	add r0, r3, r7
	ldrh r3, [r0]
	ldr r2, _080AA170  @ =0x00007FFE
	add r0, r3, r2
	mov r7, r9
	strh r0, [r7]
	add r6, r1, r6
	ldr r0, _080AA1BC  @ =0x00008002
	add r5, r0, #0
	strh r5, [r6]
	add r4, r1, r4
	ldr r2, _080AA1C0  @ =0x00009053
	add r0, r2, #0
	strh r0, [r4]
	ldr r4, _080AA1C4  @ =gUnknown_02000414
	add r2, r1, r4
	ldr r6, _080AA1C8  @ =0x00009853
	add r0, r6, #0
	strh r0, [r2]
	ldr r7, _080AA1CC  @ =gUnknown_02000416
	add r0, r1, r7
	add r3, r3, r12
	strh r3, [r0]
	ldr r2, _080AA1D0  @ =gUnknown_02000418
	add r0, r1, r2
	strh r5, [r0]
	ldr r3, _080AA1D4  @ =gUnknown_0200041A
	add r2, r1, r3
	ldr r4, _080AA1D8  @ =0x00009453
	add r0, r4, #0
	strh r0, [r2]
	ldr r6, _080AA1DC  @ =gUnknown_0200041C
	add r2, r1, r6
	ldr r7, _080AA1E0  @ =0x00009C53
	add r0, r7, #0
	strh r0, [r2]
	ldr r0, [sp]
	lsl r0, r0, #4
	str r0, [sp]
	add r3, r3, #4
	add r2, r1, r3
	ldr r4, _080AA1E4  @ =0x0000932C
	add r0, r4, #0
	strh r0, [r2]
	add r6, r6, #22
	add r2, r1, r6
	ldr r7, _080AA1E8  @ =0x0000936C
	add r0, r7, #0
	strh r0, [r2]
	ldr r2, _080AA1EC  @ =gUnknown_02000420
	add r0, r1, r2
	mov r2, #8
	strh r2, [r0]
	add r3, r3, #22
	add r1, r1, r3
	strh r2, [r1]
	ldr r4, _080AA168  @ =gUnknown_03002C7E
	mov r0, #0
	ldrsb r0, [r4, r0]
	ldr r2, _080AA1A8  @ =gRam
	cmp r0, #6
	bne _080AA1FC
	ldr r3, _080AA1F0  @ =gBottle1
	ldrb r0, [r3]
	cmp r0, #0
	beq _080AA1FC
	ldr r1, _080AA1F4  @ =gUnknown_0816DF5C
	ldr r6, _080AA1F8  @ =0x0000098E
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, #1
	lsl r0, r0, #5
	b _080AA392
_080AA164:
	.4byte gUnknown_02000400
_080AA168:
	.4byte gUnknown_03002C7E
_080AA16C:
	.4byte gUnknown_0816DF10
_080AA170:
	.4byte 0x00007FFE
_080AA174:
	.4byte gUnknown_02000402
_080AA178:
	.4byte 0x000092B2
_080AA17C:
	.4byte gUnknown_02000404
_080AA180:
	.4byte gUnknown_02000406
_080AA184:
	.4byte 0x06000002
_080AA188:
	.4byte gUnknown_02000408
_080AA18C:
	.4byte 0xFFFF803E
_080AA190:
	.4byte gUnknown_0200040A
_080AA194:
	.4byte 0x000092F2
_080AA198:
	.4byte gUnknown_0200040C
_080AA19C:
	.4byte gUnknown_0200040E
_080AA1A0:
	.4byte gUnknown_02000412
_080AA1A4:
	.4byte 0x0000FFFF
_080AA1A8:
	.4byte gRam
_080AA1AC:
	.4byte gUnknown_0816DEE0
_080AA1B0:
	.4byte 0x0000C002
_080AA1B4:
	.4byte 0x000080F5
_080AA1B8:
	.4byte 0xFFFF8004
_080AA1BC:
	.4byte 0x00008002
_080AA1C0:
	.4byte 0x00009053
_080AA1C4:
	.4byte gUnknown_02000414
_080AA1C8:
	.4byte 0x00009853
_080AA1CC:
	.4byte gUnknown_02000416
_080AA1D0:
	.4byte gUnknown_02000418
_080AA1D4:
	.4byte gUnknown_0200041A
_080AA1D8:
	.4byte 0x00009453
_080AA1DC:
	.4byte gUnknown_0200041C
_080AA1E0:
	.4byte 0x00009C53
_080AA1E4:
	.4byte 0x0000932C
_080AA1E8:
	.4byte 0x0000936C
_080AA1EC:
	.4byte gUnknown_02000420
_080AA1F0:
	.4byte gBottle1
_080AA1F4:
	.4byte gUnknown_0816DF5C
_080AA1F8:
	.4byte 0x0000098E
_080AA1FC:
	ldr r7, _080AA22C  @ =0x00000A4E
	add r0, r2, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #12
	bne _080AA23C
	ldr r3, _080AA230  @ =gBottle2
	ldrb r0, [r3]
	cmp r0, #0
	beq _080AA23C
	ldr r1, _080AA234  @ =gUnknown_0816DF5C
	ldr r4, _080AA238  @ =0x0000098E
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, #1
	lsl r0, r0, #5
	b _080AA392
_080AA22C:
	.4byte 0x00000A4E
_080AA230:
	.4byte gBottle2
_080AA234:
	.4byte gUnknown_0816DF5C
_080AA238:
	.4byte 0x0000098E
_080AA23C:
	ldr r6, _080AA26C  @ =0x00000A4E
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #18
	bne _080AA27C
	ldr r3, _080AA270  @ =gBottle3
	ldrb r0, [r3]
	cmp r0, #0
	beq _080AA27C
	ldr r1, _080AA274  @ =gUnknown_0816DF5C
	ldr r7, _080AA278  @ =0x0000098E
	add r0, r2, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, #1
	lsl r0, r0, #5
	b _080AA392
_080AA26C:
	.4byte 0x00000A4E
_080AA270:
	.4byte gBottle3
_080AA274:
	.4byte gUnknown_0816DF5C
_080AA278:
	.4byte 0x0000098E
_080AA27C:
	ldr r1, _080AA2AC  @ =0x00000A4E
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #24
	bne _080AA2BC
	ldr r3, _080AA2B0  @ =gBottle4
	ldrb r0, [r3]
	cmp r0, #0
	beq _080AA2BC
	ldr r1, _080AA2B4  @ =gUnknown_0816DF5C
	ldr r4, _080AA2B8  @ =0x0000098E
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, #1
	lsl r0, r0, #5
	b _080AA392
_080AA2AC:
	.4byte 0x00000A4E
_080AA2B0:
	.4byte gBottle4
_080AA2B4:
	.4byte gUnknown_0816DF5C
_080AA2B8:
	.4byte 0x0000098E
_080AA2BC:
	ldr r6, _080AA2EC  @ =0x00000A4E
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #5
	bne _080AA2FC
	ldr r3, _080AA2F0  @ =gMagicPowder
	ldrb r0, [r3]
	cmp r0, #1
	bls _080AA2FC
	ldr r1, _080AA2F4  @ =gUnknown_0816DF78
	ldr r7, _080AA2F8  @ =0x0000098E
	add r0, r2, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, #2
	lsl r0, r0, #5
	b _080AA392
_080AA2EC:
	.4byte 0x00000A4E
_080AA2F0:
	.4byte gMagicPowder
_080AA2F4:
	.4byte gUnknown_0816DF78
_080AA2F8:
	.4byte 0x0000098E
_080AA2FC:
	ldr r1, _080AA32C  @ =0x00000A4E
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #23
	bne _080AA33C
	ldr r3, _080AA330  @ =gMagicMirror
	ldrb r0, [r3]
	cmp r0, #1
	bls _080AA33C
	ldr r1, _080AA334  @ =gUnknown_0816DF94
	ldr r4, _080AA338  @ =0x0000098E
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, #2
	lsl r0, r0, #5
	b _080AA392
_080AA32C:
	.4byte 0x00000A4E
_080AA330:
	.4byte gMagicMirror
_080AA334:
	.4byte gUnknown_0816DF94
_080AA338:
	.4byte 0x0000098E
_080AA33C:
	ldr r6, _080AA36C  @ =0x00000A4E
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #1
	bne _080AA37C
	ldr r3, _080AA370  @ =gBow
	ldrb r0, [r3]
	cmp r0, #1
	bls _080AA37C
	ldr r1, _080AA374  @ =gUnknown_0816DFCC
	ldr r7, _080AA378  @ =0x0000098E
	add r0, r2, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldrb r0, [r3]
	sub r0, r0, #2
	lsl r0, r0, #5
	b _080AA392
_080AA36C:
	.4byte 0x00000A4E
_080AA370:
	.4byte gBow
_080AA374:
	.4byte gUnknown_0816DFCC
_080AA378:
	.4byte 0x0000098E
_080AA37C:
	ldr r1, _080AA3D4  @ =gUnknown_0816DF40
	ldr r3, _080AA3D8  @ =0x0000098E
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r4, [sp]
	lsl r0, r4, #1
_080AA392:
	add r1, r1, r0
	ldr r6, [sp, #4]
	lsl r4, r6, #1
	add r5, r6, #0
	add r5, r5, #34
	ldr r7, _080AA3DC  @ =gUnknown_02000422
	add r3, r4, r7
	mov r2, #7
_080AA3A2:
	ldrh r0, [r1]
	strh r0, [r3]
	ldrh r0, [r1, #16]
	strh r0, [r3, #20]
	add r1, r1, #2
	add r3, r3, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _080AA3A2
	ldr r1, _080AA3E0  @ =gUnknown_02000446
	add r0, r4, r1
	ldr r2, _080AA3E4  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080AA3E8  @ =gUnknown_02000400
	strh r5, [r0]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA3D4:
	.4byte gUnknown_0816DF40
_080AA3D8:
	.4byte 0x0000098E
_080AA3DC:
	.4byte gUnknown_02000422
_080AA3E0:
	.4byte gUnknown_02000446
_080AA3E4:
	.4byte 0x0000FFFF
_080AA3E8:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_080A9FCC

