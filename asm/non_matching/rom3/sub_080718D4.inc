	THUMB_FUNC_START sub_080718D4
sub_080718D4: @ 0x080718D4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _08071978  @ =gRam
	ldr r2, _0807197C  @ =0x00001738
	add r0, r1, r2
	ldrb r3, [r0]
	add r7, r1, #0
	cmp r3, #0
	beq _080718F8
	ldr r3, _08071980  @ =0x000016C8
	add r0, r7, r3
	ldrb r3, [r0]
	mov r0, #1
	neg r0, r0
	cmp r3, r0
	bne _080718F8
	mov r3, #0
_080718F8:
	ldr r4, _08071984  @ =0x0000097C
	add r5, r7, r4
	mov r2, #0
	mov r1, #182
	lsl r1, r1, #5
	add r0, r7, r1
	ldrh r0, [r0]
	sub r0, r0, r3
	add r0, r0, #12
	strh r0, [r5]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r7, r3
	mov r0, #1
	strh r0, [r1]
	ldr r4, _08071988  @ =0x000016D6
	add r0, r7, r4
	mov r3, #0
	ldrsb r3, [r0, r3]
	cmp r3, #0
	bne _08071924
	b _08071A8C
_08071924:
	ldr r4, _0807198C  @ =0x00000968
	add r0, r7, r4
	strh r2, [r0]
	cmp r3, #0
	bge _08071938
	mvn r0, r3
	add r3, r0, #1
	mov r0, #1
	neg r0, r0
	strh r0, [r1]
_08071938:
	ldr r0, _08071990  @ =0x00000964
	add r1, r7, r0
	strh r3, [r1]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r7, r3
	strh r2, [r0]
	add r4, r7, #0
	ldr r0, _08071994  @ =0x00000B8E
	add r0, r0, r4
	mov r8, r0
	add r6, r1, #0
_08071950:
	ldr r1, _08071988  @ =0x000016D6
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0807199C
	ldr r2, _08071998  @ =0x00000B8C
	add r0, r4, r2
	ldrh r1, [r0]
	mov r3, #0
	ldrsh r0, [r5, r3]
	cmp r1, r0
	blt _080719B0
	mov r0, #6
	mov r1, #0
	bl sub_080716E4
	b _080719B0
	.byte 0x00
	.byte 0x00
_08071978:
	.4byte gRam
_0807197C:
	.4byte 0x00001738
_08071980:
	.4byte 0x000016C8
_08071984:
	.4byte 0x0000097C
_08071988:
	.4byte 0x000016D6
_0807198C:
	.4byte 0x00000968
_08071990:
	.4byte 0x00000964
_08071994:
	.4byte 0x00000B8E
_08071998:
	.4byte 0x00000B8C
_0807199C:
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, r8
	ldrh r2, [r2]
	cmp r0, r2
	blt _080719B0
	mov r0, #6
	mov r1, #2
	bl sub_080716E4
_080719B0:
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	ldr r7, _08071A04  @ =gRam
	cmp r0, #0
	bne _08071950
	ldr r3, _08071A08  @ =0x00000968
	add r0, r7, r3
	ldrh r4, [r0]
	mov r1, #193
	lsl r1, r1, #4
	add r0, r7, r1
	strb r4, [r0]
	ldr r2, _08071A0C  @ =0x000009C8
	add r0, r7, r2
	ldrh r1, [r0]
	cmp r1, #151
	beq _08071A7C
	cmp r1, #157
	beq _08071A7C
	add r0, r4, #0
	lsl r2, r0, #16
	cmp r2, #0
	beq _08071A8C
	lsr r3, r2, #17
	lsl r0, r0, #31
	lsr r5, r0, #16
	cmp r1, #149
	beq _080719F0
	cmp r1, #158
	bne _08071A14
_080719F0:
	lsl r0, r4, #30
	lsr r5, r0, #16
	lsr r3, r2, #18
	ldr r0, _08071A10  @ =0x00002FFF
	cmp r3, r0
	bls _08071A22
	mov r4, #240
	lsl r4, r4, #8
	add r0, r4, #0
	b _08071A20
_08071A04:
	.4byte gRam
_08071A08:
	.4byte 0x00000968
_08071A0C:
	.4byte 0x000009C8
_08071A10:
	.4byte 0x00002FFF
_08071A14:
	ldr r0, _08071A68  @ =0x00006FFF
	cmp r3, r0
	bls _08071A22
	mov r1, #240
	lsl r1, r1, #8
	add r0, r1, #0
_08071A20:
	orr r3, r3, r0
