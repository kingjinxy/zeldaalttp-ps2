	THUMB_FUNC_START sub_080A8178
sub_080A8178: @ 0x080A8178
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _080A856C  @ =gBow
	ldrb r0, [r0]
	ldr r1, _080A8570  @ =gRam
	ldr r2, _080A8574  @ =0x00000964
	add r7, r1, r2
	strh r0, [r7]
	ldr r0, _080A8578  @ =gUnknown_0816B880
	ldr r4, _080A857C  @ =0x00001286
	ldr r3, _080A8580  @ =gUnknown_02000400
	ldrh r5, [r3]
	mov r6, #0
	ldrsh r1, [r7, r6]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8584  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r6, _080A8588  @ =0xFFFF8000
	mov r9, r6
	mov r6, r9
	add r0, r6, r4
	strh r0, [r3]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	mov r6, #2
	strh r6, [r0]
	ldr r0, _080A8590  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	ldr r3, _080A859C  @ =0xFFFF8040
	mov r8, r3
	add r4, r4, r8
	strh r4, [r0]
	ldr r3, _080A85A0  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A85A8  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A85B0  @ =0x0000FFFF
	mov r10, r3
	strh r3, [r2]
	add r5, r5, #8
	ldr r0, _080A8580  @ =gUnknown_02000400
	strh r5, [r0]
	ldr r0, _080A85B4  @ =gBoomerang
	ldrb r0, [r0]
	strh r0, [r7]
	ldr r0, _080A85B8  @ =gUnknown_0816B8A8
	ldr r4, _080A85BC  @ =0x0000128C
	sub r1, r1, #18
	ldrh r5, [r1]
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r3, _080A8584  @ =gUnknown_02000402
	add r3, r2, r3
	str r3, [sp]
	mov r3, r9
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8590  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r8
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A85A8  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r1
	mov r3, r10
	strh r3, [r2]
	add r5, r5, #8
	ldr r0, _080A8580  @ =gUnknown_02000400
	strh r5, [r0]
	ldr r0, _080A85C0  @ =gHookshot
	ldrb r0, [r0]
	strh r0, [r7]
	ldr r0, _080A85C4  @ =gUnknown_0816B8C0
	ldr r5, _080A85C8  @ =0x00001292
	sub r1, r1, #18
	ldrh r4, [r1]
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r3, _080A8584  @ =gUnknown_02000402
	add r0, r2, r3
	add r9, r9, r5
	mov r3, r9
	strh r3, [r0]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8590  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	add r8, r8, r5
	mov r3, r8
	strh r3, [r0]
	ldr r3, _080A85A0  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r6, [r0]
	ldr r6, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A85A8  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r1
	mov r3, r10
	strh r3, [r2]
	add r4, r4, #8
	sub r6, r6, #14
	strh r4, [r6]
	ldr r0, _080A85CC  @ =gBombs
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A82DE
	mov r0, #1
