	THUMB_FUNC_START sub_080A93B8
sub_080A93B8: @ 0x080A93B8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _080A95B0  @ =gRam
	ldr r2, _080A95B4  @ =0x00001651
	add r1, r0, r2
	ldrb r1, [r1]
	mov r9, r0
	cmp r1, #0
	bne _080A93D4
	b _080A9614
_080A93D4:
	ldr r3, _080A95B8  @ =gUnknown_030038E3
	ldrb r1, [r3]
	mov r0, #1
	and r0, r0, r1
	ldr r6, _080A95BC  @ =0x00000964
	add r6, r6, r9
	mov r8, r6
	strh r0, [r6]
	ldr r0, _080A95C0  @ =gUnknown_0816BBA0
	ldr r4, _080A95C4  @ =0x000014EC
	ldr r1, _080A95C8  @ =gUnknown_02000400
	mov r9, r1
	ldrh r5, [r1]
	mov r2, #0
	ldrsh r1, [r6, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r6, _080A95CC  @ =gUnknown_02000402
	add r3, r2, r6
	ldr r0, _080A95D0  @ =0xFFFF8000
	mov r12, r0
	mov r6, r12
	add r0, r6, r4
	strh r0, [r3]
	ldr r3, _080A95D4  @ =gUnknown_02000404
	add r0, r2, r3
	mov r6, #2
	strh r6, [r0]
	ldr r0, _080A95D8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A95DC  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A95E0  @ =gUnknown_0200040A
	add r0, r2, r3
	ldr r3, _080A95E4  @ =0xFFFF8040
	mov r10, r3
	add r4, r4, r10
	strh r4, [r0]
	ldr r3, _080A95E8  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r6, [r0]
	ldr r6, _080A95EC  @ =gUnknown_0200040E
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A95F0  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A95F4  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A95F8  @ =0x0000FFFF
	add r7, r3, #0
	strh r7, [r2]
	add r5, r5, #8
	mov r6, r9
	strh r5, [r6]
	ldr r0, _080A95B8  @ =gUnknown_030038E3
	ldrb r1, [r0]
	mov r6, #2
	add r0, r6, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #25
	mov r1, r8
	strh r0, [r1]
	ldr r0, _080A95FC  @ =gUnknown_0816BBB0
	ldr r4, _080A9600  @ =0x000014F0
	mov r2, r9
	ldrh r5, [r2]
	mov r3, #0
	ldrsh r1, [r1, r3]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r0, _080A95CC  @ =gUnknown_02000402
	add r0, r2, r0
	str r0, [sp]
	mov r3, r12
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A95D4  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A95D8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A95DC  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A95E0  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r10
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A95EC  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A95F0  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A95F4  @ =gUnknown_02000412
	add r2, r2, r1
	strh r7, [r2]
	add r5, r5, #8
	mov r2, r9
	strh r5, [r2]
	ldr r3, _080A95B8  @ =gUnknown_030038E3
	ldrb r1, [r3]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, r8
	strh r0, [r1]
	ldr r0, _080A9604  @ =gUnknown_0816BBC0
	ldr r4, _080A9608  @ =0x000014F4
	ldrh r5, [r2]
	mov r2, #0
	ldrsh r1, [r1, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r5, #1
	ldr r3, _080A95CC  @ =gUnknown_02000402
	add r3, r2, r3
	str r3, [sp]
	mov r3, r12
	add r0, r3, r4
	ldr r3, [sp]
	strh r0, [r3]
	ldr r3, _080A95D4  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A95D8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A95DC  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A95E0  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r10
	strh r4, [r0]
	add r3, r3, #2
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A95EC  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A95F0  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A95F4  @ =gUnknown_02000412
	add r2, r2, r1
	strh r7, [r2]
	add r5, r5, #8
	mov r2, r9
	strh r5, [r2]
	ldr r3, _080A95B8  @ =gUnknown_030038E3
	ldrb r1, [r3]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, r8
	strh r0, [r1]
	ldr r0, _080A960C  @ =gUnknown_0816BBD0
	ldr r5, _080A9610  @ =0x000014F8
	ldrh r4, [r2]
	mov r2, #0
	ldrsh r1, [r1, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r3, _080A95CC  @ =gUnknown_02000402
	add r0, r2, r3
	add r12, r12, r5
	mov r3, r12
	strh r3, [r0]
	ldr r3, _080A95D4  @ =gUnknown_02000404
	add r0, r2, r3
	strh r6, [r0]
	ldr r0, _080A95D8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A95DC  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A95E0  @ =gUnknown_0200040A
	add r0, r2, r3
	add r10, r10, r5
	mov r3, r10
	strh r3, [r0]
	ldr r3, _080A95E8  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r6, [r0]
	ldr r6, _080A95EC  @ =gUnknown_0200040E
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A95F0  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A95F4  @ =gUnknown_02000412
	add r2, r2, r1
	strh r7, [r2]
	add r4, r4, #8
	mov r2, r9
	strh r4, [r2]
	b _080A97E8
	.byte 0x00
	.byte 0x00
_080A95B0:
	.4byte gRam
_080A95B4:
	.4byte 0x00001651
_080A95B8:
	.4byte gUnknown_030038E3
_080A95BC:
	.4byte 0x00000964
_080A95C0:
	.4byte gUnknown_0816BBA0
_080A95C4:
	.4byte 0x000014EC
_080A95C8:
	.4byte gUnknown_02000400
_080A95CC:
	.4byte gUnknown_02000402
_080A95D0:
	.4byte 0xFFFF8000
_080A95D4:
	.4byte gUnknown_02000404
_080A95D8:
	.4byte gUnknown_02000406
_080A95DC:
	.4byte gUnknown_02000408
_080A95E0:
	.4byte gUnknown_0200040A
_080A95E4:
	.4byte 0xFFFF8040
_080A95E8:
	.4byte gUnknown_0200040C
_080A95EC:
	.4byte gUnknown_0200040E
_080A95F0:
	.4byte gUnknown_02000410
_080A95F4:
	.4byte gUnknown_02000412
_080A95F8:
	.4byte 0x0000FFFF
_080A95FC:
	.4byte gUnknown_0816BBB0
_080A9600:
	.4byte 0x000014F0
_080A9604:
	.4byte gUnknown_0816BBC0
_080A9608:
	.4byte 0x000014F4
_080A960C:
	.4byte gUnknown_0816BBD0
_080A9610:
	.4byte 0x000014F8
_080A9614:
	ldr r0, _080A9788  @ =0x0000165E
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #2
	bls _080A9620
	b _080A97E4
_080A9620:
	ldr r3, _080A978C  @ =gPendantCount
	mov r8, r3
	ldrb r1, [r3]
	mov r6, #1
	mov r10, r6
	mov r0, r10
	and r0, r0, r1
	ldr r7, _080A9790  @ =0x00000964
	add r7, r7, r9
	strh r0, [r7]
	ldr r0, _080A9794  @ =gUnknown_0816BB38
	ldr r6, _080A9798  @ =gUnknown_02000400
	ldrh r4, [r6]
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r0, _080A979C  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r0, _080A97A0  @ =0xFFFF9472
	strh r0, [r3]
	ldr r3, _080A97A4  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A97A8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A97AC  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A97B0  @ =gUnknown_0200040A
	add r3, r2, r0
	ldr r0, _080A97B4  @ =0xFFFF94B2
	strh r0, [r3]
	ldr r3, _080A97B8  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	ldr r0, _080A97BC  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A97C0  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A97C4  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A97C8  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
	mov r6, r8
	ldrb r1, [r6]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080A96A6
	mov r0, r10
_080A96A6:
	strh r0, [r7]
	ldr r0, _080A97CC  @ =gUnknown_0816BB48
	ldr r6, _080A9798  @ =gUnknown_02000400
	ldrh r4, [r6]
	ldr r7, _080A9790  @ =0x00000964
	add r7, r7, r9
	mov r2, #0
	ldrsh r1, [r7, r2]
	lsl r1, r1, #3
	add r1, r1, r0
	lsl r2, r4, #1
	ldr r0, _080A979C  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r0, _080A97D0  @ =0xFFFF94EE
	strh r0, [r3]
	ldr r3, _080A97A4  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A97A8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A97AC  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A97B0  @ =gUnknown_0200040A
	add r3, r2, r0
	ldr r0, _080A97D4  @ =0xFFFF952E
	strh r0, [r3]
	ldr r3, _080A97B8  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	ldr r0, _080A97BC  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A97C0  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A97C4  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A97C8  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
	ldr r0, _080A978C  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080A971E
	mov r0, #1
_080A971E:
	strh r0, [r7]
	ldr r2, _080A97D8  @ =gUnknown_0816BB58
	ldr r6, _080A9798  @ =gUnknown_02000400
	ldrh r4, [r6]
	ldr r0, _080A9790  @ =0x00000964
	add r0, r0, r9
	mov r3, #0
	ldrsh r1, [r0, r3]
	lsl r1, r1, #3
	add r1, r1, r2
	lsl r2, r4, #1
	ldr r0, _080A979C  @ =gUnknown_02000402
	add r3, r2, r0
	ldr r0, _080A97DC  @ =0xFFFF94F6
	strh r0, [r3]
	ldr r3, _080A97A4  @ =gUnknown_02000404
	add r0, r2, r3
	mov r5, #2
	strh r5, [r0]
	ldr r0, _080A97A8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A97AC  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A97B0  @ =gUnknown_0200040A
	add r3, r2, r0
	ldr r0, _080A97E0  @ =0xFFFF9536
	strh r0, [r3]
	ldr r3, _080A97B8  @ =gUnknown_0200040C
	add r0, r2, r3
	strh r5, [r0]
	ldr r0, _080A97BC  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A97C0  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A97C4  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A97C8  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r2]
	add r4, r4, #8
	strh r4, [r6]
	b _080A97E8
	.byte 0x00
	.byte 0x00
_080A9788:
	.4byte 0x0000165E
_080A978C:
	.4byte gPendantCount
_080A9790:
	.4byte 0x00000964
_080A9794:
	.4byte gUnknown_0816BB38
_080A9798:
	.4byte gUnknown_02000400
_080A979C:
	.4byte gUnknown_02000402
_080A97A0:
	.4byte 0xFFFF9472
_080A97A4:
	.4byte gUnknown_02000404
_080A97A8:
	.4byte gUnknown_02000406
_080A97AC:
	.4byte gUnknown_02000408
_080A97B0:
	.4byte gUnknown_0200040A
_080A97B4:
	.4byte 0xFFFF94B2
_080A97B8:
	.4byte gUnknown_0200040C
_080A97BC:
	.4byte gUnknown_0200040E
_080A97C0:
	.4byte gUnknown_02000410
_080A97C4:
	.4byte gUnknown_02000412
_080A97C8:
	.4byte 0x0000FFFF
_080A97CC:
	.4byte gUnknown_0816BB48
_080A97D0:
	.4byte 0xFFFF94EE
_080A97D4:
	.4byte 0xFFFF952E
_080A97D8:
	.4byte gUnknown_0816BB58
_080A97DC:
	.4byte 0xFFFF94F6
_080A97E0:
	.4byte 0xFFFF9536
_080A97E4:
	bl sub_080A90F4
_080A97E8:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080A93B8

