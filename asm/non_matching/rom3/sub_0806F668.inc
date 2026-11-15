	THUMB_FUNC_START sub_0806F668
sub_0806F668: @ 0x0806F668
	push {r4-r7,lr}
	ldr r6, _0806F768  @ =gRam
	ldr r0, _0806F76C  @ =0x000009E3
	add r5, r6, r0
	ldrb r2, [r5]
	mov r4, #1
	eor r2, r2, r4
	strb r2, [r5]
	ldr r1, _0806F770  @ =0x00000AB4
	add r0, r6, r1
	ldrb r0, [r0]
	ldr r3, _0806F774  @ =0x000009E4
	add r1, r6, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	orr r2, r2, r0
	ldr r1, _0806F778  @ =0x000009E2
	add r0, r6, r1
	strb r2, [r0]
	ldr r3, _0806F77C  @ =0x00000B7C
	add r2, r6, r3
	ldr r1, _0806F780  @ =0xFFFFFF00
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	mov r2, #184
	lsl r2, r2, #4
	add r1, r6, r2
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	ldr r1, _0806F784  @ =0x00000AA8
	add r0, r6, r1
	ldrh r3, [r0]
	lsr r3, r3, #4
	ldr r2, _0806F788  @ =0x0000096C
	add r0, r6, r2
	strh r3, [r0]
	ldr r0, _0806F78C  @ =0x000009DA
	add r7, r6, r0
	ldrh r2, [r7]
	lsl r2, r2, #1
	ldr r1, _0806F790  @ =gUnknown_02002000
	add r1, r1, r2
	mov r12, r1
	ldr r2, _0806F794  @ =0x00000AA6
	add r0, r6, r2
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #8
	and r0, r0, r1
	add r2, r2, #8
	add r1, r6, r2
	ldrh r1, [r1]
	orr r0, r0, r1
	orr r3, r3, r0
	mov r0, r12
	strh r3, [r0]
	ldrb r0, [r5]
	eor r4, r4, r0
	ldr r3, _0806F798  @ =gUnknown_0814CE0C
	lsl r0, r4, #1
	lsl r4, r4, #2
	add r4, r4, r3
	ldrh r2, [r4]
	ldr r4, _0806F79C  @ =0x00000B88
	add r1, r6, r4
	strh r2, [r1]
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r2, _0806F7A0  @ =0x00000B8A
	add r0, r6, r2
	strh r1, [r0]
	mov r0, #3
	bl sub_0806C814
	ldr r3, _0806F7A4  @ =0x000009AD
	add r1, r6, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r5]
	cmp r0, #0
	bne _0806F718
	b _0806F818
_0806F718:
	sub r4, r4, #10
	add r2, r6, r4
	ldr r1, _0806F7A8  @ =0xFFFFFE00
	add r0, r1, #0
	ldrh r3, [r2]
	add r1, r0, r3
	strh r1, [r2]
	add r4, r4, #4
	add r1, r6, r4
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldrh r2, [r7]
	ldr r4, _0806F7AC  @ =0x000009DC
	add r3, r6, r4
	strh r2, [r3]
	ldr r1, _0806F7B0  @ =0x00000A22
	add r0, r6, r1
	ldrh r0, [r0]
	mov r1, #207
	and r1, r1, r0
	cmp r1, #137
	beq _0806F74A
	cmp r1, #139
	bne _0806F7B8
_0806F74A:
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r2
	ldr r2, _0806F7B4  @ =0x00000CF3
	add r0, r6, r2
	ldrb r0, [r0]
	orr r0, r0, r1
	strh r0, [r7]
	ldr r0, _0806F780  @ =0xFFFFFF00
	ldrh r1, [r7]
	add r1, r1, #1
	bl sub_0806F090
	b _0806F7D2
	.byte 0x00
	.byte 0x00
_0806F768:
	.4byte gRam
_0806F76C:
	.4byte 0x000009E3
