	THUMB_FUNC_START sub_080B4654
sub_080B4654: @ 0x080B4654
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	add r4, r0, #0
	ldr r1, _080B46F8  @ =gRam
	ldr r0, _080B46FC  @ =0x00000964
	add r2, r1, r0
	mov r0, #0
	strh r0, [r2]
	ldr r3, _080B4700  @ =0x00000AB2
	add r0, r1, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	ldr r5, _080B4704  @ =gUnknown_081676B2
	mov r10, r5
	add r7, r1, #0
	ldr r1, _080B4708  @ =0x0000097C
	add r1, r1, r7
	mov r12, r1
	lsl r6, r0, #1
	lsl r0, r0, #2
	str r0, [sp]
	ldr r2, _080B470C  @ =0x00000978
	mov r9, r2
_080B468A:
	mov r5, #0
	mov r3, r12
	strh r5, [r3]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r7, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	lsl r0, r0, #1
	ldr r3, _080B4710  @ =gUnknown_0816EFF6
	add r0, r0, r3
	ldrh r0, [r0]
	ldr r5, _080B4714  @ =gUnknown_03002B94
	ldrh r5, [r5]
	add r0, r0, r5
	ldr r1, _080B4718  @ =gUnknown_03002B98
	strh r0, [r1]
	ldr r2, _080B471C  @ =gUnknown_0816F702
	add r0, r6, r2
	ldrb r1, [r0]
	ldr r3, _080B4720  @ =0x00000A5C
	add r2, r7, r3
	mov r0, #15
	and r0, r0, r1
	ldrb r2, [r2]
	add r0, r0, r2
	lsl r1, r0, #1
	mov r5, r12
	strb r1, [r5]
	ldr r2, [sp]
	ldr r3, _080B4724  @ =gUnknown_0816FCF4
	add r1, r2, r3
	ldr r2, [r1]
	lsl r0, r0, #25
	asr r0, r0, #24
	ldr r5, _080B4728  @ =gUnknown_0816FCE2
	add r0, r0, r5
	ldr r3, _080B4718  @ =gUnknown_03002B98
	mov r5, #0
	ldrsh r1, [r3, r5]
	ldrh r0, [r0]
	add r5, r1, r0
	add r0, r2, r5
	ldrb r1, [r0]
	str r1, [sp, #8]
	cmp r1, #15
	bne _080B472C
	mov r5, #162
	lsl r5, r5, #1
	lsl r0, r4, #1
	mov r8, r0
	add r4, r4, #2
	str r4, [sp, #4]
	b _080B478E
	.byte 0x00
	.byte 0x00
_080B46F8:
	.4byte gRam
_080B46FC:
	.4byte 0x00000964
_080B4700:
	.4byte 0x00000AB2
_080B4704:
	.4byte gUnknown_081676B2
_080B4708:
	.4byte 0x0000097C
_080B470C:
	.4byte 0x00000978
_080B4710:
	.4byte gUnknown_0816EFF6
_080B4714:
	.4byte gUnknown_03002B94
_080B4718:
	.4byte gUnknown_03002B98
_080B471C:
	.4byte gUnknown_0816F702
_080B4720:
	.4byte 0x00000A5C
_080B4724:
	.4byte gUnknown_0816FCF4
_080B4728:
	.4byte gUnknown_0816FCE2
_080B472C:
	ldr r3, _080B47CC  @ =gRam
	ldr r5, _080B47D0  @ =0x00000A04
	add r0, r3, r5
	strb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldr r1, _080B47D4  @ =gUnknown_02002000
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	mov r1, r12
	strh r0, [r1]
	mov r5, #0
	ldr r3, _080B47D8  @ =gUnknown_03002C32
	strb r5, [r3]
	mov r5, #0
	ldrb r0, [r2]
	ldr r1, _080B47DC  @ =gUnknown_0816FDE8
	lsl r3, r4, #1
	mov r8, r3
	add r4, r4, #2
	str r4, [sp, #4]
	cmp r0, #15
	beq _080B476C
	ldr r4, [sp, #8]
	cmp r0, r4
	beq _080B477E
_080B4764:
	ldr r3, _080B47D8  @ =gUnknown_03002C32
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
_080B476C:
	add r5, r5, #1
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #15
	beq _080B476C
	ldr r4, _080B47E0  @ =gUnknown_03002C34
	ldrb r4, [r4]
	cmp r0, r4
	bne _080B4764
_080B477E:
	ldr r5, [sp]
	add r0, r5, r1
	ldr r2, [r0]
	ldr r1, _080B47D8  @ =gUnknown_03002C32
	ldrb r0, [r1]
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r5, r0, #2
_080B478E:
	lsl r0, r5, #1
	ldr r2, _080B47E4  @ =gUnknown_0816F132
	add r0, r0, r2
	ldrh r4, [r0]
	mov r3, r9
	add r2, r7, r3
	strh r4, [r2]
	mov r1, #0
	ldrsh r3, [r0, r1]
	lsl r0, r4, #16
	asr r0, r0, #16
	mov r1, #136
	lsl r1, r1, #6
	cmp r0, r1
	beq _080B4810
	mov r0, r12
	ldrh r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	bne _080B4810
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r4
	cmp r0, #0
	bne _080B47E8
	mov r0, #128
	lsl r0, r0, #5
	strh r0, [r2]
	b _080B4816
	.byte 0x00
	.byte 0x00
_080B47CC:
	.4byte gRam
_080B47D0:
	.4byte 0x00000A04
_080B47D4:
	.4byte gUnknown_02002000
_080B47D8:
	.4byte gUnknown_03002C32
_080B47DC:
	.4byte gUnknown_0816FDE8
_080B47E0:
	.4byte gUnknown_03002C34
_080B47E4:
	.4byte gUnknown_0816F132
_080B47E8:
	ldr r0, _080B4808  @ =gDungeonMaps
	mov r2, r10
	add r1, r6, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _080B4810
	ldr r3, _080B480C  @ =0x00000FFF
	and r3, r3, r4
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	orr r3, r3, r0
	b _080B4854
	.byte 0x00
	.byte 0x00
_080B4808:
	.4byte gDungeonMaps
_080B480C:
	.4byte 0x00000FFF
_080B4810:
	mov r1, #0
	ldr r0, _080B4848  @ =gUnknown_03002BA8
	strh r1, [r0]
_080B4816:
	mov r2, r9
	add r4, r7, r2
	ldrh r0, [r4]
	add r0, r0, r3
	strh r0, [r4]
	ldr r0, _080B484C  @ =gDungeonMaps
	mov r3, r10
	add r1, r6, r3
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _080B4850
	mov r0, r12
	ldrh r1, [r0]
	mov r0, #8
	and r0, r0, r1
	mov r3, #136
	lsl r3, r3, #6
	cmp r0, #0
	beq _080B4854
	mov r1, #0
	ldrsh r3, [r4, r1]
	b _080B4854
	.byte 0x00
	.byte 0x00
_080B4848:
	.4byte gUnknown_03002BA8
_080B484C:
	.4byte gDungeonMaps
_080B4850:
	mov r2, #0
	ldrsh r3, [r4, r2]
_080B4854:
	ldr r0, _080B4898  @ =gUnknown_02004080
	add r0, r0, r8
	strh r3, [r0]
	add r0, r5, #1
	lsl r0, r0, #1
	ldr r3, _080B489C  @ =gUnknown_0816F132
	add r0, r0, r3
	ldrh r4, [r0]
	mov r1, r9
	add r2, r7, r1
	strh r4, [r2]
	mov r1, #0
	ldrsh r3, [r0, r1]
	lsl r0, r4, #16
	asr r0, r0, #16
	mov r1, #136
	lsl r1, r1, #6
	cmp r0, r1
	beq _080B48C8
	mov r0, r12
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _080B48C8
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r4
	cmp r0, #0
	bne _080B48A0
	mov r0, #128
	lsl r0, r0, #5
	strh r0, [r2]
	b _080B48CE
_080B4898:
	.4byte gUnknown_02004080
_080B489C:
	.4byte gUnknown_0816F132
_080B48A0:
	ldr r0, _080B48C0  @ =gDungeonMaps
	mov r2, r10
	add r1, r6, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _080B48C8
	ldr r3, _080B48C4  @ =0x00000FFF
	and r3, r3, r4
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	orr r3, r3, r0
	b _080B490C
	.byte 0x00
	.byte 0x00
_080B48C0:
	.4byte gDungeonMaps
_080B48C4:
	.4byte 0x00000FFF
_080B48C8:
	mov r1, #0
	ldr r0, _080B4900  @ =gUnknown_03002BA8
	strh r1, [r0]
_080B48CE:
	mov r2, r9
	add r4, r7, r2
	ldrh r0, [r4]
	add r0, r0, r3
	strh r0, [r4]
	ldr r0, _080B4904  @ =gDungeonMaps
	mov r3, r10
	add r1, r6, r3
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _080B4908
	mov r0, r12
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	mov r3, #136
	lsl r3, r3, #6
	cmp r0, #0
	beq _080B490C
	mov r1, #0
	ldrsh r3, [r4, r1]
	b _080B490C
	.byte 0x00
	.byte 0x00
_080B4900:
	.4byte gUnknown_03002BA8
_080B4904:
	.4byte gDungeonMaps
_080B4908:
	mov r2, #0
	ldrsh r3, [r4, r2]
_080B490C:
	ldr r0, _080B4950  @ =gUnknown_02004082
	add r0, r0, r8
	strh r3, [r0]
	add r0, r5, #2
	lsl r0, r0, #1
	ldr r3, _080B4954  @ =gUnknown_0816F132
	add r0, r0, r3
	ldrh r4, [r0]
	mov r1, r9
	add r2, r7, r1
	strh r4, [r2]
	mov r1, #0
	ldrsh r3, [r0, r1]
	lsl r0, r4, #16
	asr r0, r0, #16
	mov r1, #136
	lsl r1, r1, #6
	cmp r0, r1
	beq _080B4980
	mov r0, r12
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _080B4980
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r4
	cmp r0, #0
	bne _080B4958
	mov r0, #128
	lsl r0, r0, #5
	strh r0, [r2]
	b _080B4986
_080B4950:
	.4byte gUnknown_02004082
_080B4954:
	.4byte gUnknown_0816F132
_080B4958:
	ldr r0, _080B4978  @ =gDungeonMaps
	mov r2, r10
	add r1, r6, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _080B4980
	ldr r3, _080B497C  @ =0x00000FFF
	and r3, r3, r4
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	orr r3, r3, r0
	b _080B49C4
	.byte 0x00
	.byte 0x00
_080B4978:
	.4byte gDungeonMaps
_080B497C:
	.4byte 0x00000FFF
_080B4980:
	mov r1, #0
	ldr r0, _080B49B8  @ =gUnknown_03002BA8
	strh r1, [r0]
_080B4986:
	mov r2, r9
	add r4, r7, r2
	ldrh r0, [r4]
	add r0, r0, r3
	strh r0, [r4]
	ldr r0, _080B49BC  @ =gDungeonMaps
	mov r3, r10
	add r1, r6, r3
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _080B49C0
	mov r0, r12
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	mov r3, #136
	lsl r3, r3, #6
	cmp r0, #0
	beq _080B49C4
	mov r1, #0
	ldrsh r3, [r4, r1]
	b _080B49C4
	.byte 0x00
	.byte 0x00
_080B49B8:
	.4byte gUnknown_03002BA8
_080B49BC:
	.4byte gDungeonMaps
_080B49C0:
	mov r2, #0
	ldrsh r3, [r4, r2]
_080B49C4:
	ldr r0, _080B4A08  @ =gUnknown_020040C0
	add r0, r0, r8
	strh r3, [r0]
	add r0, r5, #3
	lsl r0, r0, #1
	ldr r3, _080B4A0C  @ =gUnknown_0816F132
	add r0, r0, r3
	ldrh r4, [r0]
	mov r5, r9
	add r2, r7, r5
	strh r4, [r2]
	mov r1, #0
	ldrsh r3, [r0, r1]
	lsl r0, r4, #16
	asr r0, r0, #16
	mov r5, #136
	lsl r5, r5, #6
	cmp r0, r5
	beq _080B4A38
	mov r0, r12
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080B4A38
	mov r0, #128
	lsl r0, r0, #7
	and r0, r0, r4
	cmp r0, #0
	bne _080B4A10
	mov r0, #128
	lsl r0, r0, #5
	strh r0, [r2]
	b _080B4A3E
_080B4A08:
	.4byte gUnknown_020040C0
_080B4A0C:
	.4byte gUnknown_0816F132
_080B4A10:
	ldr r0, _080B4A30  @ =gDungeonMaps
	mov r2, r10
	add r1, r6, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	beq _080B4A38
	ldr r3, _080B4A34  @ =0x00000FFF
	and r3, r3, r4
	mov r4, #192
	lsl r4, r4, #6
	add r0, r4, #0
	orr r3, r3, r0
	b _080B4A7C
	.byte 0x00
	.byte 0x00
_080B4A30:
	.4byte gDungeonMaps
_080B4A34:
	.4byte 0x00000FFF
_080B4A38:
	mov r0, #0
	ldr r5, _080B4A70  @ =gUnknown_03002BA8
	strh r0, [r5]
_080B4A3E:
	mov r1, r9
	add r4, r7, r1
	ldrh r0, [r4]
	add r0, r0, r3
	strh r0, [r4]
	ldr r0, _080B4A74  @ =gDungeonMaps
	mov r2, r10
	add r1, r6, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	and r0, r0, r2
	cmp r0, #0
	bne _080B4A78
	mov r3, r12
	ldrh r1, [r3]
	mov r0, #1
	and r0, r0, r1
	mov r3, #136
	lsl r3, r3, #6
	cmp r0, #0
	beq _080B4A7C
	mov r5, #0
	ldrsh r3, [r4, r5]
	b _080B4A7C
	.byte 0x00
	.byte 0x00
_080B4A70:
	.4byte gUnknown_03002BA8
_080B4A74:
	.4byte gDungeonMaps
_080B4A78:
	mov r0, #0
	ldrsh r3, [r4, r0]
_080B4A7C:
	ldr r0, _080B4AA8  @ =gUnknown_020040C2
	add r0, r0, r8
	strh r3, [r0]
	ldr r4, [sp, #4]
	ldr r1, _080B4AAC  @ =gUnknown_03002B94
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #5
	beq _080B4A96
	b _080B468A
_080B4A96:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B4AA8:
	.4byte gUnknown_020040C2
_080B4AAC:
	.4byte gUnknown_03002B94
	THUMB_FUNC_END sub_080B4654

