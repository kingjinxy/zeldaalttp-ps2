	THUMB_FUNC_START sub_080A90F4
sub_080A90F4: @ 0x080A90F4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r0, _080A9114  @ =gCrystalCount
	ldrb r0, [r0]
	mov r3, #1
	add r2, r3, #0
	and r2, r2, r0
	cmp r2, #0
	beq _080A9120
	ldr r1, _080A9118  @ =gRam
	ldr r2, _080A911C  @ =0x00000964
	add r0, r1, r2
	strh r3, [r0]
	b _080A9128
	.byte 0x00
	.byte 0x00
_080A9114:
	.4byte gCrystalCount
_080A9118:
	.4byte gRam
_080A911C:
	.4byte 0x00000964
_080A9120:
	ldr r1, _080A9370  @ =gRam
	ldr r3, _080A9374  @ =0x00000964
	add r0, r1, r3
	strh r2, [r0]
_080A9128:
	mov r8, r1
	ldr r6, _080A9378  @ =gUnknown_0816BB98
	ldr r5, _080A937C  @ =gUnknown_02000400
	ldrh r4, [r5]
	ldr r7, _080A9374  @ =0x00000964
	add r7, r7, r8
	mov r0, #0
	ldrsh r2, [r7, r0]
	lsl r2, r2, #2
	add r2, r2, r6
	lsl r1, r4, #1
	ldr r0, _080A9380  @ =gUnknown_02000402
	add r3, r1, r0
	ldr r0, _080A9384  @ =0xFFFF9430
	strh r0, [r3]
	ldr r0, _080A9388  @ =gUnknown_02000404
	add r3, r1, r0
	mov r0, #2
	strh r0, [r3]
	ldr r0, _080A938C  @ =gUnknown_02000406
	add r3, r1, r0
	ldrh r0, [r2]
	strh r0, [r3]
	ldr r0, _080A9390  @ =gUnknown_02000408
	add r3, r1, r0
	ldrh r0, [r2, #2]
	strh r0, [r3]
	ldr r2, _080A9394  @ =gUnknown_0200040A
	add r1, r1, r2
	ldr r3, _080A9398  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #4
	strh r4, [r5]
	ldr r0, _080A939C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r6
	cmp r0, #0
	beq _080A9180
	mov r0, #1
_080A9180:
	strh r0, [r7]
	ldr r5, _080A937C  @ =gUnknown_02000400
	ldrh r4, [r5]
	ldr r6, _080A9374  @ =0x00000964
	add r6, r6, r8
	mov r0, #0
	ldrsh r2, [r6, r0]
	lsl r2, r2, #2
	add r2, r2, r12
	lsl r1, r4, #1
	ldr r0, _080A9380  @ =gUnknown_02000402
	add r3, r1, r0
	ldr r0, _080A93A0  @ =0xFFFF9434
	strh r0, [r3]
	ldr r0, _080A9388  @ =gUnknown_02000404
	add r3, r1, r0
	mov r0, #2
	strh r0, [r3]
	ldr r0, _080A938C  @ =gUnknown_02000406
	add r3, r1, r0
	ldrh r0, [r2]
	strh r0, [r3]
	ldr r0, _080A9390  @ =gUnknown_02000408
	add r3, r1, r0
	ldrh r0, [r2, #2]
	strh r0, [r3]
	ldr r2, _080A9394  @ =gUnknown_0200040A
	add r1, r1, r2
	ldr r3, _080A9398  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #4
	strh r4, [r5]
	ldr r0, _080A939C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080A91D4
	mov r0, #1
_080A91D4:
	strh r0, [r6]
	ldr r5, _080A937C  @ =gUnknown_02000400
	ldrh r4, [r5]
	ldr r6, _080A9374  @ =0x00000964
	add r6, r6, r8
	mov r0, #0
	ldrsh r2, [r6, r0]
	lsl r2, r2, #2
	add r2, r2, r12
	lsl r1, r4, #1
	ldr r0, _080A9380  @ =gUnknown_02000402
	add r3, r1, r0
	ldr r0, _080A93A4  @ =0xFFFF94AE
	strh r0, [r3]
	ldr r0, _080A9388  @ =gUnknown_02000404
	add r3, r1, r0
	mov r0, #2
	strh r0, [r3]
	ldr r0, _080A938C  @ =gUnknown_02000406
	add r3, r1, r0
	ldrh r0, [r2]
	strh r0, [r3]
	ldr r0, _080A9390  @ =gUnknown_02000408
	add r3, r1, r0
	ldrh r0, [r2, #2]
	strh r0, [r3]
	ldr r2, _080A9394  @ =gUnknown_0200040A
	add r1, r1, r2
	ldr r3, _080A9398  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #4
	strh r4, [r5]
	ldr r0, _080A939C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080A9228
	mov r0, #1
_080A9228:
	strh r0, [r6]
	ldr r5, _080A937C  @ =gUnknown_02000400
	ldrh r4, [r5]
	ldr r6, _080A9374  @ =0x00000964
	add r6, r6, r8
	mov r0, #0
	ldrsh r2, [r6, r0]
	lsl r2, r2, #2
	add r2, r2, r12
	lsl r1, r4, #1
	ldr r0, _080A9380  @ =gUnknown_02000402
	add r3, r1, r0
	ldr r0, _080A93A8  @ =0xFFFF94B2
	strh r0, [r3]
	ldr r0, _080A9388  @ =gUnknown_02000404
	add r3, r1, r0
	mov r0, #2
	strh r0, [r3]
	ldr r0, _080A938C  @ =gUnknown_02000406
	add r3, r1, r0
	ldrh r0, [r2]
	strh r0, [r3]
	ldr r0, _080A9390  @ =gUnknown_02000408
	add r3, r1, r0
	ldrh r0, [r2, #2]
	strh r0, [r3]
	ldr r2, _080A9394  @ =gUnknown_0200040A
	add r1, r1, r2
	ldr r3, _080A9398  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #4
	strh r4, [r5]
	ldr r0, _080A939C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080A927C
	mov r0, #1
_080A927C:
	strh r0, [r6]
	ldr r5, _080A937C  @ =gUnknown_02000400
	ldrh r4, [r5]
	ldr r6, _080A9374  @ =0x00000964
	add r6, r6, r8
	mov r0, #0
	ldrsh r2, [r6, r0]
	lsl r2, r2, #2
	add r2, r2, r12
	lsl r1, r4, #1
	ldr r0, _080A9380  @ =gUnknown_02000402
	add r3, r1, r0
	ldr r0, _080A93AC  @ =0xFFFF94B6
	strh r0, [r3]
	ldr r0, _080A9388  @ =gUnknown_02000404
	add r3, r1, r0
	mov r0, #2
	strh r0, [r3]
	ldr r0, _080A938C  @ =gUnknown_02000406
	add r3, r1, r0
	ldrh r0, [r2]
	strh r0, [r3]
	ldr r0, _080A9390  @ =gUnknown_02000408
	add r3, r1, r0
	ldrh r0, [r2, #2]
	strh r0, [r3]
	ldr r2, _080A9394  @ =gUnknown_0200040A
	add r1, r1, r2
	ldr r3, _080A9398  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #4
	strh r4, [r5]
	ldr r0, _080A939C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080A92D0
	mov r0, #1
_080A92D0:
	strh r0, [r6]
	ldr r5, _080A937C  @ =gUnknown_02000400
	ldrh r4, [r5]
	ldr r6, _080A9374  @ =0x00000964
	add r6, r6, r8
	mov r0, #0
	ldrsh r2, [r6, r0]
	lsl r2, r2, #2
	add r2, r2, r12
	lsl r1, r4, #1
	ldr r0, _080A9380  @ =gUnknown_02000402
	add r3, r1, r0
	ldr r0, _080A93B0  @ =0xFFFF9530
	strh r0, [r3]
	ldr r0, _080A9388  @ =gUnknown_02000404
	add r3, r1, r0
	mov r0, #2
	strh r0, [r3]
	ldr r0, _080A938C  @ =gUnknown_02000406
	add r3, r1, r0
	ldrh r0, [r2]
	strh r0, [r3]
	ldr r0, _080A9390  @ =gUnknown_02000408
	add r3, r1, r0
	ldrh r0, [r2, #2]
	strh r0, [r3]
	ldr r2, _080A9394  @ =gUnknown_0200040A
	add r1, r1, r2
	ldr r3, _080A9398  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #4
	strh r4, [r5]
	ldr r0, _080A939C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _080A9324
	mov r0, #1
_080A9324:
	strh r0, [r6]
	ldr r5, _080A937C  @ =gUnknown_02000400
	ldrh r4, [r5]
	ldr r0, _080A9374  @ =0x00000964
	add r0, r0, r8
	mov r1, #0
	ldrsh r2, [r0, r1]
	lsl r2, r2, #2
	add r2, r2, r12
	lsl r1, r4, #1
	ldr r0, _080A9380  @ =gUnknown_02000402
	add r3, r1, r0
	ldr r0, _080A93B4  @ =0xFFFF9534
	strh r0, [r3]
	ldr r0, _080A9388  @ =gUnknown_02000404
	add r3, r1, r0
	mov r0, #2
	strh r0, [r3]
	ldr r0, _080A938C  @ =gUnknown_02000406
	add r3, r1, r0
	ldrh r0, [r2]
	strh r0, [r3]
	ldr r0, _080A9390  @ =gUnknown_02000408
	add r3, r1, r0
	ldrh r0, [r2, #2]
	strh r0, [r3]
	ldr r2, _080A9394  @ =gUnknown_0200040A
	add r1, r1, r2
	ldr r3, _080A9398  @ =0x0000FFFF
	add r0, r3, #0
	strh r0, [r1]
	add r4, r4, #4
	strh r4, [r5]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080A9370:
	.4byte gRam
_080A9374:
	.4byte 0x00000964
_080A9378:
	.4byte gUnknown_0816BB98
_080A937C:
	.4byte gUnknown_02000400
_080A9380:
	.4byte gUnknown_02000402
_080A9384:
	.4byte 0xFFFF9430
_080A9388:
	.4byte gUnknown_02000404
_080A938C:
	.4byte gUnknown_02000406
_080A9390:
	.4byte gUnknown_02000408
_080A9394:
	.4byte gUnknown_0200040A
_080A9398:
	.4byte 0x0000FFFF
_080A939C:
	.4byte gCrystalCount
_080A93A0:
	.4byte 0xFFFF9434
_080A93A4:
	.4byte 0xFFFF94AE
_080A93A8:
	.4byte 0xFFFF94B2
_080A93AC:
	.4byte 0xFFFF94B6
_080A93B0:
	.4byte 0xFFFF9530
_080A93B4:
	.4byte 0xFFFF9534
	THUMB_FUNC_END sub_080A90F4