_0806F770:
	.4byte 0x00000AB4
_0806F774:
	.4byte 0x000009E4
_0806F778:
	.4byte 0x000009E2
_0806F77C:
	.4byte 0x00000B7C
_0806F780:
	.4byte 0xFFFFFF00
_0806F784:
	.4byte 0x00000AA8
_0806F788:
	.4byte 0x0000096C
_0806F78C:
	.4byte 0x000009DA
_0806F790:
	.4byte gUnknown_02002000
_0806F794:
	.4byte 0x00000AA6
_0806F798:
	.4byte gUnknown_0814CE0C
_0806F79C:
	.4byte 0x00000B88
_0806F7A0:
	.4byte 0x00000B8A
_0806F7A4:
	.4byte 0x000009AD
_0806F7A8:
	.4byte 0xFFFFFE00
_0806F7AC:
	.4byte 0x000009DC
_0806F7B0:
	.4byte 0x00000A22
_0806F7B4:
	.4byte 0x00000CF3
_0806F7B8:
	ldr r4, _0806F840  @ =0x00000B36
	add r0, r6, r4
	ldrh r1, [r0]
	lsl r0, r2, #16
	lsr r0, r0, #16
	cmp r1, r0
	beq _0806F7CC
	strh r1, [r3]
	bl sub_0806F1E8
_0806F7CC:
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
_0806F7D2:
	ldr r3, _0806F844  @ =gRam
	ldr r0, _0806F848  @ =0x000009AD
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0806F84C  @ =0x00000A11
	add r4, r3, r1
	ldrb r1, [r4]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0806F802
	mov r0, #161
	lsl r0, r0, #4
	add r2, r3, r0
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r2]
	ldr r2, _0806F850  @ =0x00000B1E
	add r0, r3, r2
	strh r1, [r0]
_0806F802:
	ldrb r1, [r4]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0806F818
	ldr r4, _0806F854  @ =0x00000AB2
	add r0, r3, r4
	ldrh r1, [r0]
	mov r2, #2
	eor r1, r1, r2
	strh r1, [r0]
_0806F818:
	ldr r1, _0806F844  @ =gRam
	ldr r2, _0806F84C  @ =0x00000A11
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0806F858  @ =0x000009E1
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _0806F85C  @ =0x000009E4
	add r0, r1, r4
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #0
	bne _0806F860
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	mov r0, #4
	b _0806F868
	.byte 0x00
	.byte 0x00
_0806F840:
	.4byte 0x00000B36
_0806F844:
	.4byte gRam
_0806F848:
	.4byte 0x000009AD
_0806F84C:
	.4byte 0x00000A11
_0806F850:
	.4byte 0x00000B1E
_0806F854:
	.4byte 0x00000AB2
_0806F858:
	.4byte 0x000009E1
_0806F85C:
	.4byte 0x000009E4
_0806F860:
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	mov r0, #8
_0806F868:
	strh r0, [r1]
	ldr r4, _0806F898  @ =0x00000AF9
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806F8A4
	ldr r1, _0806F89C  @ =gUnknown_0814CDDC
	ldr r3, _0806F8A0  @ =0x000009E2
	add r0, r2, r3
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	mov r3, #0
	ldrsh r1, [r1, r3]
	and r0, r0, r1
	cmp r0, #0
	bne _0806F8AC
	add r4, r4, #129
	add r1, r2, r4
	b _0806F8A8
	.byte 0x00
	.byte 0x00
_0806F898:
	.4byte 0x00000AF9
_0806F89C:
	.4byte gUnknown_0814CDDC
_0806F8A0:
	.4byte 0x000009E2
_0806F8A4:
	ldr r0, _0806F8B4  @ =0x000009E1
	add r1, r2, r0
_0806F8A8:
	mov r0, #2
	strb r0, [r1]
_0806F8AC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806F8B4:
	.4byte 0x000009E1
	THUMB_FUNC_END sub_0806F668

