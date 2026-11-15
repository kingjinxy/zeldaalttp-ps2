	THUMB_FUNC_START sub_08117428
sub_08117428: @ 0x08117428
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r7, _08117494  @ =gRam
	ldr r1, _08117498  @ =0x00000E33
	add r0, r7, r1
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _0811744A
	ldr r2, _0811749C  @ =0x00000E15
	add r0, r7, r2
	add r0, r5, r0
	strb r1, [r0]
_0811744A:
	ldr r3, _081174A0  @ =0x000009AD
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08117460
	add r0, r5, #0
	bl sub_080C1768
	add r0, r5, #0
	bl sub_080BF774
_08117460:
	add r0, r5, #0
	bl sub_080C10D4
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811746E
	b _08117570
_0811746E:
	mov r6, #4
	ldr r4, _0811749C  @ =0x00000E15
	add r1, r7, r4
	ldr r0, _081174A4  @ =0x00000A74
	add r3, r7, r0
	ldr r2, _081174A8  @ =0x00000968
	add r4, r7, r2
	mov r2, #48
_0811747E:
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #11
	bne _081174AC
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _081174B2
	strb r2, [r4]
	b _081174B2
	.byte 0x00
	.byte 0x00
_08117494:
	.4byte gRam
_08117498:
	.4byte 0x00000E33
_0811749C:
	.4byte 0x00000E15
_081174A0:
	.4byte 0x000009AD
_081174A4:
	.4byte 0x00000A74
_081174A8:
	.4byte 0x00000968
_081174AC:
	sub r6, r6, #1
	cmp r6, #0
	bge _0811747E
_081174B2:
	ldr r1, _081174C8  @ =gRam
	ldr r3, _081174CC  @ =0x000015F7
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _081174D0
	mov r0, #16
	bl sub_080CF370
	b _081174EE
	.byte 0x00
	.byte 0x00
_081174C8:
	.4byte gRam
_081174CC:
	.4byte 0x000015F7
_081174D0:
	ldr r4, _081174E4  @ =0x00000E47
	add r0, r1, r4
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081174E8
	mov r0, #16
	bl sub_080CF3D0
	b _081174EE
_081174E4:
	.4byte 0x00000E47
_081174E8:
	mov r0, #16
	bl sub_080CF3B8
_081174EE:
	ldr r2, _0811757C  @ =gRam
	ldr r1, _08117580  @ =0x00000E33
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #28
	and r0, r0, r1
	ldr r3, _08117584  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r6, #3
	add r7, r2, #0
	ldr r4, _08117588  @ =0x00000968
	add r4, r4, r7
	mov r8, r4
_0811750C:
	ldr r1, _08117584  @ =0x0000096C
	add r0, r7, r1
	ldrb r0, [r0]
	add r4, r6, #0
	orr r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	ldr r0, _0811758C  @ =gUnknown_0817EF98
	add r0, r4, r0
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldrb r2, [r2]
	add r1, r1, r2
	ldr r0, _08117590  @ =0x00000961
	add r3, r7, r0
	ldr r0, _08117594  @ =gUnknown_0817EFA8
	add r0, r4, r0
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldrb r3, [r3]
	add r2, r2, r3
	ldr r0, _08117598  @ =gUnknown_03003E74
	sub r3, r6, #3
	ldrh r0, [r0]
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _0811759C  @ =gUnknown_0817EFB8
	add r4, r4, r3
	ldrb r5, [r4]
	mov r4, r8
	ldrb r3, [r4]
	mov r4, #4
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r3, r3, r5
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r6, r6, #1
	cmp r6, #0
	bge _0811750C
_08117570:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0811757C:
	.4byte gRam
_08117580:
	.4byte 0x00000E33
_08117584:
	.4byte 0x0000096C
_08117588:
	.4byte 0x00000968
_0811758C:
	.4byte gUnknown_0817EF98
_08117590:
	.4byte 0x00000961
_08117594:
	.4byte gUnknown_0817EFA8
_08117598:
	.4byte gUnknown_03003E74
_0811759C:
	.4byte gUnknown_0817EFB8
	THUMB_FUNC_END sub_08117428

