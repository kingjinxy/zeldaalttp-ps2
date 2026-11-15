	THUMB_FUNC_START sub_0812DA14
sub_0812DA14: @ 0x0812DA14
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _0812DA7C  @ =gRam
	ldr r0, _0812DA80  @ =0x000009AD
	add r3, r4, r0
	ldrb r2, [r3]
	sub r0, r2, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #8
	bhi _0812DAB0
	ldr r1, _0812DA84  @ =0x00000534
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #13
	and r0, r0, r1
	cmp r0, #0
	beq _0812DAB0
	add r0, r2, #0
	cmp r0, #4
	bhi _0812DAA0
	ldr r0, _0812DA88  @ =gUnknown_02002434
	ldrh r0, [r0]
	cmp r0, #0
	beq _0812DAB0
	ldr r2, _0812DA8C  @ =0x000009E8
	add r1, r4, r2
	mov r0, #42
	strh r0, [r1]
	mov r0, #6
	strb r0, [r3]
	bl sub_0812E47C
	ldr r3, _0812DA90  @ =0x00000514
	add r1, r4, r3
	ldr r0, _0812DA94  @ =0x0000F441
	strh r0, [r1]
	ldr r0, _0812DA98  @ =gUnknown_02000800
	ldr r1, _0812DA9C  @ =gUnknown_02000C00
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	bl sub_08125FA0
	bl sub_08126C48
	b _0812DAB0
	.byte 0x00
	.byte 0x00
_0812DA7C:
	.4byte gRam
_0812DA80:
	.4byte 0x000009AD
_0812DA84:
	.4byte 0x00000534
_0812DA88:
	.4byte gUnknown_02002434
_0812DA8C:
	.4byte 0x000009E8
_0812DA90:
	.4byte 0x00000514
_0812DA94:
	.4byte 0x0000F441
_0812DA98:
	.4byte gUnknown_02000800
_0812DA9C:
	.4byte gUnknown_02000C00
_0812DAA0:
	cmp r0, #7
	bls _0812DAB0
	ldr r1, _0812DC0C  @ =0x0000099D
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	mov r0, #12
	strb r0, [r3]
_0812DAB0:
	ldr r1, _0812DC10  @ =gUnknown_0822B0D4
	ldr r5, _0812DC14  @ =gRam
	ldr r2, _0812DC18  @ =0x000009AD
	add r4, r5, r2
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldrb r2, [r4]
	cmp r2, #13
	bls _0812DACC
	b _0812DE10
_0812DACC:
	cmp r2, #7
	bne _0812DADC
	ldr r3, _0812DC1C  @ =0x000009E8
	add r0, r5, r3
	ldrh r1, [r0]
	ldr r0, _0812DC20  @ =0x000001E3
	cmp r1, r0
	bls _0812DAE2
_0812DADC:
	cmp r2, #7
	bhi _0812DAE2
	b _0812DE10
_0812DAE2:
	ldr r7, _0812DC14  @ =gRam
	ldr r0, _0812DC24  @ =0x000009F6
	add r1, r7, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r2, _0812DC28  @ =0x0000FFFF
	add r1, r2, #0
	and r0, r0, r1
	mov r1, #48
	and r0, r0, r1
	cmp r0, #0
	bne _0812DAFE
	b _0812DE10
_0812DAFE:
	ldr r3, _0812DC2C  @ =0x0000098E
	add r0, r7, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0812DB0E
	b _0812DC3C
