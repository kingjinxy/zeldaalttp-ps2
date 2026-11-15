	THUMB_FUNC_START sub_080895D4
sub_080895D4: @ 0x080895D4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r1, _08089758  @ =gRam
	ldr r2, _0808975C  @ =0x00000ACA
	add r0, r1, r2
	ldrh r2, [r0]
	mov r5, #3
	and r5, r5, r2
	add r4, r1, #0
	cmp r5, #0
	beq _080895F0
	b _080897FE
_080895F0:
	mov r0, #12
	and r0, r0, r2
	lsr r2, r0, #2
	ldr r7, _08089760  @ =0x00000BF6
	add r6, r4, r7
	ldr r1, _08089764  @ =0x00000BFA
	add r0, r4, r1
	ldrh r3, [r6]
	ldrh r0, [r0]
	cmp r3, r0
	beq _08089608
	b _080897E8
_08089608:
	ldr r2, _08089768  @ =0x000009D3
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	ldr r7, _0808976C  @ =0x000009D4
	add r1, r4, r7
	mov r0, #98
	strb r0, [r1]
	ldr r1, _08089770  @ =0x000009B5
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08089774  @ =0x00000B14
	add r0, r4, r2
	strh r5, [r0]
	ldr r7, _08089778  @ =0x00000AE8
	add r2, r4, r7
	ldrh r0, [r2]
	cmp r0, #0
	beq _080896CE
	mov r5, #0
	mov r0, #2
	mov r8, r0
	mov r1, #0
	mov r6, #1
	mov r3, #29
	ldr r7, _0808977C  @ =0x00000C2A
	add r4, r4, r7
	mov r12, r2
_08089640:
	ldrh r2, [r4]
	ldr r7, _08089780  @ =gUnknown_0200CBA0
	add r0, r2, r7
	mov r7, r8
	strb r7, [r0]
	ldr r7, _08089784  @ =gUnknown_0200CBA1
	add r0, r2, r7
	strb r1, [r0]
	ldr r7, _08089788  @ =gUnknown_0200DC60
	add r0, r2, r7
	mov r7, r8
	strb r7, [r0]
	ldr r7, _0808978C  @ =gUnknown_0200DC61
	add r0, r2, r7
	strb r1, [r0]
	ldr r7, _08089790  @ =gUnknown_0200CBA2
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	mov r7, r8
	strb r7, [r0]
	ldr r7, _08089794  @ =gUnknown_0200DC62
	add r0, r2, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r2, r7
	mov r7, r8
	strb r7, [r0]
	ldr r7, _08089798  @ =gUnknown_0200CBE0
	add r0, r2, r7
	strb r6, [r0]
	ldr r7, _0808979C  @ =gUnknown_0200DC20
	add r0, r2, r7
	strb r6, [r0]
	ldr r7, _080897A0  @ =gUnknown_0200CBE3
	add r0, r2, r7
	strb r6, [r0]
	ldr r7, _080897A4  @ =gUnknown_0200DC23
	add r0, r2, r7
	strb r6, [r0]
	ldr r7, _080897A8  @ =gUnknown_0200CBE1
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r3, [r0]
	ldr r7, _080897AC  @ =gUnknown_0200DBE1
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r3, [r0]
	ldr r7, _080897B0  @ =gUnknown_0200CC21
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r3, [r0]
	ldr r7, _080897B4  @ =gUnknown_0200DC21
	add r0, r2, r7
	strb r3, [r0]
	add r7, r7, #1
	add r0, r2, r7
	strb r3, [r0]
	add r4, r4, #2
	add r5, r5, #1
	mov r0, r12
	ldrh r0, [r0]
	cmp r5, r0
	bne _08089640
_080896CE:
	ldr r2, _08089758  @ =gRam
	ldr r1, _080897B8  @ =0x00000B56
	add r3, r2, r1
	ldrh r0, [r3]
	cmp r0, #0
	beq _080896FE
	mov r5, #0
	mov r7, #150
	lsl r7, r7, #4
	add r1, r2, r7
	ldr r0, _080897BC  @ =0x00003D3D
	strh r0, [r1]
	add r6, r3, #0
	ldr r0, _080897C0  @ =0x00000C62
	add r4, r2, r0
