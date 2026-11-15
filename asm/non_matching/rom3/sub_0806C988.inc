	THUMB_FUNC_START sub_0806C988
sub_0806C988: @ 0x0806C988
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r0, _0806C9F0  @ =gRam
	ldr r2, _0806C9F4  @ =0x00000A42
	add r1, r0, r2
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #13
	bne _0806CA72
	ldr r3, _0806C9F8  @ =0x00000A49
	add r7, r6, r3
	ldrb r0, [r7]
	cmp r0, #2
	beq _0806CA72
	cmp r0, #9
	beq _0806CA72
	cmp r0, #255
	beq _0806CA72
	ldr r4, _0806C9FC  @ =0x0000099E
	add r1, r6, r4
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _0806CA6C
	ldr r5, _0806CA00  @ =0x00000958
	add r3, r6, r5
	mov r0, #0
	ldrsh r5, [r3, r0]
	ldr r1, _0806CA04  @ =0x00000BAA
	add r0, r6, r1
	ldrh r4, [r0]
	ldr r1, _0806CA08  @ =gUnknown_0814CB1A
	ldrb r0, [r7]
	lsl r0, r0, #1
	add r2, r0, r1
	mov r7, #0
	ldrsh r0, [r2, r7]
	add r0, r4, r0
	add r7, r1, #0
	cmp r5, r0
	beq _0806CA50
	cmp r5, r0
	bge _0806CA0C
	ldrh r0, [r3]
	add r0, r0, #1
	b _0806CA10
	.byte 0x00
	.byte 0x00
_0806C9F0:
	.4byte gRam
_0806C9F4:
	.4byte 0x00000A42
_0806C9F8:
	.4byte 0x00000A49
_0806C9FC:
	.4byte 0x0000099E
_0806CA00:
	.4byte 0x00000958
_0806CA04:
	.4byte 0x00000BAA
_0806CA08:
	.4byte gUnknown_0814CB1A
_0806CA0C:
	ldrh r0, [r3]
	sub r0, r0, #1
_0806CA10:
	strh r0, [r3]
	ldr r1, _0806CA40  @ =0x00000958
	add r0, r6, r1
	mov r3, #0
	ldrsh r2, [r0, r3]
	ldr r4, _0806CA44  @ =0x00000BAA
	add r1, r6, r4
	ldr r5, _0806CA48  @ =0x00000A49
	add r0, r6, r5
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r7
	mov r7, #0
	ldrsh r0, [r0, r7]
	ldrh r1, [r1]
	add r0, r0, r1
	cmp r2, r0
	bne _0806CA56
	ldr r0, _0806CA4C  @ =0x0000099E
	add r1, r6, r0
	mov r0, #16
	strb r0, [r1]
	b _0806CA56
	.byte 0x00
	.byte 0x00
_0806CA40:
	.4byte 0x00000958
_0806CA44:
	.4byte 0x00000BAA
_0806CA48:
	.4byte 0x00000A49
_0806CA4C:
	.4byte 0x0000099E
_0806CA50:
	ldrh r0, [r2]
	add r0, r4, r0
	strh r0, [r3]
_0806CA56:
	ldr r1, _0806CA64  @ =0x00000958
	add r0, r6, r1
	ldrh r1, [r0]
	ldr r2, _0806CA68  @ =0x00000956
	add r0, r6, r2
	b _0806CDEE
	.byte 0x00
	.byte 0x00
_0806CA64:
	.4byte 0x00000958
_0806CA68:
	.4byte 0x00000956
_0806CA6C:
	sub r0, r2, #1
	strb r0, [r1]
	b _0806CDF0
_0806CA72:
	ldr r3, _0806CAB8  @ =0x000009DA
	add r0, r6, r3
	ldrh r0, [r0]
	cmp r0, #48
	bne _0806CAC8
	ldr r4, _0806CABC  @ =0x00000AA8
	add r0, r6, r4
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0806CAC8
	ldr r5, _0806CAC0  @ =0x00000958
	add r2, r6, r5
	mov r7, #0
	ldrsh r0, [r2, r7]
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	mov r1, #192
	lsl r1, r1, #3
	cmp r0, r1
	bne _0806CAC8
	ldrh r3, [r2]
	mov r0, #0
	ldrsh r1, [r2, r0]
	ldr r0, _0806CAC4  @ =0x00000634
	cmp r1, r0
	bne _0806CAB0
	b _0806CDF0
