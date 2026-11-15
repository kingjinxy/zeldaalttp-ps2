	THUMB_FUNC_START sub_0811E908
sub_0811E908: @ 0x0811E908
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _0811E9CC  @ =gRam
	ldr r1, _0811E9D0  @ =0x00000545
	add r0, r2, r1
	ldrb r7, [r0]
	ldr r3, _0811E9D4  @ =0x000017A8
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E92A
	ldr r6, _0811E9D8  @ =0x00001727
	add r0, r2, r6
	ldrb r7, [r0]
_0811E92A:
	ldr r1, _0811E9DC  @ =0x000015DD
	add r0, r2, r1
	strb r5, [r0]
	ldr r3, _0811E9E0  @ =0x00001827
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E93E
	b _0811ED44
_0811E93E:
	ldr r6, _0811E9E4  @ =0x0000185B
	add r0, r2, r6
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E94C
	b _0811EC5C
_0811E94C:
	ldr r1, _0811E9E8  @ =0x00001702
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E958
	b _0811ED44
_0811E958:
	sub r3, r3, #150
	add r0, r2, r3
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0811E968
	b _0811ED44
_0811E968:
	ldr r6, _0811E9EC  @ =0x00000A92
	add r0, r2, r6
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E97A
	cmp r0, #255
	beq _0811E97A
	b _0811ED44
_0811E97A:
	ldr r1, _0811E9F0  @ =0x00001813
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811E988
	b _0811ED44
_0811E988:
	ldr r3, _0811E9F4  @ =0x00001818
	add r0, r2, r3
	add r0, r5, r0
	ldrb r4, [r0]
	cmp r4, #0
	beq _0811E996
	b _0811ED44
_0811E996:
	mov r1, #15
	and r1, r1, r7
	add r3, r1, #0
	cmp r3, #0
	bne _0811EA04
	ldr r6, _0811E9F8  @ =0x00001832
	add r0, r2, r6
	add r0, r5, r0
	strb r1, [r0]
	ldr r3, _0811E9FC  @ =0x000016FA
	add r0, r2, r3
	strb r1, [r0]
	sub r6, r6, #21
	add r0, r2, r6
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	ldr r1, _0811EA00  @ =0x00001804
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811EA3C
	add r3, r3, #31
	add r0, r2, r3
	strb r4, [r0]
	b _0811ED44
	.byte 0x00
	.byte 0x00
_0811E9CC:
	.4byte gRam
_0811E9D0:
	.4byte 0x00000545
_0811E9D4:
	.4byte 0x000017A8
_0811E9D8:
	.4byte 0x00001727
_0811E9DC:
	.4byte 0x000015DD
_0811E9E0:
	.4byte 0x00001827
_0811E9E4:
	.4byte 0x0000185B
_0811E9E8:
	.4byte 0x00001702
_0811E9EC:
	.4byte 0x00000A92
_0811E9F0:
	.4byte 0x00001813
_0811E9F4:
	.4byte 0x00001818
_0811E9F8:
	.4byte 0x00001832
_0811E9FC:
	.4byte 0x000016FA
_0811EA00:
	.4byte 0x00001804
_0811EA04:
	ldr r6, _0811EA28  @ =0x00001832
	add r0, r2, r6
	add r0, r5, r0
	ldrb r6, [r0]
	cmp r3, r6
	bne _0811EA34
	ldr r1, _0811EA2C  @ =0x00001719
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #18
	bne _0811EA3C
	ldr r3, _0811EA30  @ =0x000016FA
	add r0, r2, r3
	ldrb r1, [r0]
	mov r2, #129
	orr r1, r1, r2
	strb r1, [r0]
	b _0811EA3C
_0811EA28:
	.4byte 0x00001832
_0811EA2C:
	.4byte 0x00001719
_0811EA30:
	.4byte 0x000016FA
_0811EA34:
	strb r1, [r0]
	ldr r6, _0811EAE8  @ =0x00001719
	add r0, r2, r6
	strb r4, [r0]
_0811EA3C:
	add r0, r5, #0
	mov r1, #4
	bl sub_080BF880
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811EA4C
	b _0811ED44
_0811EA4C:
	ldr r1, _0811EAEC  @ =gRam
	ldr r2, _0811EAF0  @ =0x00000E47
	add r0, r1, r2
	add r0, r5, r0
	mov r3, #161
	lsl r3, r3, #4
	add r2, r1, r3
	ldrb r0, [r0]
	add r6, r1, #0
	ldrb r2, [r2]
	cmp r0, r2
	beq _0811EA66
	b _0811ED44
