	THUMB_FUNC_START sub_08083974
sub_08083974: @ 0x08083974
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	add r7, r1, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r3, _08083A08  @ =gUnknown_0200CBA0
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	add r3, r3, #63
	add r1, r0, r3
	strb r2, [r1]
	ldr r1, _08083A0C  @ =gUnknown_0200CBE1
	add r0, r0, r1
	strb r2, [r0]
	ldr r0, _08083A10  @ =gUnknown_02000400
	ldrh r0, [r0]
	mov r9, r0
	mov r0, #128
	lsl r0, r0, #6
	and r0, r0, r7
	cmp r0, #0
	beq _08083A30
	ldr r4, _08083A14  @ =0x00001FFF
	and r4, r4, r7
	add r0, r4, #0
	bl sub_08080380
	ldr r5, _08083A18  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r5, r5, r2
	strh r0, [r5]
	mov r3, r9
	lsl r6, r3, #1
	ldr r2, _08083A1C  @ =gUnknown_02000402
	add r1, r6, r2
	ldr r3, _08083A20  @ =0xFFFFA000
	mov r8, r3
	add r0, r0, r8
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #128
	bl sub_08080380
	strh r0, [r5]
	ldr r2, _08083A24  @ =gUnknown_02000408
	add r1, r6, r2
	add r0, r0, r8
	strh r0, [r1]
	add r0, r4, #2
	bl sub_08080380
	strh r0, [r5]
	ldr r3, _08083A28  @ =gUnknown_0200040E
	add r1, r6, r3
	add r0, r0, r8
	strh r0, [r1]
	add r4, r4, #130
	add r0, r4, #0
	bl sub_08080380
	strh r0, [r5]
	ldr r2, _08083A2C  @ =gUnknown_02000414
	add r1, r6, r2
	add r0, r0, r8
	strh r0, [r1]
	add r5, r6, #0
	b _08083A84
	.byte 0x00
	.byte 0x00
_08083A08:
	.4byte gUnknown_0200CBA0
_08083A0C:
	.4byte gUnknown_0200CBE1
_08083A10:
	.4byte gUnknown_02000400
_08083A14:
	.4byte 0x00001FFF
_08083A18:
	.4byte gRam
_08083A1C:
	.4byte gUnknown_02000402
_08083A20:
	.4byte 0xFFFFA000
_08083A24:
	.4byte gUnknown_02000408
_08083A28:
	.4byte gUnknown_0200040E
_08083A2C:
	.4byte gUnknown_02000414
_08083A30:
	add r0, r7, #0
	bl sub_08080380
	ldr r4, _08083ABC  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r4, r4, r3
	strh r0, [r4]
	mov r1, r9
	lsl r5, r1, #1
	ldr r2, _08083AC0  @ =gUnknown_02000402
	add r1, r5, r2
	ldr r3, _08083AC4  @ =0xFFFFC000
	add r6, r3, #0
	add r0, r0, r6
	strh r0, [r1]
	add r0, r7, #0
	add r0, r0, #128
	bl sub_08080380
	strh r0, [r4]
	ldr r2, _08083AC8  @ =gUnknown_02000408
	add r1, r5, r2
	add r0, r0, r6
	strh r0, [r1]
	add r0, r7, #2
	bl sub_08080380
	strh r0, [r4]
	ldr r3, _08083ACC  @ =gUnknown_0200040E
	add r1, r5, r3
	add r0, r0, r6
	strh r0, [r1]
	add r0, r7, #0
	add r0, r0, #130
	bl sub_08080380
	strh r0, [r4]
	ldr r2, _08083AD0  @ =gUnknown_02000414
	add r1, r5, r2
	add r0, r0, r6
	strh r0, [r1]
_08083A84:
	ldr r3, _08083AD4  @ =gUnknown_02000404
	add r0, r5, r3
	mov r1, #1
	strh r1, [r0]
	ldr r2, _08083AD8  @ =gUnknown_0200040A
	add r0, r5, r2
	strh r1, [r0]
	add r3, r3, #12
	add r0, r5, r3
	strh r1, [r0]
	add r2, r2, #12
	add r0, r5, r2
	strh r1, [r0]
	add r3, r3, #10
	add r1, r5, r3
	ldr r2, _08083ADC  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08083AE0  @ =gUnknown_02000400
	mov r0, r9
	add r0, r0, #12
	strh r0, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08083ABC:
	.4byte gRam
_08083AC0:
	.4byte gUnknown_02000402
_08083AC4:
	.4byte 0xFFFFC000
_08083AC8:
	.4byte gUnknown_02000408
_08083ACC:
	.4byte gUnknown_0200040E
_08083AD0:
	.4byte gUnknown_02000414
_08083AD4:
	.4byte gUnknown_02000404
_08083AD8:
	.4byte gUnknown_0200040A
_08083ADC:
	.4byte 0x0000FFFF
_08083AE0:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_08083974

