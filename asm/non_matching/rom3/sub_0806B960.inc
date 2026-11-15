	THUMB_FUNC_START sub_0806B960
sub_0806B960: @ 0x0806B960
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #12
	bl sub_081295CC
	ldr r4, _0806BAD0  @ =gRam
	ldr r0, _0806BAD4  @ =0x000009AD
	add r0, r0, r4
	mov r8, r0
	ldrb r5, [r0]
	cmp r5, #0
	beq _0806B97E
	b _0806BD42
_0806B97E:
	ldr r1, _0806BAD8  @ =0x0000099C
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0806BADC  @ =0x00001AE2
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806B990
	b _0806BC24
_0806B990:
	ldr r3, _0806BAE0  @ =0x0000166E
	add r0, r4, r3
	ldrb r2, [r0]
	ldr r6, _0806BAE4  @ =0x000009B2
	add r0, r4, r6
	strb r2, [r0]
	ldr r1, _0806BAE8  @ =0x00001670
	add r0, r4, r1
	ldrh r3, [r0]
	add r6, r6, #40
	add r7, r4, r6
	mov r0, #0
	mov r9, r0
	strh r3, [r7]
	add r1, r1, #2
	add r0, r4, r1
	ldrh r1, [r0]
	add r6, r6, #66
	add r0, r4, r6
	strh r1, [r0]
	lsl r2, r2, #24
	cmp r2, #0
	beq _0806B9C0
	b _0806BBC8
_0806B9C0:
	ldr r1, _0806BAEC  @ =0x00000A18
	add r0, r4, r1
	strh r5, [r0]
	lsl r0, r3, #16
	lsr r0, r0, #16
	ldr r6, _0806BAF0  @ =0x0000017F
	cmp r0, r6
	bhi _0806B9D4
	bl sub_08080D00
_0806B9D4:
	bl sub_080A9E38
	bl sub_080AA7FC
	bl sub_080AA6F8
	ldr r2, _0806BAF4  @ =0x00001674
	add r0, r4, r2
	ldrh r1, [r0]
	ldr r3, _0806BAF8  @ =0x000016C4
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _0806BAFC  @ =0x00001676
	add r0, r4, r1
	ldrh r1, [r0]
	add r2, r2, #76
	add r0, r4, r2
	strh r1, [r0]
	ldrh r0, [r7]
	cmp r0, r6
	bhi _0806BA00
	b _0806BB68
