	THUMB_FUNC_START sub_0811571C
sub_0811571C: @ 0x0811571C
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	ldr r2, _0811576C  @ =gRam
	ldr r4, _08115770  @ =0x00000968
	add r3, r2, r4
	lsr r1, r1, #24
	ldrb r5, [r3]
	add r1, r1, r5
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r1, r0
	strb r0, [r3]
	ldr r6, _08115774  @ =0x000015F7
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r5, r0, #24
	mov r7, #182
	lsl r7, r7, #5
	add r0, r2, r7
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	mov r4, #0
	ldrsh r3, [r0, r4]
	mov r6, #0
	ldrsh r0, [r1, r6]
	add r4, r2, #0
	cmp r3, r0
	beq _08115778
	cmp r3, r0
	bge _08115794
	b _08115786
	.byte 0x00
	.byte 0x00
_0811576C:
	.4byte gRam
_08115770:
	.4byte 0x00000968
_08115774:
	.4byte 0x000015F7
_08115778:
	ldr r7, _0811578C  @ =0x00000969
	add r0, r4, r7
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08115794
_08115786:
	ldr r0, _08115790  @ =gUnknown_0817EC32
	b _08115796
	.byte 0x00
	.byte 0x00
_0811578C:
	.4byte 0x00000969
_08115790:
	.4byte gUnknown_0817EC32
_08115794:
	ldr r0, _08115810  @ =gUnknown_0817EC36
_08115796:
	add r0, r5, r0
	ldrh r0, [r0]
	lsr r0, r0, #2
	mov r9, r0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldr r2, _08115814  @ =0x00000958
	add r1, r4, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r3, _08115818  @ =0x0000096C
	add r1, r4, r3
	strh r0, [r1]
	ldr r5, _0811581C  @ =0x00000964
	add r0, r4, r5
	ldr r6, _08115820  @ =0x00000952
	add r1, r4, r6
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r7, #151
	lsl r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	mov r7, #0
	ldr r1, _08115824  @ =0x00001663
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _081157E8
	cmp r0, #6
	beq _081157E8
	add r2, r2, #17
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _08115830
_081157E8:
	ldr r3, _08115828  @ =0x00000969
	add r0, r4, r3
	mov r1, #0
	ldrsb r1, [r0, r1]
	mov r0, #192
	and r0, r0, r1
	cmp r0, #0
	beq _081158CC
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	bne _08115830
	mov r7, #12
	ldr r5, _0811582C  @ =0x00001732
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _08115830
	mov r1, #0
	b _08115850
_08115810:
	.4byte gUnknown_0817EC36
_08115814:
	.4byte 0x00000958
_08115818:
	.4byte 0x0000096C
_0811581C:
	.4byte 0x00000964
_08115820:
	.4byte 0x00000952
_08115824:
	.4byte 0x00001663
_08115828:
	.4byte 0x00000969
_0811582C:
	.4byte 0x00001732
_08115830:
	ldr r6, _081158E4  @ =0x00000996
	add r0, r4, r6
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08115856
	ldr r1, _081158E8  @ =0x0000175C
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #3
	bl __modsi3
	lsl r0, r0, #24
	lsr r1, r0, #24
_08115850:
	ldr r2, _081158E8  @ =0x0000175C
	add r0, r4, r2
	strb r1, [r0]
