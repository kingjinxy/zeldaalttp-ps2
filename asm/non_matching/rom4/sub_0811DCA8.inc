	THUMB_FUNC_START sub_0811DCA8
sub_0811DCA8: @ 0x0811DCA8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, #0
	mov r0, sp
	strb r1, [r0]
	mov r0, #0
	str r0, [sp, #4]
	ldr r2, _0811DCF0  @ =gRam
	ldr r1, _0811DCF4  @ =0x00001827
	add r0, r2, r1
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811DCD8
	b _0811E496
_0811DCD8:
	mov r3, sp
	ldrb r3, [r3, #4]
	strb r3, [r1]
	ldr r4, _0811DCF8  @ =0x00001770
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811DCFC
	add r0, r6, #0
	bl sub_0811E4BC
	b _0811E496
_0811DCF0:
	.4byte gRam
_0811DCF4:
	.4byte 0x00001827
_0811DCF8:
	.4byte 0x00001770
_0811DCFC:
	ldr r5, _0811DD28  @ =0x0000185B
	add r0, r2, r5
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811DDA2
	ldr r1, _0811DD2C  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811DD1A
	cmp r0, #8
	beq _0811DD1A
	cmp r0, #17
	bne _0811DD30
_0811DD1A:
	add r0, r6, #0
	bl sub_0811A234
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	b _0811DD64
_0811DD28:
	.4byte 0x0000185B
_0811DD2C:
	.4byte 0x000009AD
_0811DD30:
	add r1, r6, #1
	ldr r3, _0811DDBC  @ =0x0000177A
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r1, r0
	bne _0811DD64
	ldr r4, _0811DDC0  @ =0x00001813
	add r0, r2, r4
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _0811DD64
	cmp r0, #3
	beq _0811DD5E
	add r0, r6, #0
	mov r1, #3
	bl sub_0811A0DC
	add r0, r6, #0
	bl sub_0811BE70
	mov r0, #3
	strb r0, [r4]
_0811DD5E:
	add r0, r6, #0
	bl sub_0811A158
_0811DD64:
	ldr r0, _0811DDC4  @ =gRam
	ldr r5, _0811DDC8  @ =0x000009B2
	add r1, r0, r5
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r3, r0, #0
	cmp r1, #0
	bne _0811DD78
	b _0811DF9E
_0811DD78:
	ldr r1, _0811DDC0  @ =0x00001813
	add r0, r3, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811DDA2
	ldr r2, _0811DDCC  @ =0x00001791
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0811DDA2
	ldr r4, _0811DDD0  @ =0x00000A92
	add r0, r3, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811DDD8
	cmp r0, #255
	beq _0811DDD8
_0811DDA2:
	ldr r2, _0811DDC4  @ =gRam
	ldr r5, _0811DDBC  @ =0x0000177A
	add r0, r2, r5
	ldrb r1, [r0]
	add r0, r6, #1
	cmp r1, r0
	beq _0811DDB2
	b _0811DF9E
_0811DDB2:
	ldr r0, _0811DDD4  @ =0x00000BC4
	add r1, r2, r0
	mov r0, #0
	b _0811DF9C
	.byte 0x00
	.byte 0x00
_0811DDBC:
	.4byte 0x0000177A
_0811DDC0:
	.4byte 0x00001813
_0811DDC4:
	.4byte gRam
_0811DDC8:
	.4byte 0x000009B2
_0811DDCC:
	.4byte 0x00001791
_0811DDD0:
	.4byte 0x00000A92
_0811DDD4:
	.4byte 0x00000BC4
_0811DDD8:
	ldr r1, _0811DEB0  @ =0x0000188B
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811DDE4
	b _0811DF64
_0811DDE4:
	ldr r2, _0811DEB4  @ =0x00000996
	add r0, r3, r2
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	lsl r5, r0, #1
	add r7, r3, #0
	ldr r3, _0811DEB8  @ =0x00000A74
	add r0, r7, r3
	add r0, r0, r6
	mov r8, r0
	ldr r4, _0811DEBC  @ =0x0000187A
	add r0, r7, r4
	add r0, r6, r0
	str r0, [sp, #8]
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r7
	mov r10, r0
	ldr r1, _0811DEC0  @ =0x00000964
	add r1, r1, r7
	mov r9, r1
_0811DE10:
	ldr r2, _0811DEC4  @ =0x00000DC5
	add r0, r7, r2
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r3, _0811DEC8  @ =0x00000DD9
	add r0, r7, r3
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _0811DECC  @ =gUnknown_0817FA6C
	lsr r3, r5, #1
	lsl r3, r3, #1
	add r0, r3, r0
	orr r2, r2, r1
	ldrh r0, [r0]
	add r2, r2, r0
	mov r4, r10
	strh r2, [r4]
	ldr r1, _0811DED0  @ =0x00001732
	add r0, r7, r1
	strb r2, [r0]
	ldr r2, _0811DED4  @ =0x00001733
	add r1, r7, r2
	mov r2, #0
	ldrsh r0, [r4, r2]
	mov r4, #255
	lsl r4, r4, #8
	and r0, r0, r4
	asr r0, r0, #8
	strb r0, [r1]
	ldr r1, _0811DED8  @ =0x00000DCF
	add r0, r7, r1
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r4, _0811DEDC  @ =0x00000DE3
	add r0, r7, r4
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _0811DEE0  @ =gUnknown_0817FA84
	add r3, r3, r0
	orr r2, r2, r1
	ldrh r3, [r3]
	add r2, r2, r3
	mov r0, r9
	strh r2, [r0]
	ldr r1, _0811DEE4  @ =0x00001734
	add r0, r7, r1
	strb r2, [r0]
	ldr r2, _0811DEE8  @ =0x00001735
	add r1, r7, r2
	mov r3, r9
	mov r4, #0
	ldrsh r0, [r3, r4]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	strb r0, [r1]
	mov r3, r8
	ldrb r4, [r3]
	add r0, r6, #0
	mov r1, sp
	bl sub_080BFCAC
	mov r0, r8
	strb r4, [r0]
	ldr r1, [sp, #8]
	ldrb r0, [r1]
	cmp r0, #182
	beq _0811DEEC
	cmp r0, #188
	beq _0811DEEC
	add r0, r5, #0
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #23
	bhi _0811DF9E
	b _0811DE10
_0811DEB0:
	.4byte 0x0000188B
_0811DEB4:
	.4byte 0x00000996
_0811DEB8:
	.4byte 0x00000A74
_0811DEBC:
	.4byte 0x0000187A
_0811DEC0:
	.4byte 0x00000964
_0811DEC4:
	.4byte 0x00000DC5
_0811DEC8:
	.4byte 0x00000DD9
_0811DECC:
	.4byte gUnknown_0817FA6C
_0811DED0:
	.4byte 0x00001732
_0811DED4:
	.4byte 0x00001733
_0811DED8:
	.4byte 0x00000DCF
_0811DEDC:
	.4byte 0x00000DE3
_0811DEE0:
	.4byte gUnknown_0817FA84
_0811DEE4:
	.4byte 0x00001734
_0811DEE8:
	.4byte 0x00001735
_0811DEEC:
	ldr r4, _0811DF40  @ =gRam
	ldr r2, _0811DF44  @ =0x00000DC5
	add r0, r4, r2
	add r0, r6, r0
	ldr r3, _0811DF48  @ =0x00001732
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r5, _0811DF4C  @ =0x00000DD9
	add r0, r4, r5
	add r0, r6, r0
	ldr r2, _0811DF50  @ =0x00001733
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _0811DF54  @ =0x00000DCF
	add r0, r4, r3
	add r0, r6, r0
	ldr r5, _0811DF58  @ =0x00001734
	add r1, r4, r5
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _0811DF5C  @ =0x00000DE3
	add r0, r4, r1
	add r0, r6, r0
	add r2, r2, #2
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r6, #0
	bl sub_0811F6F8
	ldr r3, _0811DF60  @ =0x0000177A
	add r4, r4, r3
	ldrb r1, [r4]
	add r0, r6, #1
	cmp r1, r0
	beq _0811DF3A
	b _0811E496
_0811DF3A:
	mov r0, #0
	strb r0, [r4]
	b _0811E496
_0811DF40:
	.4byte gRam
_0811DF44:
	.4byte 0x00000DC5
_0811DF48:
	.4byte 0x00001732
_0811DF4C:
	.4byte 0x00000DD9
_0811DF50:
	.4byte 0x00001733
_0811DF54:
	.4byte 0x00000DCF
_0811DF58:
	.4byte 0x00001734
_0811DF5C:
	.4byte 0x00000DE3
_0811DF60:
	.4byte 0x0000177A
_0811DF64:
	add r0, r6, #0
	str r3, [sp, #12]
	bl sub_0811E7A8
	lsl r0, r0, #24
	ldr r3, [sp, #12]
	cmp r0, #0
	bne _0811DF9E
	ldr r4, _0811DF8C  @ =0x00000A92
	add r0, r3, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811DF94
	cmp r0, #255
	bne _0811DF9E
	ldr r5, _0811DF90  @ =0x00000BC4
	add r1, r3, r5
	b _0811DF98
	.byte 0x00
	.byte 0x00
_0811DF8C:
	.4byte 0x00000A92
_0811DF90:
	.4byte 0x00000BC4
_0811DF94:
	ldr r0, _0811E008  @ =0x00000BC4
	add r1, r3, r0
_0811DF98:
	ldrb r0, [r1]
	add r0, r0, #1
_0811DF9C:
	strb r0, [r1]
_0811DF9E:
	add r0, r6, #0
	bl sub_0811A010
	ldr r4, _0811E00C  @ =gRam
	ldr r1, _0811E010  @ =0x00000E3D
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _0811E014  @ =0x00001734
	add r0, r4, r2
	mov r3, #0
	strb r1, [r0]
	ldr r5, _0811E018  @ =0x00000A74
	add r0, r4, r5
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r5, _0811E01C  @ =0x00001735
	add r1, r4, r5
	strb r2, [r1]
	strb r3, [r0]
	add r0, r6, #0
	mov r1, #0
	bl sub_080BFE6C
	mov r1, sp
	strb r0, [r1]
	ldr r1, _0811E020  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0811E030
	ldr r2, _0811E024  @ =0x00001818
	add r0, r4, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E030
	ldr r3, _0811E028  @ =0x0000187A
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #28
	bne _0811E030
	ldr r5, _0811E02C  @ =0x0000186B
	add r0, r4, r5
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	add r3, r4, #0
	b _0811E03E
	.byte 0x00
	.byte 0x00
_0811E008:
	.4byte 0x00000BC4
_0811E00C:
	.4byte gRam
_0811E010:
	.4byte 0x00000E3D
_0811E014:
	.4byte 0x00001734
_0811E018:
	.4byte 0x00000A74
_0811E01C:
	.4byte 0x00001735
_0811E020:
	.4byte 0x000009B2
_0811E024:
	.4byte 0x00001818
_0811E028:
	.4byte 0x0000187A
_0811E02C:
	.4byte 0x0000186B
_0811E030:
	ldr r0, _0811E0A4  @ =gRam
	ldr r2, _0811E0A8  @ =0x0000186B
	add r1, r0, r2
	add r1, r6, r1
	mov r2, #0
	strb r2, [r1]
	add r3, r0, #0
_0811E03E:
	mov r0, sp
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811E048
	b _0811E144
_0811E048:
	ldr r4, _0811E0AC  @ =0x00001791
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811E060
	ldr r5, _0811E0B0  @ =0x00001792
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E144
_0811E060:
	ldr r1, _0811E0B4  @ =0x00001735
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E06C
	b _0811E3E0
_0811E06C:
	ldr r2, _0811E0B8  @ =0x00000DBB
	add r0, r3, r2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0811E07A
	b _0811E3E0
_0811E07A:
	ldr r4, _0811E0BC  @ =0x00000A92
	add r0, r3, r4
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811E088
	b _0811E3E0
_0811E088:
	mov r0, #1
	strb r0, [r1]
	ldr r5, _0811E0C0  @ =0x00000E3D
	add r0, r3, r5
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811E0C8
	ldr r0, _0811E0C4  @ =0x0000097C
	add r1, r3, r0
	mov r0, #16
	strb r0, [r1]
	mov r5, #240
	b _0811E0D2
_0811E0A4:
	.4byte gRam
_0811E0A8:
	.4byte 0x0000186B
_0811E0AC:
	.4byte 0x00001791
_0811E0B0:
	.4byte 0x00001792
_0811E0B4:
	.4byte 0x00001735
_0811E0B8:
	.4byte 0x00000DBB
_0811E0BC:
	.4byte 0x00000A92
_0811E0C0:
	.4byte 0x00000E3D
_0811E0C4:
	.4byte 0x0000097C
_0811E0C8:
	ldr r2, _0811E12C  @ =0x0000097C
	add r1, r3, r2
	mov r0, #4
	strb r0, [r1]
	mov r5, #252
_0811E0D2:
	ldr r4, _0811E130  @ =0x00000DED
	add r0, r3, r4
	add r1, r6, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811E0EC
	cmp r0, #0
	bge _0811E0EA
	ldr r5, _0811E12C  @ =0x0000097C
	add r0, r3, r5
	ldrb r5, [r0]
_0811E0EA:
	strb r5, [r1]
_0811E0EC:
	mov r5, #252
	ldr r1, _0811E134  @ =0x00000DF7
	add r0, r3, r1
	add r1, r6, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811E104
	cmp r0, #0
	bge _0811E102
	mov r5, #4
_0811E102:
	strb r5, [r1]
_0811E104:
	ldr r2, _0811E138  @ =gRam
	ldr r3, _0811E13C  @ =0x00000E3D
	add r0, r2, r3
	add r0, r6, r0
	ldrb r1, [r0]
	cmp r1, #1
	beq _0811E114
	b _0811E3E0
_0811E114:
	ldr r4, _0811E140  @ =0x00001818
	add r0, r2, r4
	add r0, r6, r0
	add r1, r1, #1
	strb r1, [r0]
	ldr r5, _0811E130  @ =0x00000DED
	add r0, r2, r5
	add r0, r6, r0
	mov r1, #252
	strb r1, [r0]
	b _0811E3E0
	.byte 0x00
	.byte 0x00
_0811E12C:
	.4byte 0x0000097C
_0811E130:
	.4byte 0x00000DED
_0811E134:
	.4byte 0x00000DF7
_0811E138:
	.4byte gRam
_0811E13C:
	.4byte 0x00000E3D
_0811E140:
	.4byte 0x00001818
_0811E144:
	add r7, r3, #0
	ldr r1, _0811E1B0  @ =0x00001791
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	cmp r0, #0
	beq _0811E15C
	b _0811E3E0
_0811E15C:
	ldr r2, _0811E1B4  @ =0x00000A92
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E16E
	cmp r0, #255
	beq _0811E16E
	b _0811E3E0
_0811E16E:
	ldr r4, _0811E1B8  @ =0x00000E3D
	add r0, r7, r4
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	ldr r5, _0811E1BC  @ =0x00000A74
	add r4, r7, r5
	add r4, r6, r4
	ldrb r5, [r4]
	add r0, r6, #0
	mov r1, #0
	str r3, [sp, #12]
	bl sub_080BFA64
	strb r5, [r4]
	ldr r1, _0811E1C0  @ =0x0000187A
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r3, [sp, #12]
	cmp r0, #38
	bne _0811E19C
	b _0811E370
_0811E19C:
	cmp r0, #38
	bgt _0811E1D0
	cmp r0, #12
	bne _0811E1A6
	b _0811E2B8
_0811E1A6:
	cmp r0, #12
	bgt _0811E1C4
	cmp r0, #8
	beq _0811E240
	b _0811E1EC
_0811E1B0:
	.4byte 0x00001791
_0811E1B4:
	.4byte 0x00000A92
_0811E1B8:
	.4byte 0x00000E3D
_0811E1BC:
	.4byte 0x00000A74
_0811E1C0:
	.4byte 0x0000187A
_0811E1C4:
	cmp r0, #28
	beq _0811E2B8
	cmp r0, #32
	bne _0811E1CE
	b _0811E370
_0811E1CE:
	b _0811E1EC
_0811E1D0:
	cmp r0, #182
	beq _0811E200
	cmp r0, #182
	bgt _0811E1E8
	cmp r0, #107
	bgt _0811E1EC
	cmp r0, #104
	blt _0811E1EC
	add r0, r6, #0
	bl sub_0811B934
	b _0811E3E0
_0811E1E8:
	cmp r0, #188
	beq _0811E200
_0811E1EC:
	ldr r0, _0811E22C  @ =gRam
	ldr r2, _0811E230  @ =0x0000187A
	add r0, r0, r2
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #176
	bne _0811E200
	b _0811E370
_0811E200:
	ldr r0, _0811E22C  @ =gRam
	ldr r3, _0811E234  @ =0x00000E33
	add r1, r0, r3
	add r2, r6, r1
	mov r1, #0
	strb r1, [r2]
	ldr r4, _0811E238  @ =0x00001818
	add r1, r0, r4
	add r1, r6, r1
	ldr r5, _0811E23C  @ =0x0000185B
	add r0, r0, r5
	add r0, r6, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	beq _0811E224
	b _0811E3E0
_0811E224:
	mov r0, #2
	strb r0, [r2]
	b _0811E3E0
	.byte 0x00
	.byte 0x00
_0811E22C:
	.4byte gRam
_0811E230:
	.4byte 0x0000187A
_0811E234:
	.4byte 0x00000E33
_0811E238:
	.4byte 0x00001818
_0811E23C:
	.4byte 0x0000185B
_0811E240:
	add r0, r6, #1
	ldr r1, _0811E29C  @ =0x0000177A
	add r4, r7, r1
	ldrb r2, [r4]
	cmp r0, r2
	bne _0811E250
	mov r5, r8
	strb r5, [r4]
_0811E250:
	ldr r1, _0811E2A0  @ =0x00000E33
	add r0, r3, r1
	add r0, r6, r0
	ldrb r4, [r0]
	cmp r4, #0
	beq _0811E25E
	b _0811E3E0
_0811E25E:
	ldr r2, _0811E2A4  @ =0x00000DC5
	add r1, r3, r2
	add r1, r6, r1
	ldr r5, _0811E2A8  @ =0x00000DD9
	add r2, r3, r5
	add r2, r6, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	ldr r5, _0811E2AC  @ =0x0000FFE0
	add r0, r0, r5
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r1]
	lsr r0, r0, #8
	strb r0, [r2]
	add r0, r6, #0
	str r3, [sp, #12]
	bl sub_08119324
	ldr r3, [sp, #12]
	ldr r0, _0811E2B0  @ =0x00001719
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #18
	beq _0811E292
	b _0811E496
_0811E292:
	strb r4, [r1]
	ldr r1, _0811E2B4  @ =0x000016FA
	add r0, r3, r1
	strb r4, [r0]
	b _0811E496
_0811E29C:
	.4byte 0x0000177A
_0811E2A0:
	.4byte 0x00000E33
_0811E2A4:
	.4byte 0x00000DC5
_0811E2A8:
	.4byte 0x00000DD9
_0811E2AC:
	.4byte 0x0000FFE0
_0811E2B0:
	.4byte 0x00001719
_0811E2B4:
	.4byte 0x000016FA
_0811E2B8:
	ldr r2, _0811E2EC  @ =gRam
	ldr r3, _0811E2F0  @ =0x00000B14
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #3
	beq _0811E2FC
	ldr r4, _0811E2F4  @ =0x00000E47
	add r0, r2, r4
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0811E2D2
	b _0811E3E0
_0811E2D2:
	ldr r5, _0811E2F8  @ =0x00000A92
	add r0, r2, r5
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811E2E0
	b _0811E3E0
_0811E2E0:
	cmp r0, #255
	bne _0811E2E6
	b _0811E3E0
_0811E2E6:
	mov r0, #1
	strb r0, [r1]
	b _0811E3E0
_0811E2EC:
	.4byte gRam
_0811E2F0:
	.4byte 0x00000B14
_0811E2F4:
	.4byte 0x00000E47
_0811E2F8:
	.4byte 0x00000A92
_0811E2FC:
	ldr r1, _0811E350  @ =0x00000DC5
	add r0, r2, r1
	add r0, r6, r0
	ldr r3, _0811E354  @ =0x0000179A
	add r1, r2, r3
	ldrh r1, [r1]
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r4, _0811E358  @ =0x00000DD9
	add r0, r2, r4
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r4, r1, #16
	ldr r5, _0811E35C  @ =0x00001732
	add r0, r2, r5
	strb r4, [r0]
	ldr r0, _0811E360  @ =0x00001733
	add r1, r2, r0
	lsr r0, r4, #8
	strb r0, [r1]
	ldr r1, _0811E364  @ =0x00000DCF
	add r3, r2, r1
	add r3, r6, r3
	ldr r4, _0811E368  @ =0x0000179C
	add r0, r2, r4
	ldrh r1, [r0]
	ldrb r5, [r3]
	add r1, r1, r5
	ldr r0, _0811E36C  @ =0x00000DE3
	add r2, r2, r0
	add r2, r6, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	b _0811E3E0
	.byte 0x00
	.byte 0x00
_0811E350:
	.4byte 0x00000DC5
_0811E354:
	.4byte 0x0000179A
_0811E358:
	.4byte 0x00000DD9
_0811E35C:
	.4byte 0x00001732
_0811E360:
	.4byte 0x00001733
_0811E364:
	.4byte 0x00000DCF
_0811E368:
	.4byte 0x0000179C
_0811E36C:
	.4byte 0x00000DE3
_0811E370:
	ldr r3, _0811E3C4  @ =gRam
	ldr r1, _0811E3C8  @ =0x00001791
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _0811E3E0
	add r0, r6, #1
	ldr r4, _0811E3CC  @ =0x0000177A
	add r2, r3, r4
	ldrb r5, [r2]
	cmp r0, r5
	bne _0811E392
	strb r1, [r2]
_0811E392:
	ldr r1, _0811E3D0  @ =0x00000E33
	add r0, r3, r1
	add r0, r6, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _0811E3E0
	ldr r4, _0811E3D4  @ =0x00001719
	add r2, r3, r4
	ldrb r0, [r2]
	cmp r0, #18
	bne _0811E3B0
	strb r1, [r2]
	ldr r5, _0811E3D8  @ =0x000016FA
	add r0, r3, r5
	strb r1, [r0]
_0811E3B0:
	ldr r2, _0811E3DC  @ =0x00000E15
	add r0, r3, r2
	add r0, r6, r0
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #108
	bl sub_080C19F8
	b _0811E496
	.byte 0x00
	.byte 0x00
_0811E3C4:
	.4byte gRam
_0811E3C8:
	.4byte 0x00001791
_0811E3CC:
	.4byte 0x0000177A
_0811E3D0:
	.4byte 0x00000E33
_0811E3D4:
	.4byte 0x00001719
_0811E3D8:
	.4byte 0x000016FA
_0811E3DC:
	.4byte 0x00000E15
_0811E3E0:
	ldr r3, [sp, #4]
	cmp r3, #1
	bne _0811E3EE
	add r0, r6, #0
	mov r1, #13
	bl sub_080C19F8
_0811E3EE:
	ldr r5, _0811E454  @ =gRam
	ldr r4, _0811E458  @ =0x00001735
	add r2, r5, r4
	ldr r1, _0811E45C  @ =0x00000A74
	add r0, r5, r1
	add r3, r6, r0
	ldrb r0, [r2]
	ldrb r1, [r3]
	orr r0, r0, r1
	strb r0, [r2]
	ldr r2, _0811E460  @ =0x00001791
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0811E46C
	ldr r4, _0811E464  @ =0x0000183C
	add r0, r5, r4
	add r4, r6, r0
	ldrb r1, [r4]
	sub r0, r1, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _0811E46C
	strb r1, [r4]
	strb r0, [r3]
	add r0, r6, #0
	bl sub_080C1638
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811E46C
	mov r0, #7
	strb r0, [r4]
	ldr r0, _0811E468  @ =0x00000E1F
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _0811E46C
	add r0, r6, #0
	bl sub_0811F4BC
	b _0811E496
_0811E454:
	.4byte gRam
_0811E458:
	.4byte 0x00001735
_0811E45C:
	.4byte 0x00000A74
_0811E460:
	.4byte 0x00001791
_0811E464:
	.4byte 0x0000183C
_0811E468:
	.4byte 0x00000E1F
_0811E46C:
	ldr r2, _0811E4A8  @ =gRam
	ldr r1, _0811E4AC  @ =0x00000E3D
	add r0, r2, r1
	add r0, r6, r0
	ldr r3, _0811E4B0  @ =0x00001734
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r4, _0811E4B4  @ =0x00000A74
	add r0, r2, r4
	add r0, r6, r0
	ldr r5, _0811E4B8  @ =0x00001735
	add r2, r2, r5
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r6, #0
	bl sub_0811BE34
	add r0, r6, #0
	bl sub_0811E4BC
_0811E496:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811E4A8:
	.4byte gRam
_0811E4AC:
	.4byte 0x00000E3D
_0811E4B0:
	.4byte 0x00001734
_0811E4B4:
	.4byte 0x00000A74
_0811E4B8:
	.4byte 0x00001735
	THUMB_FUNC_END sub_0811DCA8