_0806BA00:
	ldr r3, _0806BB00  @ =0x0000051E
	add r1, r4, r3
	ldr r0, _0806BB04  @ =0x00003648
	strh r0, [r1]
	ldr r6, _0806BB08  @ =0x00000999
	add r0, r4, r6
	mov r1, #10
	strb r1, [r0]
	ldr r2, _0806BB0C  @ =0x00000998
	add r0, r4, r2
	strb r1, [r0]
	mov r0, #90
	bl sub_0812FD88
	ldr r3, _0806BB10  @ =0x000016A4
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r6, _0806BB14  @ =0x00000C98
	add r0, r4, r6
	strb r1, [r0]
	ldr r1, _0806BB18  @ =0x000016A5
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _0806BB1C  @ =0x00000C99
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrb r1, [r0]
	add r6, r6, #2
	add r0, r4, r6
	strb r1, [r0]
	ldr r1, _0806BB20  @ =0x000016A7
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _0806BB24  @ =0x00000C9C
	add r1, r4, r3
	mov r0, #1
	strh r0, [r1]
	bl sub_0812E8DC
	mov r0, #0
	bl sub_08077E64
	bl sub_08130978
	bl sub_08130AB4
	bl sub_0808A6BC
	ldr r0, _0806BB28  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _0806BB2C  @ =gUnknown_02001600
	ldr r2, _0806BB30  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	ldr r0, _0806BB34  @ =0x04000040
	mov r1, #252
	strh r1, [r0]
	add r0, r0, #4
	strh r1, [r0]
	ldr r6, _0806BB38  @ =0x00000B52
	add r0, r4, r6
	strh r5, [r0]
	str r5, [sp, #4]
	add r0, sp, #4
	ldr r1, _0806BB3C  @ =gUnknown_02000C00
	ldr r2, _0806BB40  @ =0x01000100
	bl CpuFastSet
	ldr r1, _0806BB44  @ =0x00000CF8
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _0806BB48  @ =0x00000CFC
	add r1, r4, r2
	mov r0, #31
	strh r0, [r1]
	ldr r3, _0806BB4C  @ =0x00000CFA
	add r0, r4, r3
	mov r2, #2
	strh r2, [r0]
	ldr r6, _0806BB50  @ =0x00000D02
	add r1, r4, r6
	mov r0, #15
	strh r0, [r1]
	ldr r0, _0806BB54  @ =0x000009AC
	add r1, r4, r0
	mov r0, #11
	strb r0, [r1]
	mov r0, #24
	mov r1, r8
	strb r0, [r1]
	ldrh r1, [r7]
	ldr r0, _0806BB58  @ =0x00000181
	cmp r1, r0
	bne _0806BB5C
	sub r3, r3, #236
	add r0, r4, r3
	strh r2, [r0]
	b _0806BD42
_0806BAD0:
	.4byte gRam
_0806BAD4:
	.4byte 0x000009AD
_0806BAD8:
	.4byte 0x0000099C
_0806BADC:
	.4byte 0x00001AE2
_0806BAE0:
	.4byte 0x0000166E
_0806BAE4:
	.4byte 0x000009B2
_0806BAE8:
	.4byte 0x00001670
_0806BAEC:
	.4byte 0x00000A18
_0806BAF0:
	.4byte 0x0000017F
_0806BAF4:
	.4byte 0x00001674
_0806BAF8:
	.4byte 0x000016C4
_0806BAFC:
	.4byte 0x00001676
_0806BB00:
	.4byte 0x0000051E
_0806BB04:
	.4byte 0x00003648
_0806BB08:
	.4byte 0x00000999
_0806BB0C:
	.4byte 0x00000998
_0806BB10:
	.4byte 0x000016A4
_0806BB14:
	.4byte 0x00000C98
_0806BB18:
	.4byte 0x000016A5
_0806BB1C:
	.4byte 0x00000C99
_0806BB20:
	.4byte 0x000016A7
_0806BB24:
	.4byte 0x00000C9C
_0806BB28:
	.4byte 0x00FC00FC
_0806BB2C:
	.4byte gUnknown_02001600
_0806BB30:
	.4byte 0x01000080
_0806BB34:
	.4byte 0x04000040
_0806BB38:
	.4byte 0x00000B52
_0806BB3C:
	.4byte gUnknown_02000C00
_0806BB40:
	.4byte 0x01000100
_0806BB44:
	.4byte 0x00000CF8
_0806BB48:
	.4byte 0x00000CFC
_0806BB4C:
	.4byte 0x00000CFA
_0806BB50:
	.4byte 0x00000D02
_0806BB54:
	.4byte 0x000009AC
_0806BB58:
	.4byte 0x00000181
_0806BB5C:
	ldr r6, _0806BB64  @ =0x00000C0E
	add r0, r4, r6
	strh r5, [r0]
	b _0806BD42
_0806BB64:
	.4byte 0x00000C0E
_0806BB68:
	bl sub_0808A738
	ldr r0, _0806BBA8  @ =0x0000050C
	add r1, r4, r0
	mov r0, #252
	lsl r0, r0, #6
	strh r0, [r1]
	ldr r2, _0806BBAC  @ =0x0000051A
	add r1, r4, r2
	mov r0, #63
	strh r0, [r1]
	ldr r0, _0806BBB0  @ =0xF0FCF0FC
	str r0, [sp, #8]
	add r0, sp, #8
	ldr r1, _0806BBB4  @ =gUnknown_02001600
	ldr r2, _0806BBB8  @ =0x01000080
	bl CpuFastSet
	ldr r3, _0806BBBC  @ =0x000016AC
	add r0, r4, r3
	ldrh r1, [r0]
	ldr r6, _0806BBC0  @ =0x00000B52
	add r0, r4, r6
	strh r1, [r0]
	ldr r0, _0806BBC4  @ =0x000009AC
	add r1, r4, r0
	mov r0, #8
	strb r0, [r1]
	mov r2, r9
	mov r1, r8
	strb r2, [r1]
	b _0806BD42
_0806BBA8:
	.4byte 0x0000050C
_0806BBAC:
	.4byte 0x0000051A
_0806BBB0:
	.4byte 0xF0FCF0FC
_0806BBB4:
	.4byte gUnknown_02001600
_0806BBB8:
	.4byte 0x01000080
_0806BBBC:
	.4byte 0x000016AC
_0806BBC0:
	.4byte 0x00000B52
_0806BBC4:
	.4byte 0x000009AC
_0806BBC8:
	ldr r3, _0806BC0C  @ =0x0000165A
	add r0, r4, r3
	ldrh r1, [r0]
	ldr r6, _0806BC10  @ =0x000009C6
	add r0, r4, r6
	strh r1, [r0]
	ldr r0, _0806BC14  @ =0x000016AE
	add r1, r4, r0
	ldrh r0, [r1]
	cmp r0, #13
	beq _0806BBEC
	bl sub_0812A044
	ldr r1, _0806BC18  @ =0x000016B2
	add r0, r4, r1
	ldrb r0, [r0]
	bl sub_0812A10C
_0806BBEC:
	ldr r2, _0806BC1C  @ =0x00000B52
	add r0, r4, r2
	strh r5, [r0]
	ldr r3, _0806BC20  @ =0x00000D02
	add r0, r4, r3
	strh r5, [r0]
	bl sub_080A9E38
	bl sub_080AA7FC
	bl sub_080AA6F8
	bl sub_080700F8
	b _0806BD42
	.byte 0x00
	.byte 0x00
_0806BC0C:
	.4byte 0x0000165A
_0806BC10:
	.4byte 0x000009C6
_0806BC14:
	.4byte 0x000016AE
_0806BC18:
	.4byte 0x000016B2
_0806BC1C:
	.4byte 0x00000B52
_0806BC20:
	.4byte 0x00000D02
_0806BC24:
	ldr r6, _0806BCC4  @ =0x00001663
	add r0, r4, r6
	strb r5, [r0]
	ldr r1, _0806BCC8  @ =0x00001718
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0806BCCC  @ =0x0000165E
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #2
	bls _0806BD04
	ldr r3, _0806BCD0  @ =0x0000165C
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806BD04
	ldr r6, _0806BCD4  @ =0x000009B2
	add r0, r4, r6
	strb r5, [r0]
	bl sub_080A9E38
	bl sub_080AA7FC
	bl sub_080AA6F8
	ldr r1, _0806BCD8  @ =0x00000A18
	add r0, r4, r1
	mov r2, #0
	strh r5, [r0]
	ldr r3, _0806BCDC  @ =0x000009DA
	add r1, r4, r3
	mov r0, #32
	strh r0, [r1]
	sub r6, r6, #6
	add r1, r4, r6
	mov r0, #8
	strb r0, [r1]
	mov r0, r8
	strb r2, [r0]
	ldr r1, _0806BCE0  @ =0x000009E8
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _0806BCE4  @ =0x00000B52
	add r0, r4, r2
	strh r5, [r0]
	ldr r3, _0806BCE8  @ =0x0000050C
	add r1, r4, r3
	mov r0, #252
	lsl r0, r0, #6
	strh r0, [r1]
	mov r3, #1
	ldr r6, _0806BCEC  @ =0x0000050E
	add r2, r4, r6
	ldrh r0, [r2]
	mov r1, #16
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #162
	lsl r0, r0, #3
	add r2, r4, r0
	ldrh r0, [r2]
	mov r1, #2
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _0806BCF0  @ =0x00000982
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _0806BCF4  @ =0x0000051A
	add r1, r4, r2
	mov r0, #63
	strh r0, [r1]
	ldr r3, _0806BCF8  @ =0x00000514
	add r1, r4, r3
	ldr r0, _0806BCFC  @ =0x0000F441
	strh r0, [r1]
	add r6, r6, #10
	add r1, r4, r6
	ldr r0, _0806BD00  @ =0x0000FC43
	strh r0, [r1]
	b _0806BD42
_0806BCC4:
	.4byte 0x00001663
_0806BCC8:
	.4byte 0x00001718
_0806BCCC:
	.4byte 0x0000165E
_0806BCD0:
	.4byte 0x0000165C
_0806BCD4:
	.4byte 0x000009B2
_0806BCD8:
	.4byte 0x00000A18
_0806BCDC:
	.4byte 0x000009DA
_0806BCE0:
	.4byte 0x000009E8
_0806BCE4:
	.4byte 0x00000B52
_0806BCE8:
	.4byte 0x0000050C
_0806BCEC:
	.4byte 0x0000050E
_0806BCF0:
	.4byte 0x00000982
_0806BCF4:
	.4byte 0x0000051A
_0806BCF8:
	.4byte 0x00000514
_0806BCFC:
	.4byte 0x0000F441
_0806BD00:
	.4byte 0x0000FC43
_0806BD04:
	ldr r1, _0806BD50  @ =gRam
	ldr r2, _0806BD54  @ =0x0000165C
	add r0, r1, r2
	mov r2, #0
	strh r2, [r0]
	ldr r3, _0806BD58  @ =0x00001661
	add r4, r1, r3
	ldrb r5, [r4]
	ldr r3, _0806BD5C  @ =gUnknown_0814CA58
	ldr r6, _0806BD60  @ =0x00001AE2
	add r0, r1, r6
	ldrb r0, [r0]
	sub r0, r0, #1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r4]
	ldr r3, _0806BD64  @ =0x000009E8
	add r0, r1, r3
	strh r2, [r0]
	ldr r6, _0806BD68  @ =0x00000D02
	add r1, r1, r6
	strh r2, [r1]
	bl sub_080A9E38
	bl sub_080AA7FC
	bl sub_080AA6F8
	bl sub_080700F8
	strb r5, [r4]
_0806BD42:
	add sp, sp, #12
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0806BD50:
	.4byte gRam
_0806BD54:
	.4byte 0x0000165C
_0806BD58:
	.4byte 0x00001661
_0806BD5C:
	.4byte gUnknown_0814CA58
_0806BD60:
	.4byte 0x00001AE2
_0806BD64:
	.4byte 0x000009E8
_0806BD68:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_0806B960

