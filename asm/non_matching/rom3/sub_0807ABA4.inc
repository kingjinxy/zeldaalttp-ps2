	THUMB_FUNC_START sub_0807ABA4
sub_0807ABA4: @ 0x0807ABA4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _0807ABD0  @ =gRam
	ldr r1, _0807ABD4  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #151
	bne _0807ABBC
	b _0807AD84
_0807ABBC:
	mov r2, #172
	lsl r2, r2, #4
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _0807ABD8
	bl sub_0807AA0C
	add r2, r0, #0
	b _0807ABFE
_0807ABD0:
	.4byte gRam
_0807ABD4:
	.4byte 0x000009DA
_0807ABD8:
	ldr r3, _0807AD18  @ =0x00001605
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
	bl sub_0807AB2C
	ldr r5, _0807AD1C  @ =0x00000AC2
	add r2, r4, r5
	ldrh r0, [r2]
	mov r6, #136
	lsl r6, r6, #6
	add r1, r0, r6
	add r0, r1, #0
	strh r0, [r2]
	mov r0, #128
	lsl r0, r0, #9
	and r1, r1, r0
	neg r1, r1
	lsr r2, r1, #31
_0807ABFE:
	ldr r4, _0807AD20  @ =gRam
	ldr r1, _0807AD24  @ =0x0000179C
	add r0, r4, r1
	mov r3, #0
	mov r8, r3
	mov r5, #0
	mov r9, r5
	strh r2, [r0]
	ldr r6, _0807AD28  @ =0x00000AC8
	add r5, r4, r6
	ldrh r0, [r5]
	sub r3, r0, r2
	strh r3, [r5]
	ldr r1, _0807AD2C  @ =0x00000952
	add r0, r4, r1
	ldrh r0, [r0]
	add r0, r3, r0
	mov r6, #149
	lsl r6, r6, #4
	add r1, r4, r6
	strh r0, [r1]
	lsl r0, r2, #16
	cmp r0, #0
	bne _0807AC30
	b _0807AECE
_0807AC30:
	ldr r6, _0807AD30  @ =gUnknown_08167914
	ldr r1, _0807AD34  @ =0x00000AC4
	add r0, r4, r1
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	lsl r1, r3, #16
	asr r1, r1, #16
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r1, r0
	bge _0807ACA0
	bl sub_0807AAC4
	add r7, r0, #0
	asr r0, r7, #1
	lsl r0, r0, #1
	add r0, r0, r6
	mov r3, #0
	ldrsh r1, [r5, r3]
	mov r5, #0
	ldrsh r0, [r0, r5]
	cmp r1, r0
	bge _0807ACA0
	ldr r6, _0807AD38  @ =0x00000504
	add r1, r4, r6
	mov r0, #123
	bl sub_0812A324
	ldr r0, _0807AD3C  @ =0x00000A3E
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	ldr r1, _0807AD40  @ =0x0000097C
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	ldr r3, _0807AD44  @ =0x000009E6
	add r1, r4, r3
	add r0, r0, r1
	mov r5, r8
	strb r5, [r0]
	ldr r6, _0807AD18  @ =0x00001605
	add r0, r4, r6
	strb r5, [r0]
	ldr r1, _0807AD48  @ =0x00001770
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0807AD4C  @ =0x00000A2A
	add r0, r4, r2
	mov r3, r9
	strh r3, [r0]
	ldr r5, _0807AD50  @ =0x00000A28
	add r0, r4, r5
	strh r3, [r0]
_0807ACA0:
	ldr r2, _0807AD20  @ =gRam
	ldr r6, _0807AD28  @ =0x00000AC8
	add r0, r2, r6
	mov r3, #0
	ldrsh r1, [r0, r3]
	neg r1, r1
	mov r0, #252
	lsl r0, r0, #1
	and r1, r1, r0
	asr r1, r1, #2
	mov r5, #150
	lsl r5, r5, #4
	add r3, r2, r5
	add r6, r6, #8
	add r2, r2, r6
	ldrh r0, [r2]
	sub r0, r0, r1
	strh r0, [r3]
	ldr r6, _0807AD54  @ =gUnknown_02000400
	ldrh r7, [r6]
	mov r0, #0
	ldrsh r4, [r3, r0]
	lsl r1, r7, #1
	ldr r5, _0807AD58  @ =gUnknown_02000402
	add r2, r1, r5
	ldr r5, _0807AD5C  @ =0xFFFFA000
	add r0, r4, r5
	strh r0, [r2]
	ldr r2, _0807AD60  @ =gUnknown_02000404
	add r0, r1, r2
	ldr r2, _0807AD64  @ =0x0000C020
	add r5, r2, #0
	strh r5, [r0]
	ldr r2, _0807AD68  @ =gUnknown_02000406
	add r0, r1, r2
	mov r2, #246
	lsl r2, r2, #1
	add r4, r2, #0
	strh r4, [r0]
	mov r2, #0
	ldrsh r0, [r3, r2]
	ldr r3, _0807AD6C  @ =gUnknown_02000408
	add r2, r1, r3
	ldr r3, _0807AD70  @ =0xFFFFB000
	add r0, r0, r3
	strh r0, [r2]
	ldr r2, _0807AD74  @ =gUnknown_0200040A
	add r0, r1, r2
	strh r5, [r0]
	ldr r3, _0807AD78  @ =gUnknown_0200040C
	add r0, r1, r3
	strh r4, [r0]
	ldr r5, _0807AD7C  @ =gUnknown_0200040E
	add r1, r1, r5
	ldr r2, _0807AD80  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	add r0, r7, #6
	strh r0, [r6]
	b _0807AECE
