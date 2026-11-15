	THUMB_FUNC_START sub_0812E8DC
sub_0812E8DC: @ 0x0812E8DC
	push {r4-r7,lr}
	bl sub_0812E7B0
	ldr r1, _0812E908  @ =gUnknown_0822B624
	ldr r2, _0812E90C  @ =gRam
	ldr r3, _0812E910  @ =0x00000C9B
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldrb r1, [r0]
	cmp r1, #255
	beq _0812E956
	cmp r1, #45
	bne _0812E91C
	ldr r1, _0812E914  @ =gUnknown_0822B4E0
	ldr r4, _0812E918  @ =0x0000098E
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	b _0812E920
_0812E908:
	.4byte gUnknown_0822B624
_0812E90C:
	.4byte gRam
_0812E910:
	.4byte 0x00000C9B
_0812E914:
	.4byte gUnknown_0822B4E0
_0812E918:
	.4byte 0x0000098E
_0812E91C:
	ldr r1, _0812EA9C  @ =gUnknown_0822B324
	ldrb r0, [r0]
_0812E920:
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812EAA0  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EAA4  @ =0x06012000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAA8  @ =gUnknown_02032200
	ldr r1, _0812EAAC  @ =0x06012400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB0  @ =gUnknown_02032400
	ldr r1, _0812EAB4  @ =0x06012800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB8  @ =gUnknown_02032600
	ldr r1, _0812EABC  @ =0x06012C00
	mov r2, #128
	bl CpuFastSet
_0812E956:
	ldr r6, _0812EAC0  @ =gUnknown_0822B624
	ldr r7, _0812EAC4  @ =gRam
	ldr r0, _0812EAC8  @ =0x00000C9B
	add r5, r7, r0
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #1
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812E9A4
	ldr r1, _0812EA9C  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812EAA0  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EACC  @ =0x06012200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAA8  @ =gUnknown_02032200
	ldr r1, _0812EAD0  @ =0x06012600
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB0  @ =gUnknown_02032400
	ldr r1, _0812EAD4  @ =0x06012A00
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB8  @ =gUnknown_02032600
	ldr r1, _0812EAD8  @ =0x06012E00
	mov r2, #128
	bl CpuFastSet
_0812E9A4:
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #2
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812E9EA
	ldr r1, _0812EA9C  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812EAA0  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EADC  @ =0x06013000
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAA8  @ =gUnknown_02032200
	ldr r1, _0812EAE0  @ =0x06013400
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB0  @ =gUnknown_02032400
	ldr r1, _0812EAE4  @ =0x06013800
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB8  @ =gUnknown_02032600
	ldr r1, _0812EAE8  @ =0x06013C00
	mov r2, #128
	bl CpuFastSet
_0812E9EA:
	ldrb r0, [r5]
	lsl r0, r0, #2
	add r1, r6, #3
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812EA30
	ldr r1, _0812EA9C  @ =gUnknown_0822B324
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r4, _0812EAA0  @ =gUnknown_02032000
	add r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, _0812EAEC  @ =0x06013200
	add r0, r4, #0
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAA8  @ =gUnknown_02032200
	ldr r1, _0812EAF0  @ =0x06013600
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB0  @ =gUnknown_02032400
	ldr r1, _0812EAF4  @ =0x06013A00
	mov r2, #128
	bl CpuFastSet
	ldr r0, _0812EAB8  @ =gUnknown_02032600
	ldr r1, _0812EAF8  @ =0x06013E00
	mov r2, #128
	bl CpuFastSet
