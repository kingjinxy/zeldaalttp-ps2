	THUMB_FUNC_START sub_080975B4
sub_080975B4: @ 0x080975B4
	push {r4-r7,lr}
	ldr r0, _0809762C  @ =gRam
	ldr r2, _08097630  @ =0x000009AD
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #2
	bne _080975CE
	ldr r3, _08097634  @ =0x000009AC
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #14
	beq _080975D8
_080975CE:
	ldr r1, _08097638  @ =0x00000DA7
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809764C
_080975D8:
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #44
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _0809763C  @ =0x000016C4
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _08097640  @ =0x00000961
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #44
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08097644  @ =0x000016C1
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08097648  @ =0x000016C5
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	bl sub_08097548
	b _08097874
	.byte 0x00
	.byte 0x00
_0809762C:
	.4byte gRam
_08097630:
	.4byte 0x000009AD
_08097634:
	.4byte 0x000009AC
_08097638:
	.4byte 0x00000DA7
_0809763C:
	.4byte 0x000016C4
_08097640:
	.4byte 0x00000961
_08097644:
	.4byte 0x000016C1
_08097648:
	.4byte 0x000016C5
_0809764C:
	ldr r1, _08097670  @ =0x00001718
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #4
	beq _0809766A
	ldr r2, _08097674  @ =0x000017DA
	add r0, r4, r2
	ldrb r1, [r0]
	cmp r1, #0
	beq _08097688
	ldr r3, _08097678  @ =0x00001804
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _0809767C
_0809766A:
	bl sub_0809834C
	b _08097874
_08097670:
	.4byte 0x00001718
_08097674:
	.4byte 0x000017DA
_08097678:
	.4byte 0x00001804
_0809767C:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #24
	strb r0, [r1]
	b _08097702
_08097688:
	ldr r2, _080976A8  @ =0x00001804
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080976B4
	ldr r3, _080976AC  @ =0x00001712
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080976B0  @ =0x0000177F
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #15
	bhi _080976B4
	bl sub_080994C4
	b _08097874
_080976A8:
	.4byte 0x00001804
_080976AC:
	.4byte 0x00001712
_080976B0:
	.4byte 0x0000177F
_080976B4:
	mov r2, #189
	lsl r2, r2, #5
	add r1, r4, r2
	ldrh r0, [r1]
	ldrb r1, [r1]
	lsr r0, r0, #8
	cmp r0, #15
	bne _080976C6
	b _08097874
_080976C6:
	cmp r1, #0
	beq _080976CC
	b _08097874
_080976CC:
	ldr r3, _080976F4  @ =0x00001719
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r2, r4, r0
	strb r1, [r2]
	add r3, r3, #200
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08097702
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #16
	bne _080976F8
	mov r0, #22
	strb r0, [r2]
	b _08097702
	.byte 0x00
	.byte 0x00
_080976F4:
	.4byte 0x00001719
_080976F8:
	mov r5, #12
	cmp r0, #12
	bne _08097700
	mov r5, #14
_08097700:
	strb r5, [r2]
_08097702:
	ldr r1, _0809776C  @ =0x000016CD
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08097770  @ =0x000016CE
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08097774  @ =0x00001728
	add r0, r4, r3
	strb r1, [r0]
	add r2, r2, #91
	add r0, r4, r2
	strb r1, [r0]
	mov r5, #0
	sub r3, r3, #1
	add r0, r4, r3
	ldrb r2, [r0]
	mov r0, #12
	and r0, r0, r2
	cmp r0, #0
	beq _08097736
	mov r1, #3
	and r1, r1, r2
	neg r0, r1
	orr r0, r0, r1
	lsr r5, r0, #31
_08097736:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r5, r0
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _08097778  @ =0x00001716
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08097788
	cmp r0, #3
	bne _080977CE
	ldr r0, _0809777C  @ =0x00001712
	add r3, r4, r0
	ldrb r2, [r3]
	add r0, r2, #0
	sub r0, r0, #48
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08097780
	mov r0, #32
	strb r0, [r3]
	b _080977CE
	.byte 0x00
	.byte 0x00