_080896EC:
	ldrh r2, [r4]
	add r0, r2, #0
	bl sub_08081B28
	add r4, r4, #2
	add r5, r5, #1
	ldrh r1, [r6]
	cmp r5, r1
	bne _080896EC
_080896FE:
	ldr r4, _08089758  @ =gRam
	ldr r2, _080897C4  @ =0x000009AD
	add r0, r4, r2
	mov r2, #0
	strb r2, [r0]
	ldr r7, _080897C8  @ =0x000009E8
	add r0, r4, r7
	mov r6, #0
	strh r2, [r0]
	ldr r0, _080897CC  @ =0x0000051A
	add r1, r4, r0
	mov r0, #63
	strh r0, [r1]
	ldr r1, _080897D0  @ =0x0000051C
	add r0, r4, r1
	strh r2, [r0]
	bl sub_0808B130
	ldr r2, _080897D4  @ =0x00000504
	add r1, r4, r2
	mov r0, #123
	bl sub_0812A324
	mov r1, sp
	mov r7, #246
	lsl r7, r7, #1
	add r0, r7, #0
	strh r0, [r1]
	ldr r5, _080897D8  @ =gUnknown_0201A000
	ldr r2, _080897DC  @ =0x01001000
	mov r0, sp
	add r1, r5, #0
	bl CpuSet
	ldr r1, _080897E0  @ =0x0600A000
	mov r2, #128
	lsl r2, r2, #4
	add r0, r5, #0
	bl CpuFastSet
	ldr r0, _080897E4  @ =0x00001812
	add r4, r4, r0
	strb r6, [r4]
	b _0808980C
	.byte 0x00
	.byte 0x00
_08089758:
	.4byte gRam
_0808975C:
	.4byte 0x00000ACA
_08089760:
	.4byte 0x00000BF6
_08089764:
	.4byte 0x00000BFA
_08089768:
	.4byte 0x000009D3
_0808976C:
	.4byte 0x000009D4
_08089770:
	.4byte 0x000009B5
_08089774:
	.4byte 0x00000B14
_08089778:
	.4byte 0x00000AE8
_0808977C:
	.4byte 0x00000C2A
_08089780:
	.4byte gUnknown_0200CBA0
_08089784:
	.4byte gUnknown_0200CBA1
_08089788:
	.4byte gUnknown_0200DC60
_0808978C:
	.4byte gUnknown_0200DC61
_08089790:
	.4byte gUnknown_0200CBA2
_08089794:
	.4byte gUnknown_0200DC62
_08089798:
	.4byte gUnknown_0200CBE0
_0808979C:
	.4byte gUnknown_0200DC20
_080897A0:
	.4byte gUnknown_0200CBE3
_080897A4:
	.4byte gUnknown_0200DC23
_080897A8:
	.4byte gUnknown_0200CBE1
_080897AC:
	.4byte gUnknown_0200DBE1
_080897B0:
	.4byte gUnknown_0200CC21
_080897B4:
	.4byte gUnknown_0200DC21
_080897B8:
	.4byte 0x00000B56
_080897BC:
	.4byte 0x00003D3D
_080897C0:
	.4byte 0x00000C62
_080897C4:
	.4byte 0x000009AD
_080897C8:
	.4byte 0x000009E8
_080897CC:
	.4byte 0x0000051A
_080897D0:
	.4byte 0x0000051C
_080897D4:
	.4byte 0x00000504
_080897D8:
	.4byte gUnknown_0201A000
_080897DC:
	.4byte 0x01001000
_080897E0:
	.4byte 0x0600A000
_080897E4:
	.4byte 0x00001812
_080897E8:
	ldr r1, _08089818  @ =gUnknown_081535D4
	lsl r0, r2, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r1, r3, r0
	strh r1, [r6]
	ldr r2, _0808981C  @ =0x00000BF8
	add r1, r4, r2
	ldrh r7, [r1]
	add r0, r0, r7
	strh r0, [r1]
_080897FE:
	ldr r0, _08089820  @ =0x00000ACA
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_0808B158
_0808980C:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08089818:
	.4byte gUnknown_081535D4
_0808981C:
	.4byte 0x00000BF8
_08089820:
	.4byte 0x00000ACA
	THUMB_FUNC_END sub_080895D4