_0806CAB0:
	sub r0, r3, #2
	strh r0, [r2]
	b _0806CDF0
	.byte 0x00
	.byte 0x00
_0806CAB8:
	.4byte 0x000009DA
_0806CABC:
	.4byte 0x00000AA8
_0806CAC0:
	.4byte 0x00000958
_0806CAC4:
	.4byte 0x00000634
_0806CAC8:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	mov r3, #0
	mov r0, #1
	strh r0, [r1]
	ldr r4, _0806CB6C  @ =0x0000097C
	add r2, r6, r4
	strh r3, [r2]
	ldr r5, _0806CB70  @ =0x00001738
	add r0, r6, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806CAF6
	ldr r7, _0806CB74  @ =0x000016C8
	add r0, r6, r7
	ldrb r1, [r0]
	strh r1, [r2]
	mov r0, #1
	neg r0, r0
	cmp r1, r0
	bne _0806CAF6
	strh r3, [r2]
_0806CAF6:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	ldr r3, _0806CB6C  @ =0x0000097C
	add r2, r6, r3
	ldrh r0, [r0]
	ldrh r1, [r2]
	sub r0, r0, r1
	ldr r4, _0806CB78  @ =0x000001FF
	add r1, r4, #0
	and r0, r0, r1
	add r0, r0, #12
	strh r0, [r2]
	ldr r5, _0806CB7C  @ =0x000016D6
	add r1, r6, r5
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _0806CB1E
	b _0806CC5A
_0806CB1E:
	add r3, r0, #0
	cmp r3, #0
	bge _0806CB32
	mvn r0, r3
	add r3, r0, #1
	mov r7, #150
	lsl r7, r7, #4
	add r1, r6, r7
	ldr r0, _0806CB80  @ =0x0000FFFF
	strh r0, [r1]
_0806CB32:
	add r7, r3, #0
	mov r12, r6
	ldr r0, _0806CB84  @ =0x00000B8C
	add r0, r0, r6
	mov r8, r0
	ldr r1, _0806CB88  @ =0x00000958
	add r1, r1, r6
	mov r10, r1
	ldr r2, _0806CB8C  @ =0x00000956
	add r2, r2, r6
	mov r9, r2
_0806CB48:
	ldr r0, _0806CB90  @ =0x000009E1
	add r0, r0, r12
	ldrb r2, [r0]
	ldr r0, _0806CB7C  @ =0x000016D6
	add r0, r0, r12
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806CB98
	mov r3, r8
	ldrh r1, [r3]
	ldr r4, _0806CB94  @ =gUnknown_03002BAC
	mov r5, #0
	ldrsh r0, [r4, r5]
	cmp r1, r0
	blt _0806CC52
	b _0806CBA8
_0806CB6C:
	.4byte 0x0000097C
_0806CB70:
	.4byte 0x00001738
_0806CB74:
	.4byte 0x000016C8
_0806CB78:
	.4byte 0x000001FF
_0806CB7C:
	.4byte 0x000016D6
_0806CB80:
	.4byte 0x0000FFFF
_0806CB84:
	.4byte 0x00000B8C
_0806CB88:
	.4byte 0x00000958
_0806CB8C:
	.4byte 0x00000956
_0806CB90:
	.4byte 0x000009E1
_0806CB94:
	.4byte gUnknown_03002BAC
_0806CB98:
	ldr r1, _0806CBD8  @ =gUnknown_03002BAC
	mov r3, #0
	ldrsh r0, [r1, r3]
	ldr r4, _0806CBDC  @ =gUnknown_03002DBE
	ldrh r4, [r4]
	cmp r0, r4
	blt _0806CC52
	add r2, r2, #4
_0806CBA8:
	ldr r4, _0806CBE0  @ =0x00000958
	add r4, r4, r12
	asr r1, r2, #1
	lsl r1, r1, #1
	ldr r0, _0806CBE4  @ =0x00000B74
	add r0, r0, r12
	add r1, r1, r0
	mov r5, #0
	ldrsh r2, [r4, r5]
	ldrh r3, [r1]
	mov r0, #0
	ldrsh r1, [r1, r0]
	cmp r2, r1
	beq _0806CC52
	ldr r5, _0806CBE8  @ =gUnknown_03002B90
	mov r0, #0
	ldrsh r5, [r5, r0]
	cmp r5, #0
	ble _0806CBEC
	cmp r2, r1
	blt _0806CBF0