_08115856:
	ldr r1, _081158EC  @ =gRam
	ldr r3, _081158E8  @ =0x0000175C
	add r0, r1, r3
	ldrb r3, [r0]
	lsl r3, r3, #2
	add r3, r7, r3
	lsl r3, r3, #24
	lsr r7, r3, #24
	ldr r4, _081158F0  @ =0x0000096C
	add r0, r1, r4
	ldrh r0, [r0]
	add r0, r0, #16
	mov r6, #150
	lsl r6, r6, #4
	add r5, r1, r6
	mov r2, #0
	mov r4, #0
	mov r8, r4
	strh r0, [r5]
	add r6, r6, #16
	add r0, r1, r6
	ldrh r0, [r0]
	sub r6, r6, #12
	add r4, r1, r6
	strh r0, [r4]
	ldr r6, _081158F4  @ =0x00001734
	add r0, r1, r6
	strb r2, [r0]
	ldr r0, _081158F8  @ =0x00001735
	add r1, r1, r0
	strb r2, [r1]
	ldrh r1, [r4]
	ldrh r2, [r5]
	ldr r6, _081158FC  @ =gUnknown_0817EC1A
	lsr r3, r3, #25
	lsl r3, r3, #1
	add r3, r3, r6
	ldrh r3, [r3]
	mov r0, r8
	str r0, [sp]
	mov r0, r9
	bl sub_080C63E4
	ldrh r0, [r4]
	add r0, r0, #8
	strh r0, [r4]
	mov r0, r9
	add r0, r0, #1
	ldrh r1, [r4]
	ldrh r2, [r5]
	add r3, r7, #2
	asr r3, r3, #1
	lsl r3, r3, #1
	add r3, r3, r6
	ldrh r3, [r3]
	mov r4, r8
	str r4, [sp]
	bl sub_080C63E4
_081158CC:
	ldr r2, _08115900  @ =gUnknown_0817EC3A
	ldr r1, _081158EC  @ =gRam
	ldr r5, _08115904  @ =0x00001663
	add r0, r1, r5
	ldrb r0, [r0]
	add r2, r0, r2
	ldrb r0, [r2]
	add r4, r1, #0
	cmp r0, #7
	beq _08115908
	add r1, r0, #0
	b _08115916
_081158E4:
	.4byte 0x00000996
_081158E8:
	.4byte 0x0000175C
_081158EC:
	.4byte gRam
_081158F0:
	.4byte 0x0000096C
_081158F4:
	.4byte 0x00001734
_081158F8:
	.4byte 0x00001735
_081158FC:
	.4byte gUnknown_0817EC1A
_08115900:
	.4byte gUnknown_0817EC3A
_08115904:
	.4byte 0x00001663
_08115908:
	ldr r6, _08115A98  @ =0x00000CB2
	add r0, r4, r6
	ldrh r0, [r0]
	mov r1, #0
	cmp r0, #0
	bne _08115916
	ldrb r1, [r2]
_08115916:
	lsl r0, r1, #1
	ldr r7, _08115A9C  @ =0x00001732
	add r3, r4, r7
	strb r0, [r3]
	ldr r0, _08115AA0  @ =0x00001663
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #13
	bne _08115946
	ldr r1, _08115AA4  @ =0x00000B5C
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bne _08115940
	ldr r5, _08115AA8  @ =0x00000996
	add r0, r4, r5
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	lsl r0, r0, #1
	strb r0, [r3]
_08115940:
	ldrb r0, [r2]
	cmp r0, #13
	beq _081159DC