_0811EA66:
	ldr r1, _0811EAF4  @ =0x00001804
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811EB28
	ldr r2, _0811EAF8  @ =0x0000177F
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #64
	beq _0811EB28
	ldr r3, _0811EAFC  @ =0x0000177A
	add r2, r6, r3
	ldrb r1, [r2]
	add r0, r5, #1
	cmp r1, r0
	bne _0811EA8A
	mov r0, #0
	strb r0, [r2]
_0811EA8A:
	bl sub_08093078
	add r0, r5, #0
	mov r1, #121
	bl sub_080C19F8
	ldr r0, _0811EB00  @ =0x00000E3D
	add r3, r6, r0
	add r3, r5, r3
	ldr r1, _0811EB04  @ =0x000016D5
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r4, #0
	strb r0, [r3]
	ldr r2, _0811EB08  @ =0x00000DED
	add r1, r6, r2
	add r1, r5, r1
	ldr r2, _0811EB0C  @ =gUnknown_0817FAAE
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0811EB10  @ =0x00000DF7
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _0811EB14  @ =gUnknown_0817FABE
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0811EB18  @ =0x00000A88
	add r0, r6, r1
	add r0, r5, r0
	ldr r1, _0811EB1C  @ =gUnknown_0817FACE
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r2, _0811EB20  @ =0x0000185B
	add r0, r6, r2
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r3, _0811EB24  @ =0x00000A92
	add r0, r6, r3
	add r0, r5, r0
	strb r4, [r0]
	b _0811EC5C
_0811EAE8:
	.4byte 0x00001719
_0811EAEC:
	.4byte gRam
_0811EAF0:
	.4byte 0x00000E47
_0811EAF4:
	.4byte 0x00001804
_0811EAF8:
	.4byte 0x0000177F
_0811EAFC:
	.4byte 0x0000177A
_0811EB00:
	.4byte 0x00000E3D
_0811EB04:
	.4byte 0x000016D5
_0811EB08:
	.4byte 0x00000DED
_0811EB0C:
	.4byte gUnknown_0817FAAE
_0811EB10:
	.4byte 0x00000DF7
_0811EB14:
	.4byte gUnknown_0817FABE
_0811EB18:
	.4byte 0x00000A88
_0811EB1C:
	.4byte gUnknown_0817FACE
_0811EB20:
	.4byte 0x0000185B
_0811EB24:
	.4byte 0x00000A92
_0811EB28:
	ldr r1, _0811EB68  @ =0x00000DF7
	add r0, r6, r1
	add r3, r5, r0
	mov r1, #0
	strb r1, [r3]
	ldr r2, _0811EB6C  @ =0x00000DED
	add r0, r6, r2
	add r2, r5, r0
	strb r1, [r2]
	ldr r1, _0811EB70  @ =0x00001832
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #15
	and r1, r1, r7
	strb r1, [r0]
	mov r4, #3
	add r0, r1, #0
	and r0, r0, r4
	cmp r0, #0
	beq _0811EB94
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0811EB7C
	ldr r0, _0811EB74  @ =gUnknown_0817FAAC
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r2, _0811EB78  @ =0x00000E3D
	add r0, r6, r2
	add r0, r5, r0
	strb r4, [r0]
	b _0811EBC6
_0811EB68:
	.4byte 0x00000DF7
_0811EB6C:
	.4byte 0x00000DED
_0811EB70:
	.4byte 0x00001832
_0811EB74:
	.4byte gUnknown_0817FAAC
_0811EB78:
	.4byte 0x00000E3D