_0812EA30:
	ldr r5, _0812EAFC  @ =gUnknown_0822B150
	ldr r6, _0812EB00  @ =gUnknown_0822B4FC
	ldr r1, _0812EB04  @ =0x00000C99
	add r4, r7, r1
	ldrb r0, [r4]
	lsl r0, r0, #3
	add r0, r0, r6
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	mov r1, #192
	lsl r1, r1, #19
	bl LZ77UnCompVram
	ldrb r0, [r4]
	lsl r0, r0, #3
	add r1, r6, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	ldr r1, _0812EB08  @ =0x06000800
	bl LZ77UnCompVram
	ldrb r0, [r4]
	lsl r0, r0, #3
	add r1, r6, #2
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	ldr r1, _0812EB0C  @ =0x06001000
	bl LZ77UnCompVram
	ldr r1, _0812EB10  @ =gUnknown_0822B864
	ldr r2, _0812EB14  @ =0x00000C9A
	add r0, r7, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #255
	beq _0812EB1C
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	ldr r1, _0812EB18  @ =0x06001800
	bl LZ77UnCompVram
	b _0812EB32
	.byte 0x00
	.byte 0x00
_0812EA9C:
	.4byte gUnknown_0822B324
_0812EAA0:
	.4byte gUnknown_02032000
_0812EAA4:
	.4byte 0x06012000
_0812EAA8:
	.4byte gUnknown_02032200
_0812EAAC:
	.4byte 0x06012400
_0812EAB0:
	.4byte gUnknown_02032400
_0812EAB4:
	.4byte 0x06012800
_0812EAB8:
	.4byte gUnknown_02032600
_0812EABC:
	.4byte 0x06012C00
_0812EAC0:
	.4byte gUnknown_0822B624
_0812EAC4:
	.4byte gRam
_0812EAC8:
	.4byte 0x00000C9B
_0812EACC:
	.4byte 0x06012200
_0812EAD0:
	.4byte 0x06012600
_0812EAD4:
	.4byte 0x06012A00
_0812EAD8:
	.4byte 0x06012E00
_0812EADC:
	.4byte 0x06013000
_0812EAE0:
	.4byte 0x06013400
_0812EAE4:
	.4byte 0x06013800
_0812EAE8:
	.4byte 0x06013C00
_0812EAEC:
	.4byte 0x06013200
_0812EAF0:
	.4byte 0x06013600
_0812EAF4:
	.4byte 0x06013A00
_0812EAF8:
	.4byte 0x06013E00
_0812EAFC:
	.4byte gUnknown_0822B150
_0812EB00:
	.4byte gUnknown_0822B4FC
_0812EB04:
	.4byte 0x00000C99
_0812EB08:
	.4byte 0x06000800
_0812EB0C:
	.4byte 0x06001000
_0812EB10:
	.4byte gUnknown_0822B864
_0812EB14:
	.4byte 0x00000C9A
_0812EB18:
	.4byte 0x06001800
_0812EB1C:
	ldrb r0, [r4]
	lsl r0, r0, #3
	add r1, r6, #3
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r5
	ldr r0, [r0]
	ldr r1, _0812EB60  @ =0x06001800
	bl LZ77UnCompVram
_0812EB32:
	ldr r1, _0812EB64  @ =gUnknown_0822B864
	ldr r3, _0812EB68  @ =gRam
	ldr r4, _0812EB6C  @ =0x00000C9A
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, #1
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #255
	beq _0812EBB0
	cmp r0, #83
	bne _0812EB78
	ldr r1, _0812EB70  @ =0x0000098E
	add r0, r3, r1
	ldrb r0, [r0]
	sub r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _0812EB78
	ldr r0, _0812EB74  @ =gUnknown_08270B48
	b _0812EB92
_0812EB60:
	.4byte 0x06001800
_0812EB64:
	.4byte gUnknown_0822B864
_0812EB68:
	.4byte gRam
_0812EB6C:
	.4byte 0x00000C9A
_0812EB70:
	.4byte 0x0000098E
_0812EB74:
	.4byte gUnknown_08270B48
_0812EB78:
	ldr r2, _0812EB9C  @ =gUnknown_0822B150
	ldr r1, _0812EBA0  @ =gUnknown_0822B864
	ldr r0, _0812EBA4  @ =gRam
	ldr r3, _0812EBA8  @ =0x00000C9A
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
_0812EB92:
	ldr r1, _0812EBAC  @ =0x06002000
	bl LZ77UnCompVram
	b _0812EBCE
	.byte 0x00
	.byte 0x00
_0812EB9C:
	.4byte gUnknown_0822B150