_08115946:
	ldr r6, _08115AAC  @ =gRam
	ldr r7, _08115AA0  @ =0x00001663
	add r0, r6, r7
	ldrb r0, [r0]
	cmp r0, #12
	beq _081159DC
	ldr r1, _08115AB0  @ =0x00000968
	add r4, r6, r1
	lsl r0, r0, #25
	ldr r1, _08115AB4  @ =gUnknown_0817EBFE
	lsr r0, r0, #24
	add r0, r0, r1
	ldrh r7, [r0]
	ldr r2, _08115AB8  @ =0x0000096C
	add r1, r6, r2
	ldr r2, _08115ABC  @ =gUnknown_0817EA3E
	lsr r0, r7, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	mov r5, #150
	lsl r5, r5, #4
	add r3, r6, r5
	strh r0, [r3]
	mov r0, #151
	lsl r0, r0, #4
	add r1, r6, r0
	add r0, r7, #2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r1, _08115AC0  @ =0x00000964
	add r2, r6, r1
	strh r0, [r2]
	ldr r5, _08115AC4  @ =gUnknown_0817EA0E
	ldrb r1, [r4]
	lsl r0, r1, #1
	add r0, r0, r1
	add r0, r0, r5
	ldrb r1, [r0]
	ldr r7, _08115AC8  @ =0x00000CDE
	add r0, r6, r7
	strh r1, [r0]
	mov r0, r9
	add r0, r0, #2
	ldrh r1, [r2]
	ldrh r2, [r3]
	ldrb r4, [r4]
	lsl r3, r4, #1
	add r3, r3, r4
	add r3, r3, #2
	add r3, r3, r5
	ldrb r4, [r3]
	mov r3, #240
	and r3, r3, r4
	ldr r5, _08115A9C  @ =0x00001732
	add r4, r6, r5
	ldrb r4, [r4]
	orr r3, r3, r4
	ldr r7, _08115ACC  @ =0x00001724
	add r4, r6, r7
	ldrb r4, [r4]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #64
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C63E4
_081159DC:
	ldr r5, _08115AAC  @ =gRam
	ldr r0, _08115AB0  @ =0x00000968
	add r6, r5, r0
	ldr r1, _08115AA0  @ =0x00001663
	add r1, r1, r5
	mov r8, r1
	ldrb r0, [r1]
	lsl r0, r0, #25
	ldr r1, _08115AB4  @ =gUnknown_0817EBFE
	lsr r0, r0, #24
	add r0, r0, r1
	ldrh r7, [r0]
	ldr r2, _08115AB8  @ =0x0000096C
	add r1, r5, r2
	ldr r2, _08115ABC  @ =gUnknown_0817EA3E
	add r0, r7, #4
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	add r0, r0, #8
	mov r4, #150
	lsl r4, r4, #4
	add r3, r5, r4
	strh r0, [r3]
	mov r0, #151
	lsl r0, r0, #4
	add r1, r5, r0
	add r0, r7, #6
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r1, _08115AC0  @ =0x00000964
	add r2, r5, r1
	strh r0, [r2]
	ldr r4, _08115AC4  @ =gUnknown_0817EA0E
	ldrb r1, [r6]
	lsl r0, r1, #1
	add r0, r0, r1
	add r0, r0, #1
	add r0, r0, r4
	ldrb r1, [r0]
	mov r7, #206
	lsl r7, r7, #4
	add r0, r5, r7
	strh r1, [r0]
	mov r7, r9
	add r7, r7, #3
	ldrh r1, [r2]
	ldrh r2, [r3]
	ldrb r3, [r6]
	lsl r0, r3, #1
	add r0, r0, r3
	add r0, r0, #2
	add r0, r0, r4
	ldrb r3, [r0]
	mov r0, #15
	and r0, r0, r3
	lsl r0, r0, #4
	ldr r4, _08115A9C  @ =0x00001732
	add r3, r5, r4
	ldrb r4, [r3]
	orr r4, r4, r0
	ldr r6, _08115ACC  @ =0x00001724
	add r5, r5, r6
	ldrb r3, [r5]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r0, #66
	orr r3, r3, r0
	mov r0, #2
	str r0, [sp]
	add r0, r7, #0
	bl sub_080C63E4
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #13
	bne _08115A8A
	add r0, r7, #0
	bl sub_08115AD0
_08115A8A:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08115A98:
	.4byte 0x00000CB2
_08115A9C:
	.4byte 0x00001732
_08115AA0:
	.4byte 0x00001663
_08115AA4:
	.4byte 0x00000B5C
_08115AA8:
	.4byte 0x00000996
_08115AAC:
	.4byte gRam
_08115AB0:
	.4byte 0x00000968
_08115AB4:
	.4byte gUnknown_0817EBFE
_08115AB8:
	.4byte 0x0000096C
_08115ABC:
	.4byte gUnknown_0817EA3E
_08115AC0:
	.4byte 0x00000964
_08115AC4:
	.4byte gUnknown_0817EA0E
_08115AC8:
	.4byte 0x00000CDE
_08115ACC:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0811571C