_0806CBD2:
	strh r3, [r4]
	b _0806CC52
	.byte 0x00
	.byte 0x00
_0806CBD8:
	.4byte gUnknown_03002BAC
_0806CBDC:
	.4byte gUnknown_03002DBE
_0806CBE0:
	.4byte 0x00000958
_0806CBE4:
	.4byte 0x00000B74
_0806CBE8:
	.4byte gUnknown_03002B90
_0806CBEC:
	cmp r2, r1
	blt _0806CBD2
_0806CBF0:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r1, r6
	ldrh r4, [r0]
	mov r2, r10
	ldrh r2, [r2]
	add r0, r4, r2
	mov r3, r10
	strh r0, [r3]
	ldr r5, _0806CCD4  @ =0x000009DA
	add r0, r6, r5
	ldrh r0, [r0]
	ldr r1, _0806CCD8  @ =0x0000FFFF
	cmp r0, r1
	beq _0806CC52
	lsl r1, r4, #16
	asr r3, r1, #17
	mov r2, #1
	str r2, [sp, #4]
	lsl r0, r4, #31
	lsr r2, r0, #16
	cmp r1, #0
	bge _0806CC24
	mov r0, #240
	lsl r0, r0, #8
	orr r3, r3, r0
_0806CC24:
	ldr r5, _0806CCDC  @ =0x00000B9E
	add r1, r6, r5
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	mov r2, r9
	mov r5, #0
	ldrsh r1, [r2, r5]
	add r1, r1, r3
	lsr r0, r0, #16
	ldr r2, [sp, #4]
	and r0, r0, r2
	add r0, r0, r1
	mov r3, r9
	strh r0, [r3]
	mov r5, r8
	ldrh r5, [r5]
	add r0, r4, r5
	mov r1, r8
	strh r0, [r1]
	add r0, r0, #2
	ldr r2, _0806CCE0  @ =gUnknown_03002DBE
	strh r0, [r2]
_0806CC52:
	sub r7, r7, #1
	cmp r7, #0
	beq _0806CC5A
	b _0806CB48
_0806CC5A:
	mov r3, #150
	lsl r3, r3, #4
	add r4, r6, r3
	mov r0, #1
	strh r0, [r4]
	ldr r5, _0806CCE4  @ =0x000016C4
	add r0, r6, r5
	ldrh r1, [r0]
	ldr r0, _0806CCE8  @ =0x000001FF
	and r0, r0, r1
	add r0, r0, #8
	ldr r7, _0806CCEC  @ =0x0000097C
	add r2, r6, r7
	strh r0, [r2]
	ldr r0, _0806CCF0  @ =0x000016D7
	add r1, r6, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _0806CC84
	b _0806CDAC
_0806CC84:
	add r3, r0, #0
	cmp r3, #0
	bge _0806CC94
	mvn r0, r3
	add r3, r0, #1
	mov r0, #1
	neg r0, r0
	strh r0, [r4]
_0806CC94:
	add r7, r3, #0
	mov r1, #185
	lsl r1, r1, #4
	add r1, r1, r6
	mov r12, r1
	mov r10, r2
	ldr r2, _0806CCF4  @ =0x00000B92
	add r2, r2, r6
	mov r9, r2
	mov r3, #149
	lsl r3, r3, #4
	add r3, r3, r6
	mov r8, r3
_0806CCAE:
	ldr r4, _0806CCF8  @ =gUnknown_03002C10
	ldrb r2, [r4]
	ldr r5, _0806CCFC  @ =gRam
	ldr r1, _0806CCF0  @ =0x000016D7
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806CD00
	mov r3, r12
	ldrh r1, [r3]
	mov r4, r10
	mov r5, #0
	ldrsh r0, [r4, r5]
	cmp r1, r0
	blt _0806CDA4
	b _0806CD10
	.byte 0x00
	.byte 0x00
_0806CCD4:
	.4byte 0x000009DA
_0806CCD8:
	.4byte 0x0000FFFF
_0806CCDC:
	.4byte 0x00000B9E
_0806CCE0:
	.4byte gUnknown_03002DBE
_0806CCE4:
	.4byte 0x000016C4
_0806CCE8:
	.4byte 0x000001FF
_0806CCEC:
	.4byte 0x0000097C
_0806CCF0:
	.4byte 0x000016D7
_0806CCF4:
	.4byte 0x00000B92
_0806CCF8:
	.4byte gUnknown_03002C10
_0806CCFC:
	.4byte gRam
_0806CD00:
	mov r1, r10
	mov r3, #0
	ldrsh r0, [r1, r3]
	mov r4, r9
	ldrh r4, [r4]
	cmp r0, r4
	blt _0806CDA4
	add r2, r2, #4
_0806CD10:
	ldr r0, _0806CD88  @ =0x00000952
	add r5, r6, r0
	asr r1, r2, #1
	lsl r1, r1, #1
	ldr r2, _0806CD8C  @ =0x00000B7C
	add r0, r6, r2
	add r1, r1, r0
	ldrh r3, [r5]
	mov r4, #0
	ldrsh r2, [r5, r4]
	mov r4, #0
	ldrsh r0, [r1, r4]
	cmp r2, r0
	beq _0806CD9C
	mov r1, #150
	lsl r1, r1, #4
	add r0, r6, r1
	ldrh r4, [r0]
	add r0, r3, r4
	strh r0, [r5]
	ldr r2, _0806CD90  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	ldr r3, _0806CD94  @ =0x0000FFFF
	cmp r0, r3
	beq _0806CDA4
	lsl r1, r4, #16
	asr r3, r1, #17
	mov r5, #1
	str r5, [sp, #4]
	lsl r0, r4, #31
	lsr r2, r0, #16
	cmp r1, #0
	bge _0806CD58
	mov r2, #128
	lsl r2, r2, #8
_0806CD58:
	ldr r0, _0806CD98  @ =0x00000B9C
	add r1, r6, r0
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	mov r2, r8
	mov r5, #0
	ldrsh r1, [r2, r5]
	add r1, r1, r3
	lsr r0, r0, #16
	ldr r2, [sp, #4]
	and r0, r0, r2
	add r0, r0, r1
	mov r3, r8
	strh r0, [r3]
	mov r5, r12
	ldrh r5, [r5]
	add r0, r4, r5
	mov r1, r12
	strh r0, [r1]
	add r0, r0, #2
	mov r2, r9
	strh r0, [r2]
	b _0806CDA4
_0806CD88:
	.4byte 0x00000952
_0806CD8C:
	.4byte 0x00000B7C
_0806CD90:
	.4byte 0x000009DA
_0806CD94:
	.4byte 0x0000FFFF
_0806CD98:
	.4byte 0x00000B9C
_0806CD9C:
	ldr r3, _0806CE00  @ =0x0000096C
	add r1, r6, r3
	mov r0, #2
	strh r0, [r1]
_0806CDA4:
	sub r7, r7, #1
	cmp r7, #0
	beq _0806CDAC
	b _0806CCAE
_0806CDAC:
	ldr r4, _0806CE04  @ =0x000009DA
	add r0, r6, r4
	ldrh r1, [r0]
	ldr r0, _0806CE08  @ =0x0000FFFF
	cmp r1, r0
	beq _0806CDF0
	ldr r5, _0806CE0C  @ =0x00000ABA
	add r0, r6, r5
	ldrh r1, [r0]
	sub r0, r1, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #4
	bhi _0806CDD6
	add r0, r1, #0
	cmp r0, #4
	beq _0806CDD6
	cmp r0, #3
	beq _0806CDD6
	cmp r0, #2
	bne _0806CDF0
_0806CDD6:
	ldr r7, _0806CE10  @ =0x00000952
	add r0, r6, r7
	ldrh r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	ldr r3, _0806CE14  @ =0x00000958
	add r0, r6, r3
	ldrh r1, [r0]
	ldr r4, _0806CE18  @ =0x00000956
	add r0, r6, r4
_0806CDEE:
	strh r1, [r0]
_0806CDF0:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0806CE00:
	.4byte 0x0000096C
_0806CE04:
	.4byte 0x000009DA
_0806CE08:
	.4byte 0x0000FFFF
_0806CE0C:
	.4byte 0x00000ABA
_0806CE10:
	.4byte 0x00000952
_0806CE14:
	.4byte 0x00000958
_0806CE18:
	.4byte 0x00000956
	THUMB_FUNC_END sub_0806C988

