	THUMB_FUNC_START sub_08076694
sub_08076694: @ 0x08076694
	push {r4,r5,lr}
	ldr r5, _080766F4  @ =gRam
	ldr r1, _080766F8  @ =0x000009AC
	add r0, r5, r1
	ldrb r0, [r0]
	sub r0, r0, #24
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bls _080766B8
	ldr r2, _080766FC  @ =0x000009DA
	add r0, r5, r2
	ldrh r1, [r0]
	ldr r3, _08076700  @ =0x00001670
	add r0, r5, r3
	strh r1, [r0]
	bl sub_080BE078
_080766B8:
	mov r4, #0
	ldr r1, _080766FC  @ =0x000009DA
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #3
	bne _080766C6
	b _080768F0
_080766C6:
	mov r0, #52
	add r1, r4, #0
	mul r1, r0, r1
	ldr r0, _08076704  @ =gUnknown_0814DB24
	add r1, r1, r0
	ldr r0, _080766F4  @ =gRam
	ldr r3, _080766FC  @ =0x000009DA
	add r2, r0, r3
	ldrh r0, [r2]
	ldrh r1, [r1]
	cmp r0, r1
	beq _080766E0
	b _080768EC
_080766E0:
	ldr r1, _08076708  @ =0xFFFFFEFF
	add r0, r0, r1
	cmp r0, #37
	bls _080766EA
	b _080768F0
_080766EA:
	lsl r0, r0, #2
	ldr r1, _0807670C  @ =0x08076710
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080766F4:
	.4byte gRam
_080766F8:
	.4byte 0x000009AC
_080766FC:
	.4byte 0x000009DA
_08076700:
	.4byte 0x00001670
_08076704:
	.4byte gUnknown_0814DB24
_08076708:
	.4byte 0xFFFFFEFF
_0807670C:
	.4byte 0x08076710
	.4byte _080767A8
	.4byte _080768F0
	.4byte _080767C8
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080767A8
	.4byte _080767A8
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080767A8
	.4byte _080768F0
	.4byte _080767A8
	.4byte _080767FC
	.4byte _080768F0
	.4byte _080768F0
	.4byte _0807681C
	.4byte _080768F0
	.4byte _080767A8
	.4byte _08076890
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080768F0
	.4byte _080767A8
	.4byte _080767A8
	.4byte _080768F0
	.4byte _080767A8
	.4byte _080767A8
	.4byte _080767A8
	.4byte _080768F0
	.4byte _08076848
	.4byte _080768F0
	.4byte _080767A8
	.4byte _080767A8
	.4byte _08076864
_080767A8:
	ldr r0, _080767C0  @ =gRam
	ldr r2, _080767C4  @ =0x000016C4
	add r0, r0, r2
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080767BC
	b _080768F0
_080767BC:
	add r4, r4, #1
	b _080768F0
_080767C0:
	.4byte gRam
_080767C4:
	.4byte 0x000016C4
_080767C8:
	ldr r3, _080767F4  @ =gRam
	ldr r1, _080767F8  @ =0x000016C4
	add r0, r3, r1
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080767BC
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrh r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080767EE
	b _080768F0
_080767EE:
	add r4, r4, #2
	b _080768F0
	.byte 0x00
	.byte 0x00
_080767F4:
	.4byte gRam
_080767F8:
	.4byte 0x000016C4
_080767FC:
	ldr r0, _08076814  @ =gRam
	ldr r2, _08076818  @ =0x0000165A
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, #86
	beq _080767BC
	cmp r0, #88
	beq _080767EE
	cmp r0, #117
	bne _080768F0
_08076810:
	add r4, r4, #3
	b _080768F0
_08076814:
	.4byte gRam
_08076818:
	.4byte 0x0000165A
_0807681C:
	ldr r2, _0807683C  @ =gRam
	ldr r3, _08076840  @ =0x000016C4
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080768F0
	add r4, r4, #1
	ldr r1, _08076844  @ =0x0000165A
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #69
	bne _080768F0
	b _080767BC
_0807683C:
	.4byte gRam
_08076840:
	.4byte 0x000016C4
_08076844:
	.4byte 0x0000165A
_08076848:
	ldr r0, _0807685C  @ =gRam
	ldr r2, _08076860  @ =0x0000165A
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, #53
	beq _080767BC
	cmp r0, #81
	bne _080768F0
	b _080767EE
	.byte 0x00
	.byte 0x00
_0807685C:
	.4byte gRam
_08076860:
	.4byte 0x0000165A
_08076864:
	ldr r2, _08076884  @ =gRam
	ldr r3, _08076888  @ =0x000016C4
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080767EE
	ldr r1, _0807688C  @ =0x0000165A
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #107
	bne _080768F0
	b _080767BC
	.byte 0x00
	.byte 0x00
_08076884:
	.4byte gRam
_08076888:
	.4byte 0x000016C4
_0807688C:
	.4byte 0x0000165A
_08076890:
	ldr r2, _080768C4  @ =gRam
	ldr r3, _080768C8  @ =0x000016C4
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080768F0
	add r4, r4, #1
	ldr r1, _080768CC  @ =0x0000165A
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #110
	beq _080768E0
	cmp r0, #110
	bgt _080768D6
	cmp r0, #58
	beq _080767EE
	cmp r0, #58
	bgt _080768D0
	cmp r0, #52
	bne _080768C0
	b _080767BC
_080768C0:
	b _080768F0
	.byte 0x00
	.byte 0x00