_08071A22:
	ldr r2, _08071A6C  @ =0x00000B9E
	add r1, r7, r2
	ldrh r0, [r1]
	add r5, r0, r5
	strh r5, [r1]
	ldr r0, _08071A70  @ =0x0000095E
	add r4, r7, r0
	mov r1, #0
	ldrsh r0, [r4, r1]
	add r0, r0, r3
	lsr r2, r5, #16
	add r2, r2, r0
	strh r2, [r4]
	ldr r3, _08071A74  @ =0x000009C6
	add r0, r7, r3
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #27
	bne _08071A8C
	lsl r0, r2, #16
	asr r0, r0, #16
	mov r1, #194
	lsl r1, r1, #3
	cmp r0, r1
	bgt _08071A58
	strh r1, [r4]
_08071A58:
	mov r0, #0
	ldrsh r1, [r4, r0]
	ldr r0, _08071A78  @ =0x000006BF
	cmp r1, r0
	ble _08071A8C
	add r0, r0, #1
	strh r0, [r4]
	b _08071A8C
_08071A68:
	.4byte 0x00006FFF
_08071A6C:
	.4byte 0x00000B9E
_08071A70:
	.4byte 0x0000095E
_08071A74:
	.4byte 0x000009C6
_08071A78:
	.4byte 0x000006BF
_08071A7C:
	ldr r2, _08071B0C  @ =0x0000095E
	add r1, r7, r2
	ldr r3, _08071B10  @ =0x00000968
	add r0, r7, r3
	ldrh r0, [r0]
	ldrh r4, [r1]
	add r0, r0, r4
	strh r0, [r1]
_08071A8C:
	ldr r1, _08071B14  @ =0x000016C4
	add r0, r7, r1
	ldrh r0, [r0]
	add r0, r0, #8
	ldr r2, _08071B18  @ =0x0000097C
	add r5, r7, r2
	strh r0, [r5]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	mov r0, #1
	strh r0, [r2]
	ldr r4, _08071B1C  @ =0x000016D7
	add r0, r7, r4
	mov r3, #0
	ldrsb r3, [r0, r3]
	cmp r3, #0
	bne _08071AB2
	b _08071BE8
_08071AB2:
	ldr r0, _08071B10  @ =0x00000968
	add r1, r7, r0
	mov r0, #0
	strh r0, [r1]
	cmp r3, #0
	bge _08071AC8
	mvn r0, r3
	add r3, r0, #1
	mov r0, #1
	neg r0, r0
	strh r0, [r2]
_08071AC8:
	ldr r1, _08071B20  @ =0x00000964
	add r2, r7, r1
	strh r3, [r2]
	mov r3, #151
	lsl r3, r3, #4
	add r1, r7, r3
	mov r0, #2
	strh r0, [r1]
	add r4, r7, #0
	ldr r0, _08071B24  @ =0x00000B92
	add r0, r0, r4
	mov r8, r0
	add r6, r2, #0
_08071AE2:
	ldr r1, _08071B1C  @ =0x000016D7
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08071B28
	mov r2, #185
	lsl r2, r2, #4
	add r0, r4, r2
	ldrh r1, [r0]
	mov r3, #0
	ldrsh r0, [r5, r3]
	cmp r1, r0
	blt _08071B3C
	mov r0, #0
	mov r1, #4
	bl sub_080716E4
	b _08071B3C
	.byte 0x00
	.byte 0x00
_08071B0C:
	.4byte 0x0000095E
_08071B10:
	.4byte 0x00000968
_08071B14:
	.4byte 0x000016C4
_08071B18:
	.4byte 0x0000097C
_08071B1C:
	.4byte 0x000016D7
_08071B20:
	.4byte 0x00000964
_08071B24:
	.4byte 0x00000B92
_08071B28:
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r2, r8
	ldrh r2, [r2]
	cmp r0, r2
	blt _08071B3C
	mov r0, #0
	mov r1, #6
	bl sub_080716E4
_08071B3C:
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	ldr r7, _08071B8C  @ =gRam
	cmp r0, #0
	bne _08071AE2
	ldr r3, _08071B90  @ =0x00000968
	add r0, r7, r3
	ldrh r3, [r0]
	ldr r4, _08071B94  @ =0x00000C11
	add r0, r7, r4
	strb r3, [r0]
	ldr r1, _08071B98  @ =0x000009C8
	add r0, r7, r1
	ldrh r1, [r0]
	cmp r1, #151
	beq _08071BD8
	cmp r1, #157
	beq _08071BD8
	add r0, r3, #0
	lsl r2, r0, #16
	cmp r2, #0
	beq _08071BE8
	lsl r0, r0, #31
	lsr r5, r0, #16
	cmp r1, #149
	beq _08071B78
	cmp r1, #158
	bne _08071BA0
_08071B78:
	lsl r0, r3, #30
	lsr r5, r0, #16
	lsr r3, r2, #18
	ldr r0, _08071B9C  @ =0x00002FFF
	cmp r3, r0
	bls _08071BB0
	mov r2, #240
	lsl r2, r2, #8
	add r0, r2, #0
	b _08071BAE