_0812DB0E:
	mov r0, #128
	mov r9, r0
	mov r1, #137
	lsl r1, r1, #4
	add r2, r7, r1
	mov r3, #76
	ldrh r1, [r2, #2]
	ldr r0, _0812DC30  @ =0xFFFFFE00
	mov r8, r0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	mov r1, r9
	strb r1, [r2]
	mov r3, #128
	ldrh r1, [r2, #4]
	ldr r6, _0812DC34  @ =0xFFFFFC00
	add r0, r6, #0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r5, #15
	add r1, r5, #0
	and r1, r1, r0
	mov r3, #80
	orr r1, r1, r3
	ldrb r3, [r2, #3]
	mov r4, #17
	neg r4, r4
	add r0, r4, #0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #64
	strb r0, [r2, #1]
	mov r3, #13
	neg r3, r3
	and r1, r1, r3
	mov r0, #8
	orr r1, r1, r0
	strb r1, [r2, #5]
	ldr r1, _0812DC38  @ =0x00000898
	add r2, r7, r1
	mov r3, #108
	ldrh r1, [r2, #2]
	mov r0, r8
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	mov r3, r9
	strb r3, [r2]
	mov r3, #132
	ldrh r1, [r2, #4]
	add r0, r6, #0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	add r1, r5, #0
	and r1, r1, r0
	mov r0, #80
	orr r1, r1, r0
	ldrb r3, [r2, #3]
	add r0, r4, #0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #64
	strb r0, [r2, #1]
	mov r3, #13
	neg r3, r3
	and r1, r1, r3
	mov r0, #8
	orr r1, r1, r0
	strb r1, [r2, #5]
	mov r1, #138
	lsl r1, r1, #4
	add r0, r7, r1
	mov r2, #140
	ldrh r1, [r0, #2]
	mov r3, r8
	and r3, r3, r1
	orr r3, r3, r2
	strh r3, [r0, #2]
	mov r1, r9
	strb r1, [r0]
	mov r2, #136
	ldrh r1, [r0, #4]
	and r6, r6, r1
	orr r6, r6, r2
	strh r6, [r0, #4]
	ldrb r1, [r0, #5]
	and r5, r5, r1
	mov r2, #80
	orr r5, r5, r2
	ldrb r1, [r0, #3]
	and r4, r4, r1
	mov r3, #33
	neg r3, r3
	and r4, r4, r3
	mov r1, #63
	and r4, r4, r1
	mov r2, r9
	orr r4, r4, r2
	strb r4, [r0, #3]
	mov r3, #64
	strb r3, [r0, #1]
	sub r1, r1, #76
	and r5, r5, r1
	mov r2, #8
	orr r5, r5, r2
	strb r5, [r0, #5]
	b _0812DE10
	.byte 0x00
	.byte 0x00
_0812DC0C:
	.4byte 0x0000099D
_0812DC10:
	.4byte gUnknown_0822B0D4
_0812DC14:
	.4byte gRam
_0812DC18:
	.4byte 0x000009AD
_0812DC1C:
	.4byte 0x000009E8
_0812DC20:
	.4byte 0x000001E3
_0812DC24:
	.4byte 0x000009F6
_0812DC28:
	.4byte 0x0000FFFF
_0812DC2C:
	.4byte 0x0000098E
_0812DC30:
	.4byte 0xFFFFFE00
_0812DC34:
	.4byte 0xFFFFFC00
_0812DC38:
	.4byte 0x00000898
_0812DC3C:
	cmp r0, #1
	bne _0812DD18
	mov r3, #128
	mov r9, r3
	mov r0, #137
	lsl r0, r0, #4
	add r2, r7, r0
	mov r3, #80
	ldrh r1, [r2, #2]
	ldr r0, _0812DD0C  @ =0xFFFFFE00
	mov r8, r0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	mov r1, r9
	strb r1, [r2]
	mov r3, #141
	ldrh r1, [r2, #4]
	ldr r6, _0812DD10  @ =0xFFFFFC00
	add r0, r6, #0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r4, #15
	add r1, r4, #0
	and r1, r1, r0
	mov r3, #80
	orr r1, r1, r3
	ldrb r3, [r2, #3]
	mov r5, #17
	neg r5, r5
	add r0, r5, #0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #64
	mov r12, r0
	strb r0, [r2, #1]
	mov r3, #13
	neg r3, r3
	and r1, r1, r3
	mov r0, #8
	orr r1, r1, r0
	strb r1, [r2, #5]
	ldr r1, _0812DD14  @ =0x00000898
	add r2, r7, r1
	mov r3, #112
	ldrh r1, [r2, #2]
	mov r0, r8
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	mov r3, r9
	strb r3, [r2]
	mov r3, #145
	ldrh r1, [r2, #4]
	add r0, r6, #0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	add r1, r4, #0
	and r1, r1, r0
	mov r0, #80
	orr r1, r1, r0
	ldrb r3, [r2, #3]
	add r0, r5, #0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, r12
	strb r0, [r2, #1]
	mov r3, #13
	neg r3, r3
	and r1, r1, r3
	mov r0, #8
	orr r1, r1, r0
	strb r1, [r2, #5]
	mov r1, #138
	lsl r1, r1, #4
	add r0, r7, r1
	mov r2, #144
	ldrh r1, [r0, #2]
	mov r3, r8
	and r3, r3, r1
	orr r3, r3, r2
	strh r3, [r0, #2]
	mov r1, r9
	strb r1, [r0]
	mov r2, #149
	b _0812DDE2
_0812DD0C:
	.4byte 0xFFFFFE00
_0812DD10:
	.4byte 0xFFFFFC00
_0812DD14:
	.4byte 0x00000898
_0812DD18:
	mov r2, #128
	mov r9, r2
	mov r3, #137
	lsl r3, r3, #4
	add r2, r7, r3
	mov r3, #80
	ldrh r1, [r2, #2]
	ldr r0, _0812DE54  @ =0xFFFFFE00
	mov r8, r0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	mov r1, r9
	strb r1, [r2]
	mov r3, #151
	ldrh r1, [r2, #4]
	ldr r6, _0812DE58  @ =0xFFFFFC00
	add r0, r6, #0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	mov r4, #15
	add r1, r4, #0
	and r1, r1, r0
	mov r3, #80
	orr r1, r1, r3
	ldrb r3, [r2, #3]
	mov r5, #17
	neg r5, r5
	add r0, r5, #0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, #64
	mov r10, r0
	strb r0, [r2, #1]
	mov r3, #13
	neg r3, r3
	and r1, r1, r3
	mov r0, #8
	orr r1, r1, r0
	strb r1, [r2, #5]
	ldr r1, _0812DE5C  @ =0x00000898
	add r2, r7, r1
	mov r3, #112
	ldrh r1, [r2, #2]
	mov r0, r8
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #2]
	mov r3, r9
	strb r3, [r2]
	mov r3, #155
	ldrh r1, [r2, #4]
	add r0, r6, #0
	and r0, r0, r1
	orr r0, r0, r3
	strh r0, [r2, #4]
	ldrb r0, [r2, #5]
	add r1, r4, #0
	and r1, r1, r0
	mov r0, #80
	orr r1, r1, r0
	ldrb r3, [r2, #3]
	add r0, r5, #0
	and r0, r0, r3
	mov r3, #33
	neg r3, r3
	and r0, r0, r3
	mov r3, #63
	and r0, r0, r3
	mov r3, r9
	orr r0, r0, r3
	strb r0, [r2, #3]
	mov r0, r10
	strb r0, [r2, #1]
	mov r3, #13
	neg r3, r3
	and r1, r1, r3
	mov r0, #8
	orr r1, r1, r0
	strb r1, [r2, #5]
	mov r1, #138
	lsl r1, r1, #4
	add r0, r7, r1
	mov r2, #144
	ldrh r1, [r0, #2]
	mov r3, r8
	and r3, r3, r1
	orr r3, r3, r2
	strh r3, [r0, #2]
	mov r1, r9
	strb r1, [r0]
	mov r2, #159
_0812DDE2:
	ldrh r1, [r0, #4]
	and r6, r6, r1
	orr r6, r6, r2
	strh r6, [r0, #4]
	ldrb r1, [r0, #5]
	and r4, r4, r1
	mov r2, #80
	orr r4, r4, r2
	ldrb r1, [r0, #3]
	and r5, r5, r1
	mov r3, #33
	neg r3, r3
	and r5, r5, r3
	mov r1, #63
	and r5, r5, r1
	strb r5, [r0, #3]
	mov r2, r9
	strb r2, [r0, #1]
	add r3, r3, #20
	and r4, r4, r3
	mov r1, #8
	orr r4, r4, r1
	strb r4, [r0, #5]
_0812DE10:
	ldr r0, _0812DE60  @ =gRam
	ldr r2, _0812DE64  @ =0x00000952
	add r1, r0, r2
	ldrh r2, [r1]
	ldr r3, _0812DE68  @ =0x00000A2C
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0812DE6C  @ =0x00000958
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #4
	add r1, r0, r3
	strh r2, [r1]
	mov r2, #149
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r2, [r1]
	sub r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _0812DE70  @ =0x00000956
	add r1, r0, r2
	ldrh r1, [r1]
	add r3, r3, #4
	add r0, r0, r3
	strh r1, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812DE54:
	.4byte 0xFFFFFE00
_0812DE58:
	.4byte 0xFFFFFC00
_0812DE5C:
	.4byte 0x00000898
_0812DE60:
	.4byte gRam
_0812DE64:
	.4byte 0x00000952
_0812DE68:
	.4byte 0x00000A2C
_0812DE6C:
	.4byte 0x00000958
_0812DE70:
	.4byte 0x00000956
	THUMB_FUNC_END sub_0812DA14