_080768C4:
	.4byte gRam
_080768C8:
	.4byte 0x000016C4
_080768CC:
	.4byte 0x0000165A
_080768D0:
	cmp r0, #67
	beq _08076810
	b _080768F0
_080768D6:
	cmp r0, #112
	beq _080768E4
	cmp r0, #119
	beq _080768E8
	b _080768F0
_080768E0:
	add r4, r4, #4
	b _080768F0
_080768E4:
	add r4, r4, #5
	b _080768F0
_080768E8:
	add r4, r4, #6
	b _080768F0
_080768EC:
	add r4, r4, #1
	b _080766C6
_080768F0:
	add r0, r4, #0
	bl sub_080764F8
	cmp r4, #81
	beq _080768FE
	cmp r4, #85
	bne _08076910
_080768FE:
	ldr r2, _08076908  @ =gRam
	ldr r3, _0807690C  @ =0x000016D5
	add r1, r2, r3
	mov r0, #0
	b _08076930
_08076908:
	.4byte gRam
_0807690C:
	.4byte 0x000016D5
_08076910:
	cmp r4, #83
	bne _08076928
	ldr r2, _08076920  @ =gRam
	ldr r0, _08076924  @ =0x000016D5
	add r1, r2, r0
	mov r0, #4
	b _08076930
	.byte 0x00
	.byte 0x00
_08076920:
	.4byte gRam
_08076924:
	.4byte 0x000016D5
_08076928:
	ldr r2, _0807694C  @ =gRam
	ldr r3, _08076950  @ =0x000016D5
	add r1, r2, r3
	mov r0, #2
_08076930:
	strb r0, [r1]
	add r5, r2, #0
	ldr r1, _08076954  @ =0x00000C08
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08076958
	mov r2, #182
	lsl r2, r2, #5
	add r1, r5, r2
	ldrh r0, [r1]
	sub r0, r0, #16
	b _080769EE
	.byte 0x00
	.byte 0x00
_0807694C:
	.4byte gRam
_08076950:
	.4byte 0x000016D5
_08076954:
	.4byte 0x00000C08
_08076958:
	ldr r3, _08076970  @ =0x00000C0A
	add r0, r5, r3
	ldrh r4, [r0]
	cmp r4, #0
	beq _08076974
	mov r0, #182
	lsl r0, r0, #5
	add r1, r5, r0
	ldrh r0, [r1]
	sub r0, r0, #40
	b _080769EE
	.byte 0x00
	.byte 0x00
_08076970:
	.4byte 0x00000C0A
_08076974:
	ldr r1, _080769AC  @ =0x000009DA
	add r0, r5, r1
	ldrh r1, [r0]
	cmp r1, #32
	beq _080769F0
	ldr r0, _080769B0  @ =0x0000017F
	cmp r1, r0
	bhi _080769F0
	sub r0, r0, #124
	cmp r1, r0
	bne _080769BC
	mov r3, #182
	lsl r3, r3, #5
	add r2, r5, r3
	ldrh r3, [r2]
	mov r0, #0
	ldrsh r1, [r2, r0]
	ldr r0, _080769B4  @ =0x00000909
	cmp r1, r0
	bne _080769BC
	ldr r1, _080769B8  @ =0x000016D5
	add r0, r5, r1
	strb r4, [r0]
	add r0, r3, #0
	add r0, r0, #12
	strh r0, [r2]
	b _080769F0
	.byte 0x00
	.byte 0x00
_080769AC:
	.4byte 0x000009DA
_080769B0:
	.4byte 0x0000017F
_080769B4:
	.4byte 0x00000909
_080769B8:
	.4byte 0x000016D5
_080769BC:
	ldr r2, _080769DC  @ =0x000009DA
	add r0, r5, r2
	ldrh r1, [r0]
	ldr r0, _080769E0  @ =0x00000123
	cmp r1, r0
	bhi _080769F0
	cmp r1, #44
	beq _080769E4
	cmp r1, #60
	beq _080769E4
	mov r3, #182
	lsl r3, r3, #5
	add r1, r5, r3
	ldrh r0, [r1]
	sub r0, r0, #16
	b _080769EE
_080769DC:
	.4byte 0x000009DA
_080769E0:
	.4byte 0x00000123
_080769E4:
	mov r0, #182
	lsl r0, r0, #5
	add r1, r5, r0
	ldrh r0, [r1]
	sub r0, r0, #8
_080769EE:
	strh r0, [r1]
_080769F0:
	ldr r1, _08076A24  @ =0x000016D5
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r2, _08076A28  @ =0x000016CC
	add r1, r5, r2
	mov r2, #0
	strb r0, [r1]
	ldr r3, _08076A2C  @ =0x00000B94
	add r0, r5, r3
	strh r2, [r0]
	ldr r1, _08076A30  @ =0x00000B96
	add r0, r5, r1
	mov r1, #128
	lsl r1, r1, #1
	strh r1, [r0]
	add r3, r3, #4
	add r0, r5, r3
	strh r2, [r0]
	ldr r2, _08076A34  @ =0x00000B9A
	add r0, r5, r2
	strh r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08076A24:
	.4byte 0x000016D5
_08076A28:
	.4byte 0x000016CC
_08076A2C:
	.4byte 0x00000B94
_08076A30:
	.4byte 0x00000B96
_08076A34:
	.4byte 0x00000B9A
	THUMB_FUNC_END sub_08076694