_0809776C:
	.4byte 0x000016CD
_08097770:
	.4byte 0x000016CE
_08097774:
	.4byte 0x00001728
_08097778:
	.4byte 0x00001716
_0809777C:
	.4byte 0x00001712
_08097780:
	add r0, r2, #0
	add r0, r0, #8
	strb r0, [r3]
	b _080977CE
_08097788:
	ldr r1, _080977BC  @ =0x00001712
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080977CE
	mov r5, #10
	ldr r2, _080977C0  @ =0x000009AD
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #8
	beq _080977A4
	cmp r0, #17
	beq _080977A4
	mov r5, #2
_080977A4:
	ldr r3, _080977BC  @ =0x00001712
	add r2, r4, r3
	ldrb r0, [r2]
	add r1, r0, #0
	cmp r1, #1
	beq _080977CE
	cmp r1, #15
	bhi _080977C4
	add r0, r0, #1
	strb r0, [r2]
	mov r1, #0
	b _080977D4
_080977BC:
	.4byte 0x00001712
_080977C0:
	.4byte 0x000009AD
_080977C4:
	mov r1, #0
	strb r1, [r2]
	ldr r2, _0809787C  @ =0x00001719
	add r0, r4, r2
	strb r1, [r0]
_080977CE:
	ldr r0, _08097880  @ =gUnknown_08167DEA
	add r0, r5, r0
	ldrb r1, [r0]
_080977D4:
	ldr r3, _08097884  @ =0x00001712
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r1, r0
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _08097888  @ =0x00000974
	add r3, r4, r0
	strb r1, [r3]
	ldr r2, _0809788C  @ =0x00000975
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _08097890  @ =0x00000978
	add r2, r4, r0
	mov r0, #3
	strb r0, [r2]
	ldr r0, _08097894  @ =0x00000979
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	mov r5, #1
	ldr r0, _08097898  @ =0x00001727
	add r0, r0, r4
	mov r12, r0
	add r6, r2, #0
	add r2, r1, #0
	ldr r1, _0809789C  @ =0x000016CD
	add r7, r4, r1
_0809780C:
	mov r0, r12
	ldrb r1, [r0]
	mov r0, #0
	ldrsb r0, [r6, r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08097836
	mov r0, #0
	ldrsb r0, [r2, r0]
	and r1, r1, r0
	cmp r1, #0
	beq _0809782E
	add r1, r5, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	strb r0, [r1]
_0809782E:
	add r0, r5, r7
	add r1, r5, r3
	ldrb r1, [r1]
	strb r1, [r0]
_08097836:
	ldrb r0, [r6]
	lsl r0, r0, #2
	strb r0, [r6]
	ldrb r0, [r2]
	lsl r0, r0, #2
	strb r0, [r2]
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r0, #0
	bge _0809780C
	ldr r2, _080978A0  @ =0x000016CF
	add r1, r4, r2
	mov r0, #255
	strb r0, [r1]
	ldr r3, _080978A4  @ =0x000016C8
	add r1, r4, r3
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080978A8  @ =0x000016C9
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	add r2, r2, #3
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	bl sub_080978AC
_08097874:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809787C:
	.4byte 0x00001719
_08097880:
	.4byte gUnknown_08167DEA
_08097884:
	.4byte 0x00001712
_08097888:
	.4byte 0x00000974
_0809788C:
	.4byte 0x00000975
_08097890:
	.4byte 0x00000978
_08097894:
	.4byte 0x00000979
_08097898:
	.4byte 0x00001727
_0809789C:
	.4byte 0x000016CD
_080978A0:
	.4byte 0x000016CF
_080978A4:
	.4byte 0x000016C8
_080978A8:
	.4byte 0x000016C9
	THUMB_FUNC_END sub_080975B4