_0811EB7C:
	ldr r0, _0811EB8C  @ =gUnknown_0817FAAC
	ldrb r0, [r0, #1]
	strb r0, [r3]
	ldr r3, _0811EB90  @ =0x00000E3D
	add r0, r6, r3
	add r0, r5, r0
	mov r1, #2
	b _0811EBC4
_0811EB8C:
	.4byte gUnknown_0817FAAC
_0811EB90:
	.4byte 0x00000E3D
_0811EB94:
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _0811EBB8
	ldr r0, _0811EBB0  @ =gUnknown_0817FAAC
	ldrb r0, [r0, #1]
	strb r0, [r2]
	ldr r1, _0811EBB4  @ =0x00000E3D
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #1
	b _0811EBC4
_0811EBB0:
	.4byte gUnknown_0817FAAC
_0811EBB4:
	.4byte 0x00000E3D
_0811EBB8:
	ldr r0, _0811EC38  @ =gUnknown_0817FAAC
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _0811EC3C  @ =0x00000E3D
	add r0, r6, r2
	add r0, r5, r0
_0811EBC4:
	strb r1, [r0]
_0811EBC6:
	add r1, r6, #0
	ldr r3, _0811EC40  @ =0x000016CD
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811EBDC
	ldr r2, _0811EC44  @ =0x000016CE
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811EC32
_0811EBDC:
	add r0, r5, #0
	mov r1, #0
	bl sub_080BFE6C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811EC20
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	bl sub_080C1768
	ldr r3, _0811EC48  @ =0x00001791
	add r0, r6, r3
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0811EC20
	ldr r1, _0811EC4C  @ =0x0000181D
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #7
	and r1, r1, r0
	cmp r1, #0
	bne _0811EC20
	add r0, r5, #0
	mov r1, #58
	bl sub_080C19F8
_0811EC20:
	ldr r1, _0811EC50  @ =gRam
	ldr r3, _0811EC54  @ =0x000016FA
	add r2, r1, r3
	mov r0, #129
	strb r0, [r2]
	ldr r6, _0811EC58  @ =0x00001719
	add r1, r1, r6
	mov r0, #18
	strb r0, [r1]
_0811EC32:
	bl sub_080AF16C
	b _0811ED44
_0811EC38:
	.4byte gUnknown_0817FAAC
_0811EC3C:
	.4byte 0x00000E3D
_0811EC40:
	.4byte 0x000016CD
_0811EC44:
	.4byte 0x000016CE
_0811EC48:
	.4byte 0x00001791
_0811EC4C:
	.4byte 0x0000181D
_0811EC50:
	.4byte gRam
_0811EC54:
	.4byte 0x000016FA
_0811EC58:
	.4byte 0x00001719
_0811EC5C:
	ldr r6, _0811ECC0  @ =gRam
	ldr r1, _0811ECC4  @ =0x00000A88
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	sub r0, r0, #2
	mov r2, #0
	mov r8, r2
	strb r0, [r7]
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	bl sub_080C1768
	add r0, r5, #0
	mov r1, #0
	bl sub_080BF804
	ldr r3, _0811ECC8  @ =0x00000A92
	add r0, r6, r3
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _0811EC92
	cmp r0, #251
	bls _0811ED44
_0811EC92:
	add r0, r5, #0
	mov r1, #13
	bl sub_080C19F8
	mov r0, r8
	strb r0, [r4]
	ldr r1, _0811ECCC  @ =0x0000185B
	add r0, r6, r1
	add r2, r5, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _0811ECD4
	ldr r3, _0811ECD0  @ =0x00000DBB
	add r0, r6, r3
	add r0, r5, r0
	mov r6, r8
	strb r6, [r0]
	strb r6, [r2]
	b _0811ED44
_0811ECC0:
	.4byte gRam
_0811ECC4:
	.4byte 0x00000A88
_0811ECC8:
	.4byte 0x00000A92
_0811ECCC:
	.4byte 0x0000185B
_0811ECD0:
	.4byte 0x00000DBB
_0811ECD4:
	ldr r1, _0811ED04  @ =gUnknown_0817FACE
	ldrb r0, [r2]
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r7]
	ldr r1, _0811ED08  @ =0x000016D5
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	strb r0, [r1]
	ldr r3, _0811ED0C  @ =0x00000DED
	add r0, r6, r3
	add r1, r5, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811ED10
	lsr r0, r0, #25
	b _0811ED1A
	.byte 0x00
	.byte 0x00
_0811ED04:
	.4byte gUnknown_0817FACE
_0811ED08:
	.4byte 0x000016D5
_0811ED0C:
	.4byte 0x00000DED
_0811ED10:
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	asr r0, r0, #1
	neg r0, r0
_0811ED1A:
	strb r0, [r1]
	ldr r0, _0811ED30  @ =gRam
	ldr r6, _0811ED34  @ =0x00000DF7
	add r0, r0, r6
	add r1, r5, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811ED38
	lsr r0, r0, #25
	b _0811ED42
_0811ED30:
	.4byte gRam
_0811ED34:
	.4byte 0x00000DF7
_0811ED38:
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	asr r0, r0, #1
	neg r0, r0
_0811ED42:
	strb r0, [r1]
_0811ED44:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811E908

	.byte 0x00
	.byte 0x00