_08071B8C:
	.4byte gRam
_08071B90:
	.4byte 0x00000968
_08071B94:
	.4byte 0x00000C11
_08071B98:
	.4byte 0x000009C8
_08071B9C:
	.4byte 0x00002FFF
_08071BA0:
	lsr r3, r2, #17
	ldr r0, _08071BCC  @ =0x00006FFF
	cmp r3, r0
	bls _08071BB0
	mov r4, #240
	lsl r4, r4, #8
	add r0, r4, #0
_08071BAE:
	orr r3, r3, r0
_08071BB0:
	ldr r0, _08071BD0  @ =0x00000B9C
	add r1, r7, r0
	ldrh r0, [r1]
	add r5, r0, r5
	strh r5, [r1]
	ldr r1, _08071BD4  @ =0x0000095C
	add r2, r7, r1
	mov r4, #0
	ldrsh r1, [r2, r4]
	add r1, r1, r3
	lsr r0, r5, #16
	add r0, r0, r1
	strh r0, [r2]
	b _08071BE8
_08071BCC:
	.4byte 0x00006FFF
_08071BD0:
	.4byte 0x00000B9C
_08071BD4:
	.4byte 0x0000095C
_08071BD8:
	ldr r0, _08071C30  @ =0x0000095C
	add r1, r7, r0
	ldr r2, _08071C34  @ =0x00000968
	add r0, r7, r2
	ldrh r0, [r0]
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
_08071BE8:
	ldr r4, _08071C38  @ =0x000009C8
	add r0, r7, r4
	ldrh r0, [r0]
	cmp r0, #151
	beq _08071BF6
	cmp r0, #157
	bne _08071C48
_08071BF6:
	ldr r0, _08071C3C  @ =0x00000B9E
	add r1, r7, r0
	ldrh r0, [r1]
	mov r3, #128
	lsl r3, r3, #6
	add r5, r0, r3
	strh r5, [r1]
	ldr r1, _08071C40  @ =0x0000095E
	add r2, r7, r1
	mov r4, #0
	ldrsh r1, [r2, r4]
	mov r4, #1
	lsr r0, r5, #16
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _08071C44  @ =0x00000B9C
	add r1, r7, r0
	ldrh r0, [r1]
	add r5, r0, r3
	strh r5, [r1]
	ldr r1, _08071C30  @ =0x0000095C
	add r2, r7, r1
	mov r3, #0
	ldrsh r1, [r2, r3]
	lsr r0, r5, #16
	and r0, r0, r4
	add r0, r0, r1
	strh r0, [r2]
	b _08071C76
_08071C30:
	.4byte 0x0000095C
_08071C34:
	.4byte 0x00000968
_08071C38:
	.4byte 0x000009C8
_08071C3C:
	.4byte 0x00000B9E
_08071C40:
	.4byte 0x0000095E
_08071C44:
	.4byte 0x00000B9C
_08071C48:
	cmp r0, #156
	bne _08071C76
	ldr r4, _08071CAC  @ =0x00000B9E
	add r1, r7, r4
	ldrh r0, [r1]
	ldr r2, _08071CB0  @ =0xFFFFE000
	add r5, r0, r2
	strh r5, [r1]
	ldr r3, _08071CB4  @ =0x0000095E
	add r2, r7, r3
	mov r4, #0
	ldrsh r3, [r2, r4]
	lsr r0, r5, #16
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	strh r0, [r2]
	ldr r1, _08071CB8  @ =0x00000952
	add r0, r7, r1
	ldrh r1, [r0]
	ldr r2, _08071CBC  @ =0x0000095C
	add r0, r7, r2
	strh r1, [r0]
_08071C76:
	ldr r3, _08071CC0  @ =0x000009DA
	add r0, r7, r3
	ldrh r1, [r0]
	ldr r0, _08071CC4  @ =0x00000181
	cmp r1, r0
	bne _08071CA2
	ldr r4, _08071CC8  @ =0x00000958
	add r0, r7, r4
	ldrh r2, [r0]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	sub r3, r3, #124
	add r1, r7, r3
	orr r0, r0, r2
	strh r0, [r1]
	sub r4, r4, #6
	add r0, r7, r4
	ldrh r1, [r0]
	ldr r2, _08071CBC  @ =0x0000095C
	add r0, r7, r2
	strh r1, [r0]
_08071CA2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08071CAC:
	.4byte 0x00000B9E
_08071CB0:
	.4byte 0xFFFFE000
_08071CB4:
	.4byte 0x0000095E
_08071CB8:
	.4byte 0x00000952
_08071CBC:
	.4byte 0x0000095C
_08071CC0:
	.4byte 0x000009DA
_08071CC4:
	.4byte 0x00000181
_08071CC8:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080718D4

