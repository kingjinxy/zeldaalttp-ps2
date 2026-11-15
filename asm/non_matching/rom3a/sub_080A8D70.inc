	THUMB_FUNC_START sub_080A8D70
sub_080A8D70: @ 0x080A8D70
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _080A8E00  @ =gUnknown_02000400
	ldrh r5, [r0]
	mov r6, #0
	ldr r0, _080A8E04  @ =gUnknown_0816BE30
	mov r12, r0
	ldr r1, _080A8E08  @ =gRam
	mov r8, r1
	ldr r2, _080A8E0C  @ =gUnknown_0816DFE8
	mov r10, r2
	ldr r3, _080A8E10  @ =0x0000098E
	add r3, r3, r8
	mov r9, r3
_080A8D94:
	ldr r0, _080A8E14  @ =gAbilityFlags
	mov r4, r12
	add r1, r6, r4
	ldrb r2, [r0]
	ldrb r0, [r1]
	and r0, r0, r2
	add r7, r6, #1
	str r7, [sp]
	cmp r0, #0
	beq _080A8E5A
	mov r1, r9
	mov r0, #0
	ldrsb r0, [r1, r0]
	lsl r0, r0, #2
	add r0, r0, r10
	ldr r4, [r0]
	ldr r0, _080A8E18  @ =gUnknown_0816BE42
	lsl r1, r6, #1
	add r0, r1, r0
	ldrh r0, [r0]
	lsl r0, r0, #1
	add r4, r4, r0
	lsl r3, r5, #1
	ldr r7, _080A8E1C  @ =gUnknown_02000402
	add r2, r3, r7
	ldr r0, _080A8E20  @ =gUnknown_0816BE36
	add r1, r1, r0
	ldrh r1, [r1]
	mov r7, #128
	lsl r7, r7, #8
	add r0, r1, r7
	strh r0, [r2]
	ldr r2, _080A8E24  @ =gUnknown_02000404
	add r0, r3, r2
	mov r2, #5
	strh r2, [r0]
	add r0, r3, #0
	cmp r6, #2
	bgt _080A8E2C
	add r4, r4, #10
	add r2, r5, #7
	ldr r3, _080A8E28  @ =gUnknown_02000406
	add r1, r0, r3
	mov r3, #4
_080A8DEC:
	ldrh r0, [r4]
	strh r0, [r1]
	add r1, r1, #2
	sub r3, r3, #1
	add r4, r4, #2
	cmp r3, #0
	bge _080A8DEC
	add r5, r2, #0
	b _080A8E5A
	.byte 0x00
	.byte 0x00
_080A8E00:
	.4byte gUnknown_02000400
_080A8E04:
	.4byte gUnknown_0816BE30
_080A8E08:
	.4byte gRam
_080A8E0C:
	.4byte gUnknown_0816DFE8
_080A8E10:
	.4byte 0x0000098E
_080A8E14:
	.4byte gAbilityFlags
_080A8E18:
	.4byte gUnknown_0816BE42
_080A8E1C:
	.4byte gUnknown_02000402
_080A8E20:
	.4byte gUnknown_0816BE36
_080A8E24:
	.4byte gUnknown_02000404
_080A8E28:
	.4byte gUnknown_02000406
_080A8E2C:
	ldr r6, _080A9084  @ =gUnknown_02000410
	add r0, r3, r6
	ldr r7, _080A9088  @ =0x00008040
	add r1, r1, r7
	strh r1, [r0]
	ldr r1, _080A908C  @ =gUnknown_02000412
	add r0, r3, r1
	strh r2, [r0]
	add r1, r5, #0
	add r1, r1, #14
	sub r6, r6, #10
	add r2, r3, r6
	mov r3, #4