_080A82DE:
	strh r0, [r7]
	ldr r0, _080A85D0  @ =gUnknown_0816B8D0
	ldr r4, _080A85D4  @ =0x00001298
	ldr r7, _080A8580  @ =gUnknown_02000400
	mov r8, r7
	mov r1, r8
	ldrh r5, [r1]
	ldr r2, _080A8570  @ =gRam
	ldr r3, _080A8574  @ =0x00000964
	add r2, r2, r3
	mov r12, r2
	mov r6, #0
	ldrsh r1, [r2, r6]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	add r7, r7, #2
	add r3, r2, r7
	ldr r6, _080A8588  @ =0xFFFF8000
	add r0, r6, r4
	strh r0, [r3]
	add r7, r7, #2
	add r0, r2, r7
	mov r6, #2
	strh r6, [r0]
	ldr r0, _080A8590  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	ldr r7, _080A859C  @ =0xFFFF8040
	mov r9, r7
	add r4, r4, r9
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A85A8  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A85B0  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	mov r7, r8
	strh r5, [r7]
	ldr r0, _080A85D8  @ =gMagicPowder
	ldrb r0, [r0]
	mov r1, r12
	strh r0, [r1]
	ldr r0, _080A85DC  @ =gUnknown_0816B8E0
	ldr r4, _080A85E0  @ =0x0000129E
	ldrh r5, [r7]
	mov r2, #0
	ldrsh r1, [r1, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r7, _080A8584  @ =gUnknown_02000402
	add r3, r2, r7
	ldr r7, _080A8588  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8590  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A85B0  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A85E4  @ =gFireRod
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A85E8  @ =gUnknown_0816B8F8
	ldr r4, _080A85EC  @ =0x00001346
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8584  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8588  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8590  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A85B0  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A85F0  @ =gIceRod
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A85F4  @ =gUnknown_0816B908
	ldr r4, _080A85F8  @ =0x0000134C
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8584  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8588  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8590  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A85B0  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A85FC  @ =gBombosMedallion
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A8600  @ =gUnknown_0816B918
	ldr r4, _080A8604  @ =0x00001352
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8584  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8588  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8590  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A85B0  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8608  @ =gEtherMedallion
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A860C  @ =gUnknown_0816B928
	ldr r4, _080A8610  @ =0x00001358
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8584  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8588  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A858C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8590  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8594  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8598  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A85A4  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A85AC  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A85B0  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8614  @ =gQuakeMedallion
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A8618  @ =gUnknown_0816B938
	ldr r4, _080A861C  @ =0x0000135E
	b _080A8620
	.byte 0x00
	.byte 0x00
_080A856C:
	.4byte gBow
_080A8570:
	.4byte gRam
_080A8574:
	.4byte 0x00000964
_080A8578:
	.4byte gUnknown_0816B880
_080A857C:
	.4byte 0x00001286
_080A8580:
	.4byte gUnknown_02000400
_080A8584:
	.4byte gUnknown_02000402
_080A8588:
	.4byte 0xFFFF8000
_080A858C:
	.4byte gUnknown_02000404
_080A8590:
	.4byte gUnknown_02000406
_080A8594:
	.4byte gUnknown_02000408
_080A8598:
	.4byte gUnknown_0200040A
_080A859C:
	.4byte 0xFFFF8040
_080A85A0:
	.4byte gUnknown_0200040C
_080A85A4:
	.4byte gUnknown_0200040E
_080A85A8:
	.4byte gUnknown_02000410
_080A85AC:
	.4byte gUnknown_02000412
_080A85B0:
	.4byte 0x0000FFFF
_080A85B4:
	.4byte gBoomerang
_080A85B8:
	.4byte gUnknown_0816B8A8
_080A85BC:
	.4byte 0x0000128C
_080A85C0:
	.4byte gHookshot
_080A85C4:
	.4byte gUnknown_0816B8C0
_080A85C8:
	.4byte 0x00001292
_080A85CC:
	.4byte gBombs
_080A85D0:
	.4byte gUnknown_0816B8D0
_080A85D4:
	.4byte 0x00001298
_080A85D8:
	.4byte gMagicPowder
_080A85DC:
	.4byte gUnknown_0816B8E0
_080A85E0:
	.4byte 0x0000129E
_080A85E4:
	.4byte gFireRod
_080A85E8:
	.4byte gUnknown_0816B8F8
_080A85EC:
	.4byte 0x00001346
_080A85F0:
	.4byte gIceRod
_080A85F4:
	.4byte gUnknown_0816B908
_080A85F8:
	.4byte 0x0000134C
_080A85FC:
	.4byte gBombosMedallion
_080A8600:
	.4byte gUnknown_0816B918
_080A8604:
	.4byte 0x00001352
_080A8608:
	.4byte gEtherMedallion
_080A860C:
	.4byte gUnknown_0816B928
_080A8610:
	.4byte 0x00001358
_080A8614:
	.4byte gQuakeMedallion
_080A8618:
	.4byte gUnknown_0816B938
_080A861C:
	.4byte 0x0000135E
_080A8620:
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8A1C  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A8A38  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8A3C  @ =gLamp
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A8A40  @ =gUnknown_0816B948
	ldr r4, _080A8A44  @ =0x00001406
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8A1C  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A8A38  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8A48  @ =gMagicHammer
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A8A4C  @ =gUnknown_0816B958
	ldr r4, _080A8A50  @ =0x0000140C
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8A1C  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A8A38  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8A54  @ =gFlute
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A8A58  @ =gUnknown_0816B968
	ldr r4, _080A8A5C  @ =0x00001412
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8A1C  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A8A38  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8A60  @ =gBugCatchingNet
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A8A64  @ =gUnknown_0816B988
	ldr r4, _080A8A68  @ =0x00001418
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8A1C  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A8A38  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8A6C  @ =gBookOfMudora
	ldrb r0, [r0]
	mov r3, r12
	strh r0, [r3]
	ldr r0, _080A8A70  @ =gUnknown_0816B998
	ldr r4, _080A8A74  @ =0x0000141E
	ldrh r5, [r2]
	mov r7, #0
	ldrsh r1, [r3, r7]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r7, _080A8A1C  @ =0xFFFF8000
	add r0, r7, r4
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r7, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r7, r7, #6
	add r0, r2, r7
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A8A38  @ =0x0000FFFF
	strh r1, [r2]
	add r5, r5, #8
	mov r2, r8
	strh r5, [r2]
	ldr r0, _080A8A78  @ =gShovel
	ldrb r0, [r0]
	mov r7, r12
	strh r0, [r7]
	ldr r0, _080A8A7C  @ =gUnknown_0816B9A8
	ldr r4, _080A8A80  @ =0x000014C6
	ldrh r5, [r2]
	mov r3, #0
	ldrsh r1, [r7, r3]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A8A18  @ =gUnknown_02000402
	add r0, r2, r0
	str r0, [sp]
	ldr r3, _080A8A1C  @ =0xFFFF8000
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8A84  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8A38  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	mov r0, r8
	strh r5, [r0]
	ldr r0, _080A8A88  @ =gCaneOfSomaria
	ldrb r0, [r0]
	strh r0, [r7]
	ldr r0, _080A8A8C  @ =gUnknown_0816BA00
	ldr r4, _080A8A90  @ =0x000014CC
	mov r1, r8
	ldrh r5, [r1]
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r3, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r3
	str r3, [sp]
	ldr r3, _080A8A1C  @ =0xFFFF8000
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8A84  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8A38  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	mov r0, r8
	strh r5, [r0]
	ldr r0, _080A8A94  @ =gCaneOfByrna
	ldrb r0, [r0]
	strh r0, [r7]
	ldr r0, _080A8A98  @ =gUnknown_0816BA10
	ldr r4, _080A8A9C  @ =0x000014D2
	mov r1, r8
	ldrh r5, [r1]
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r3, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r3
	str r3, [sp]
	ldr r3, _080A8A1C  @ =0xFFFF8000
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8A30  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8A84  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8A34  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8A38  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	mov r0, r8
	strh r5, [r0]
	ldr r0, _080A8AA0  @ =gMagicCape
	ldrb r0, [r0]
	strh r0, [r7]
	ldr r0, _080A8AA4  @ =gUnknown_0816BA20
	ldr r4, _080A8AA8  @ =0x000014D8
	mov r1, r8
	ldrh r5, [r1]
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r3, _080A8A18  @ =gUnknown_02000402
	add r3, r2, r3
	str r3, [sp]
	ldr r3, _080A8A1C  @ =0xFFFF8000
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A8A20  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8A24  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8A28  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8A2C  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	b _080A8AAC
	.byte 0x00
	.byte 0x00
_080A8A18:
	.4byte gUnknown_02000402
_080A8A1C:
	.4byte 0xFFFF8000
_080A8A20:
	.4byte gUnknown_02000404
_080A8A24:
	.4byte gUnknown_02000406
_080A8A28:
	.4byte gUnknown_02000408
_080A8A2C:
	.4byte gUnknown_0200040A
_080A8A30:
	.4byte gUnknown_0200040E
_080A8A34:
	.4byte gUnknown_02000412
_080A8A38:
	.4byte 0x0000FFFF
_080A8A3C:
	.4byte gLamp
_080A8A40:
	.4byte gUnknown_0816B948
_080A8A44:
	.4byte 0x00001406
_080A8A48:
	.4byte gMagicHammer
_080A8A4C:
	.4byte gUnknown_0816B958
_080A8A50:
	.4byte 0x0000140C
_080A8A54:
	.4byte gFlute
_080A8A58:
	.4byte gUnknown_0816B968
_080A8A5C:
	.4byte 0x00001412
_080A8A60:
	.4byte gBugCatchingNet
_080A8A64:
	.4byte gUnknown_0816B988
_080A8A68:
	.4byte 0x00001418
_080A8A6C:
	.4byte gBookOfMudora
_080A8A70:
	.4byte gUnknown_0816B998
_080A8A74:
	.4byte 0x0000141E
_080A8A78:
	.4byte gShovel
_080A8A7C:
	.4byte gUnknown_0816B9A8
_080A8A80:
	.4byte 0x000014C6
_080A8A84:
	.4byte gUnknown_02000410
_080A8A88:
	.4byte gCaneOfSomaria
_080A8A8C:
	.4byte gUnknown_0816BA00
_080A8A90:
	.4byte 0x000014CC
_080A8A94:
	.4byte gCaneOfByrna
_080A8A98:
	.4byte gUnknown_0816BA10
_080A8A9C:
	.4byte 0x000014D2
_080A8AA0:
	.4byte gMagicCape
_080A8AA4:
	.4byte gUnknown_0816BA20
_080A8AA8:
	.4byte 0x000014D8
_080A8AAC:
	strh r6, [r0]
	ldr r0, _080A8CF8  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8CFC  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8D00  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8D04  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	mov r0, r8
	strh r5, [r0]
	ldr r0, _080A8D08  @ =gMagicMirror
	ldrb r0, [r0]
	strh r0, [r7]
	ldr r0, _080A8D0C  @ =gUnknown_0816BA30
	ldr r5, _080A8D10  @ =0x000014DE
	mov r1, r8
	ldrh r4, [r1]
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r3, _080A8D14  @ =gUnknown_02000402
	add r0, r2, r3
	ldr r3, _080A8D18  @ =0xFFFF94DE
	strh r3, [r0]
	ldr r3, _080A8D1C  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A8D20  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D24  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A8D28  @ =gUnknown_0200040A
	add r0, r2, r3
	add r9, r9, r5
	mov r3, r9
	strh r3, [r0]
	ldr r3, _080A8D2C  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r6, [r0]
	ldr r6, _080A8CF8  @ =gUnknown_0200040E
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8CFC  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8D00  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8D04  @ =0x0000FFFF
	strh r3, [r2]
	add r4, r4, #8
	mov r6, r8
	strh r4, [r6]
	ldr r1, _080A8D30  @ =gBottle1
	ldrb r0, [r1]
	cmp r0, #0
	bne _080A8B3E
	mov r7, r12
_080A8B3E:
	strh r0, [r7]
	ldr r0, _080A8D34  @ =gUnknown_0816B9B8
	mov r8, r0
	ldr r6, _080A8D38  @ =gUnknown_02000400
	ldrh r4, [r6]
	ldr r1, _080A8D3C  @ =gRam
	ldr r2, _080A8D40  @ =0x00000964
	add r7, r1, r2
	mov r3, #0
	ldrsh r1, [r7, r3]
	lsl r1, r1, #3
	add r1, r1, r8
	lsl r2, r4, #1
	ldr r0, _080A8D14  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r0, _080A8D44  @ =0xFFFF92A4
	strh r0, [r3]
	ldr r3, _080A8D1C  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A8D20  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D24  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D28  @ =gUnknown_0200040A
	add r3, r2, r0
	ldr r0, _080A8D48  @ =0xFFFF92E4
	strh r0, [r3]
	ldr r3, _080A8D2C  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	ldr r0, _080A8CF8  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8CFC  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8D00  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8D04  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
	ldr r1, _080A8D4C  @ =gBottle2
	ldrb r0, [r1]
	strh r0, [r7]
	ldr r6, _080A8D38  @ =gUnknown_02000400
	ldrh r4, [r6]
	ldr r0, _080A8D3C  @ =gRam
	ldr r1, _080A8D40  @ =0x00000964
	add r7, r0, r1
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r8
	lsl r2, r4, #1
	ldr r0, _080A8D14  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r0, _080A8D50  @ =0xFFFF9364
	strh r0, [r3]
	ldr r3, _080A8D1C  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A8D20  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D24  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D28  @ =gUnknown_0200040A
	add r3, r2, r0
	ldr r0, _080A8D54  @ =0xFFFF93A4
	strh r0, [r3]
	ldr r3, _080A8D2C  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	ldr r0, _080A8CF8  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8CFC  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8D00  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8D04  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
	ldr r1, _080A8D58  @ =gBottle3
	ldrb r0, [r1]
	strh r0, [r7]
	ldr r6, _080A8D38  @ =gUnknown_02000400
	ldrh r4, [r6]
	ldr r0, _080A8D3C  @ =gRam
	ldr r1, _080A8D40  @ =0x00000964
	add r7, r0, r1
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r8
	lsl r2, r4, #1
	ldr r0, _080A8D14  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r0, _080A8D5C  @ =0xFFFF9424
	strh r0, [r3]
	ldr r3, _080A8D1C  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A8D20  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D24  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D28  @ =gUnknown_0200040A
	add r3, r2, r0
	ldr r0, _080A8D60  @ =0xFFFF9464
	strh r0, [r3]
	ldr r3, _080A8D2C  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	ldr r0, _080A8CF8  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8CFC  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8D00  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8D04  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
	ldr r1, _080A8D64  @ =gBottle4
	ldrb r0, [r1]
	strh r0, [r7]
	ldr r6, _080A8D38  @ =gUnknown_02000400
	ldrh r4, [r6]
	ldr r7, _080A8D3C  @ =gRam
	ldr r1, _080A8D40  @ =0x00000964
	add r0, r7, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	lsl r1, r1, #3
	add r1, r1, r8
	lsl r2, r4, #1
	ldr r7, _080A8D14  @ =gUnknown_02000402
	add r3, r2, r7
	ldr r0, _080A8D68  @ =0xFFFF94E4
	strh r0, [r3]
	ldr r3, _080A8D1C  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A8D24  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	add r7, r7, #4
	add r3, r2, r7
	ldr r0, _080A8D6C  @ =0xFFFF9524
	strh r0, [r3]
	ldr r3, _080A8D2C  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	add r7, r7, #4
	add r3, r2, r7
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A8CFC  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A8D00  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A8D04  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A8CF8:
	.4byte gUnknown_0200040E
_080A8CFC:
	.4byte gUnknown_02000410
_080A8D00:
	.4byte gUnknown_02000412
_080A8D04:
	.4byte 0x0000FFFF
_080A8D08:
	.4byte gMagicMirror
_080A8D0C:
	.4byte gUnknown_0816BA30
_080A8D10:
	.4byte 0x000014DE
_080A8D14:
	.4byte gUnknown_02000402
_080A8D18:
	.4byte 0xFFFF94DE
_080A8D1C:
	.4byte gUnknown_02000404
_080A8D20:
	.4byte gUnknown_02000406
_080A8D24:
	.4byte gUnknown_02000408
_080A8D28:
	.4byte gUnknown_0200040A
_080A8D2C:
	.4byte gUnknown_0200040C
_080A8D30:
	.4byte gBottle1
_080A8D34:
	.4byte gUnknown_0816B9B8
_080A8D38:
	.4byte gUnknown_02000400
_080A8D3C:
	.4byte gRam
_080A8D40:
	.4byte 0x00000964
_080A8D44:
	.4byte 0xFFFF92A4
_080A8D48:
	.4byte 0xFFFF92E4
_080A8D4C:
	.4byte gBottle2
_080A8D50:
	.4byte 0xFFFF9364
_080A8D54:
	.4byte 0xFFFF93A4
_080A8D58:
	.4byte gBottle3
_080A8D5C:
	.4byte 0xFFFF9424
_080A8D60:
	.4byte 0xFFFF9464
_080A8D64:
	.4byte gBottle4
_080A8D68:
	.4byte 0xFFFF94E4
_080A8D6C:
	.4byte 0xFFFF9524
	THUMB_FUNC_END sub_080A8178