_0807AD18:
	.4byte 0x00001605
_0807AD1C:
	.4byte 0x00000AC2
_0807AD20:
	.4byte gRam
_0807AD24:
	.4byte 0x0000179C
_0807AD28:
	.4byte 0x00000AC8
_0807AD2C:
	.4byte 0x00000952
_0807AD30:
	.4byte gUnknown_08167914
_0807AD34:
	.4byte 0x00000AC4
_0807AD38:
	.4byte 0x00000504
_0807AD3C:
	.4byte 0x00000A3E
_0807AD40:
	.4byte 0x0000097C
_0807AD44:
	.4byte 0x000009E6
_0807AD48:
	.4byte 0x00001770
_0807AD4C:
	.4byte 0x00000A2A
_0807AD50:
	.4byte 0x00000A28
_0807AD54:
	.4byte gUnknown_02000400
_0807AD58:
	.4byte gUnknown_02000402
_0807AD5C:
	.4byte 0xFFFFA000
_0807AD60:
	.4byte gUnknown_02000404
_0807AD64:
	.4byte 0x0000C020
_0807AD68:
	.4byte gUnknown_02000406
_0807AD6C:
	.4byte gUnknown_02000408
_0807AD70:
	.4byte 0xFFFFB000
_0807AD74:
	.4byte gUnknown_0200040A
_0807AD78:
	.4byte gUnknown_0200040C
_0807AD7C:
	.4byte gUnknown_0200040E
_0807AD80:
	.4byte 0x0000FFFF
_0807AD84:
	mov r3, #172
	lsl r3, r3, #4
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _0807AD98
	bl sub_0807AA0C
	add r2, r0, #0
	b _0807ADBE
_0807AD98:
	ldr r5, _0807AEDC  @ =0x00001605
	add r1, r4, r5
	mov r0, #1
	strb r0, [r1]
	bl sub_0807AB2C
	ldr r6, _0807AEE0  @ =0x00000AC2
	add r2, r4, r6
	ldrh r0, [r2]
	mov r3, #136
	lsl r3, r3, #6
	add r1, r0, r3
	add r0, r1, #0
	strh r0, [r2]
	mov r0, #128
	lsl r0, r0, #9
	and r1, r1, r0
	neg r1, r1
	lsr r2, r1, #31