_080A8E46:
	ldrh r0, [r4]
	strh r0, [r2]
	ldrh r0, [r4, #10]
	strh r0, [r2, #14]
	add r2, r2, #2
	sub r3, r3, #1
	add r4, r4, #2
	cmp r3, #0
	bge _080A8E46
	add r5, r1, #0
_080A8E5A:
	ldr r6, [sp]
	cmp r6, #5
	ble _080A8D94
	lsl r3, r5, #1
	ldr r7, _080A9090  @ =gUnknown_02000402
	add r4, r3, r7
	ldr r0, _080A9094  @ =0x0000FFFF
	strh r0, [r4]
	sub r7, r7, #2
	strh r5, [r7]
	ldr r1, _080A9098  @ =gGloves
	mov r12, r1
	ldrb r0, [r1]
	cmp r0, #0
	beq _080A8EB6
	ldr r2, _080A909C  @ =gUnknown_0816BE4E
	ldr r0, _080A90A0  @ =0x0000098E
	add r0, r0, r8
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #1
	add r1, r1, r2
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r4]
	ldr r4, _080A90A4  @ =gUnknown_02000404
	add r1, r3, r4
	mov r0, #1
	strh r0, [r1]
	ldr r6, _080A90A8  @ =gUnknown_02000406
	add r1, r3, r6
	ldr r2, _080A90AC  @ =0x00008144
	add r0, r2, #0
	mov r4, r12
	ldrb r4, [r4]
	add r0, r0, r4
	strh r0, [r1]
	add r6, r6, #2
	add r0, r3, r6
	ldr r1, _080A9094  @ =0x0000FFFF
	strh r1, [r0]
	add r0, r5, #3
	strh r0, [r7]
_080A8EB6:
	ldr r0, _080A90B0  @ =gBoots
	ldrb r0, [r0]
	ldr r6, _080A90B4  @ =0x00000964
	add r6, r6, r8
	strh r0, [r6]
	ldr r4, _080A90B8  @ =0x00001688
	ldrh r5, [r7]
	mov r2, #0
	ldrsh r1, [r6, r2]
	lsl r1, r1, #3
	ldr r3, _080A90BC  @ =gUnknown_0816BA68
	add r1, r1, r3
	lsl r2, r5, #1
	ldr r0, _080A9090  @ =gUnknown_02000402
	add r0, r0, r2
	mov r8, r0
	ldr r3, _080A90C0  @ =0xFFFF8000
	mov r10, r3
	mov r3, r10
	add r0, r3, r4
	mov r3, r8
	strh r0, [r3]
	ldr r3, _080A90A4  @ =gUnknown_02000404
	add r0, r2, r3
	mov r3, #2
	mov r8, r3
	strh r3, [r0]
	ldr r0, _080A90A8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A90C4  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A90C8  @ =gUnknown_0200040A
	add r0, r2, r3
	ldr r3, _080A90CC  @ =0xFFFF8040
	mov r9, r3
	add r4, r4, r9
	strh r4, [r0]
	ldr r4, _080A90D0  @ =gUnknown_0200040C
	add r0, r2, r4
	mov r3, r8
	strh r3, [r0]
	add r4, r4, #2
	add r3, r2, r4
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A9084  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A908C  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A9094  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	strh r5, [r7]
	mov r4, r12
	ldrb r0, [r4]
	strh r0, [r6]
	ldr r4, _080A90D4  @ =0x00001690
	ldrh r5, [r7]
	mov r0, #0
	ldrsh r1, [r6, r0]
	lsl r1, r1, #3
	ldr r2, _080A90D8  @ =gUnknown_0816BA50
	add r1, r1, r2
	lsl r2, r5, #1
	ldr r3, _080A9090  @ =gUnknown_02000402
	add r3, r3, r2
	mov r12, r3
	mov r3, r10
	add r0, r3, r4
	mov r3, r12
	strh r0, [r3]
	ldr r3, _080A90A4  @ =gUnknown_02000404
	add r0, r2, r3
	mov r3, r8
	strh r3, [r0]
	ldr r0, _080A90A8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A90C4  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A90C8  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	ldr r4, _080A90D0  @ =gUnknown_0200040C
	add r0, r2, r4
	mov r3, r8
	strh r3, [r0]
	add r4, r4, #2
	add r3, r2, r4
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A9084  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A908C  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A9094  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	strh r5, [r7]
	ldr r0, _080A90DC  @ =gFlippers
	ldrb r0, [r0]
	strh r0, [r6]
	ldr r4, _080A90E0  @ =0x00001698
	ldrh r5, [r7]
	mov r0, #0
	ldrsh r1, [r6, r0]
	lsl r1, r1, #3
	ldr r2, _080A90E4  @ =gUnknown_0816BA78
	add r1, r1, r2
	lsl r2, r5, #1
	ldr r3, _080A9090  @ =gUnknown_02000402
	add r3, r3, r2
	mov r12, r3
	mov r3, r10
	add r0, r3, r4
	mov r3, r12
	strh r0, [r3]
	ldr r3, _080A90A4  @ =gUnknown_02000404
	add r0, r2, r3
	mov r3, r8
	strh r3, [r0]
	ldr r0, _080A90A8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r0, _080A90C4  @ =gUnknown_02000408
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A90C8  @ =gUnknown_0200040A
	add r0, r2, r3
	add r4, r4, r9
	strh r4, [r0]
	ldr r4, _080A90D0  @ =gUnknown_0200040C
	add r0, r2, r4
	mov r3, r8
	strh r3, [r0]
	add r4, r4, #2
	add r3, r2, r4
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r0, _080A9084  @ =gUnknown_02000410
	add r3, r2, r0
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r1, _080A908C  @ =gUnknown_02000412
	add r2, r2, r1
	ldr r3, _080A9094  @ =0x0000FFFF
	strh r3, [r2]
	add r5, r5, #8
	strh r5, [r7]
	ldr r0, _080A90E8  @ =gMoonPearl
	ldrb r0, [r0]
	strh r0, [r6]
	mov r5, #181
	lsl r5, r5, #5
	ldrh r4, [r7]
	mov r0, #0
	ldrsh r1, [r6, r0]
	lsl r1, r1, #3
	ldr r2, _080A90EC  @ =gUnknown_0816BA88
	add r1, r1, r2
	lsl r2, r4, #1
	ldr r3, _080A9090  @ =gUnknown_02000402
	add r0, r2, r3
	add r10, r10, r5
	mov r6, r10
	strh r6, [r0]
	add r3, r3, #2
	add r0, r2, r3
	mov r6, r8
	strh r6, [r0]
	ldr r0, _080A90A8  @ =gUnknown_02000406
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r6, _080A90C4  @ =gUnknown_02000408
	add r3, r2, r6
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	ldr r3, _080A90C8  @ =gUnknown_0200040A
	add r0, r2, r3
	add r9, r9, r5
	mov r6, r9
	strh r6, [r0]
	add r3, r3, #2
	add r0, r2, r3
	mov r6, r8
	strh r6, [r0]
	ldr r0, _080A90F0  @ =gUnknown_0200040E
	add r3, r2, r0
	ldrh r0, [r1]
	strh r0, [r3]
	ldr r6, _080A9084  @ =gUnknown_02000410
	add r3, r2, r6
	ldrh r0, [r1, #2]
	strh r0, [r3]
	ldr r0, _080A908C  @ =gUnknown_02000412
	add r2, r2, r0
	ldr r1, _080A9094  @ =0x0000FFFF
	strh r1, [r2]
	add r4, r4, #8
	strh r4, [r7]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080A9084:
	.4byte gUnknown_02000410
_080A9088:
	.4byte 0x00008040
_080A908C:
	.4byte gUnknown_02000412
_080A9090:
	.4byte gUnknown_02000402
_080A9094:
	.4byte 0x0000FFFF
_080A9098:
	.4byte gGloves
_080A909C:
	.4byte gUnknown_0816BE4E
_080A90A0:
	.4byte 0x0000098E
_080A90A4:
	.4byte gUnknown_02000404
_080A90A8:
	.4byte gUnknown_02000406
_080A90AC:
	.4byte 0x00008144
_080A90B0:
	.4byte gBoots
_080A90B4:
	.4byte 0x00000964
_080A90B8:
	.4byte 0x00001688
_080A90BC:
	.4byte gUnknown_0816BA68
_080A90C0:
	.4byte 0xFFFF8000
_080A90C4:
	.4byte gUnknown_02000408
_080A90C8:
	.4byte gUnknown_0200040A
_080A90CC:
	.4byte 0xFFFF8040
_080A90D0:
	.4byte gUnknown_0200040C
_080A90D4:
	.4byte 0x00001690
_080A90D8:
	.4byte gUnknown_0816BA50
_080A90DC:
	.4byte gFlippers
_080A90E0:
	.4byte 0x00001698
_080A90E4:
	.4byte gUnknown_0816BA78
_080A90E8:
	.4byte gMoonPearl
_080A90EC:
	.4byte gUnknown_0816BA88
_080A90F0:
	.4byte gUnknown_0200040E
	THUMB_FUNC_END sub_080A8D70