_0812EBA0:
	.4byte gUnknown_0822B864
_0812EBA4:
	.4byte gRam
_0812EBA8:
	.4byte 0x00000C9A
_0812EBAC:
	.4byte 0x06002000
_0812EBB0:
	ldr r2, _0812EBF8  @ =gUnknown_0822B150
	ldr r1, _0812EBFC  @ =gUnknown_0822B4FC
	ldr r4, _0812EC00  @ =0x00000C99
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r1, r1, #4
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	ldr r1, _0812EC04  @ =0x06002000
	bl LZ77UnCompVram
_0812EBCE:
	ldr r1, _0812EC08  @ =gUnknown_0822B864
	ldr r3, _0812EC0C  @ =gRam
	ldr r2, _0812EC10  @ =0x00000C9A
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, #2
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #255
	beq _0812EC18
	ldr r0, _0812EBF8  @ =gUnknown_0822B150
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	ldr r1, _0812EC14  @ =0x06002800
	bl LZ77UnCompVram
	b _0812EC36
	.byte 0x00
	.byte 0x00
_0812EBF8:
	.4byte gUnknown_0822B150
_0812EBFC:
	.4byte gUnknown_0822B4FC
_0812EC00:
	.4byte 0x00000C99
_0812EC04:
	.4byte 0x06002000
_0812EC08:
	.4byte gUnknown_0822B864
_0812EC0C:
	.4byte gRam
_0812EC10:
	.4byte 0x00000C9A
_0812EC14:
	.4byte 0x06002800
_0812EC18:
	ldr r2, _0812EC60  @ =gUnknown_0822B150
	ldr r1, _0812EC64  @ =gUnknown_0822B4FC
	ldr r4, _0812EC68  @ =0x00000C99
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r1, r1, #5
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	ldr r1, _0812EC6C  @ =0x06002800
	bl LZ77UnCompVram
_0812EC36:
	ldr r1, _0812EC70  @ =gUnknown_0822B864
	ldr r3, _0812EC74  @ =gRam
	ldr r2, _0812EC78  @ =0x00000C9A
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, #3
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #255
	beq _0812EC80
	ldr r0, _0812EC60  @ =gUnknown_0822B150
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	ldr r1, _0812EC7C  @ =0x06003000
	bl LZ77UnCompVram
	b _0812EC9E
	.byte 0x00
	.byte 0x00
_0812EC60:
	.4byte gUnknown_0822B150
_0812EC64:
	.4byte gUnknown_0822B4FC
_0812EC68:
	.4byte 0x00000C99
_0812EC6C:
	.4byte 0x06002800
_0812EC70:
	.4byte gUnknown_0822B864
_0812EC74:
	.4byte gRam
_0812EC78:
	.4byte 0x00000C9A
_0812EC7C:
	.4byte 0x06003000
_0812EC80:
	ldr r2, _0812ECC4  @ =gUnknown_0822B150
	ldr r1, _0812ECC8  @ =gUnknown_0822B4FC
	ldr r4, _0812ECCC  @ =0x00000C99
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r1, r1, #6
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	ldr r1, _0812ECD0  @ =0x06003000
	bl LZ77UnCompVram
_0812EC9E:
	ldr r2, _0812ECC4  @ =gUnknown_0822B150
	ldr r1, _0812ECC8  @ =gUnknown_0822B4FC
	ldr r0, _0812ECD4  @ =gRam
	ldr r3, _0812ECCC  @ =0x00000C99
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r1, r1, #7
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	ldr r1, _0812ECD8  @ =0x06003800
	bl LZ77UnCompVram
	pop {r4-r7}
	pop {r0}
	bx r0
_0812ECC4:
	.4byte gUnknown_0822B150
_0812ECC8:
	.4byte gUnknown_0822B4FC
_0812ECCC:
	.4byte 0x00000C99
_0812ECD0:
	.4byte 0x06003000
_0812ECD4:
	.4byte gRam
_0812ECD8:
	.4byte 0x06003800
	THUMB_FUNC_END sub_0812E8DC