_0807ADBE:
	ldr r4, _0807AEE4  @ =gRam
	ldr r5, _0807AEE8  @ =0x0000179C
	add r0, r4, r5
	mov r6, #0
	mov r8, r6
	mov r1, #0
	mov r9, r1
	strh r2, [r0]
	ldr r3, _0807AEEC  @ =0x00000AC8
	add r5, r4, r3
	ldrh r0, [r5]
	sub r1, r0, r2
	strh r1, [r5]
	lsl r0, r2, #16
	cmp r0, #0
	beq _0807AECE
	ldr r6, _0807AEF0  @ =gUnknown_08167914
	ldr r2, _0807AEF4  @ =0x00000AC4
	add r0, r4, r2
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r1, r0
	bge _0807AECE
	bl sub_0807AAC4
	add r7, r0, #0
	asr r0, r7, #1
	lsl r0, r0, #1
	add r0, r0, r6
	mov r6, #0
	ldrsh r1, [r5, r6]
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r1, r0
	bge _0807AECE
	ldr r3, _0807AEF8  @ =0x00000504
	add r1, r4, r3
	mov r0, #123
	bl sub_0812A324
	ldr r5, _0807AEFC  @ =0x00000A3E
	add r1, r4, r5
	mov r0, #255
	strb r0, [r1]
	ldr r6, _0807AF00  @ =0x0000097C
	add r0, r4, r6
	mov r1, #0
	ldrsh r0, [r0, r1]
	ldr r2, _0807AF04  @ =0x000009E6
	add r1, r4, r2
	add r0, r0, r1
	mov r3, r8
	strb r3, [r0]
	ldr r5, _0807AEDC  @ =0x00001605
	add r0, r4, r5
	strb r3, [r0]
	ldr r6, _0807AF08  @ =0x00001770
	add r0, r4, r6
	strb r3, [r0]
	ldr r1, _0807AF0C  @ =0x00000A2A
	add r0, r4, r1
	mov r2, r9
	strh r2, [r0]
	ldr r3, _0807AF10  @ =0x00000A28
	add r0, r4, r3
	strh r2, [r0]
	ldr r0, _0807AF14  @ =gUnknown_0832C90C
	ldr r5, _0807AF18  @ =gUnknown_0201C000
	mov r8, r5
	mov r1, r8
	bl LZ77UnCompWram
	ldr r6, _0807AF1C  @ =gUnknown_0201C800
	ldr r0, _0807AF20  @ =gUnknown_02018800
	mov r10, r0
	mov r4, #128
	lsl r4, r4, #2
	add r0, r6, #0
	mov r1, r10
	add r2, r4, #0
	bl CpuFastSet
	ldr r5, _0807AF24  @ =gUnknown_0201D800
	ldr r1, _0807AF28  @ =gUnknown_02019800
	mov r9, r1
	add r0, r5, #0
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807AF2C  @ =gUnknown_0838C224
	mov r1, r8
	bl LZ77UnCompWram
	ldr r1, _0807AF30  @ =0x0600E800
	add r0, r6, #0
	add r2, r4, #0
	bl CpuFastSet
	ldr r1, _0807AF34  @ =0x0600F800
	add r0, r5, #0
	add r2, r4, #0
	bl CpuFastSet
	ldr r1, _0807AF38  @ =0x0600C800
	mov r0, r10
	add r2, r4, #0
	bl CpuFastSet
	ldr r1, _0807AF3C  @ =0x0600D800
	mov r0, r9
	add r2, r4, #0
	bl CpuFastSet
	ldr r7, _0807AF40  @ =0x000005A9
	mov r4, #15
	mov r2, #0
	ldr r5, _0807AF44  @ =gUnknown_0200CBE0
	ldr r1, _0807AF48  @ =gUnknown_0200D149
	ldr r3, _0807AF4C  @ =gUnknown_0200CBE1
_0807AEB8:
	strb r2, [r1]
	strb r2, [r1, #1]
	add r0, r7, r5
	strb r2, [r0]
	add r0, r7, r3
	strb r2, [r0]
	add r1, r1, #128
	add r7, r7, #128
	sub r4, r4, #1
	cmp r4, #0
	bne _0807AEB8
_0807AECE:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0807AEDC:
	.4byte 0x00001605
_0807AEE0:
	.4byte 0x00000AC2
_0807AEE4:
	.4byte gRam
_0807AEE8:
	.4byte 0x0000179C
_0807AEEC:
	.4byte 0x00000AC8
_0807AEF0:
	.4byte gUnknown_08167914
_0807AEF4:
	.4byte 0x00000AC4
_0807AEF8:
	.4byte 0x00000504
_0807AEFC:
	.4byte 0x00000A3E
_0807AF00:
	.4byte 0x0000097C
_0807AF04:
	.4byte 0x000009E6
_0807AF08:
	.4byte 0x00001770
_0807AF0C:
	.4byte 0x00000A2A
_0807AF10:
	.4byte 0x00000A28
_0807AF14:
	.4byte gUnknown_0832C90C
_0807AF18:
	.4byte gUnknown_0201C000
_0807AF1C:
	.4byte gUnknown_0201C800
_0807AF20:
	.4byte gUnknown_02018800
_0807AF24:
	.4byte gUnknown_0201D800
_0807AF28:
	.4byte gUnknown_02019800
_0807AF2C:
	.4byte gUnknown_0838C224
_0807AF30:
	.4byte 0x0600E800
_0807AF34:
	.4byte 0x0600F800
_0807AF38:
	.4byte 0x0600C800
_0807AF3C:
	.4byte 0x0600D800
_0807AF40:
	.4byte 0x000005A9
_0807AF44:
	.4byte gUnknown_0200CBE0
_0807AF48:
	.4byte gUnknown_0200D149
_0807AF4C:
	.4byte gUnknown_0200CBE1
	THUMB_FUNC_END sub_0807ABA4

