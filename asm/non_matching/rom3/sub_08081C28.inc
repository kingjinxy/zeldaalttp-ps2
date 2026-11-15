	THUMB_FUNC_START sub_08081C28
sub_08081C28: @ 0x08081C28
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _08081FD0  @ =gRam
	ldr r1, _08081FD4  @ =0x00000AD8
	add r2, r0, r1
	ldrh r1, [r2]
	mov r9, r0
	cmp r1, #0
	beq _08081C72
	mov r6, #0
	mov r1, #59
	mov r8, r2
	ldr r2, _08081FD8  @ =0x00000C12
	add r2, r2, r9
	ldr r3, _08081FDC  @ =gUnknown_0200CBA0
	mov r12, r3
	ldr r5, _08081FE0  @ =gUnknown_0200CBA1
	add r3, r3, #64
_08081C50:
	ldrh r4, [r2]
	mov r7, r12
	add r0, r4, r7
	strb r1, [r0]
	add r0, r4, r5
	strb r1, [r0]
	add r0, r4, r3
	strb r1, [r0]
	ldr r7, _08081FE4  @ =gUnknown_0200CBE1
	add r0, r4, r7
	strb r1, [r0]
	add r2, r2, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _08081C50
_08081C72:
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r0, _08081FE8  @ =0x00003030
	strh r0, [r2]
	mov r6, #0
	ldr r1, _08081FEC  @ =0x00000ADE
	add r1, r1, r9
	ldrh r0, [r1]
	cmp r0, #0
	beq _08081CD2
	mov r7, #0
	mov r5, #38
	ldr r3, _08081FF0  @ =0x00000C22
	add r3, r3, r9
	mov r8, r1
_08081C92:
	ldrh r4, [r3]
	ldr r1, _08081FF4  @ =gUnknown_0200CC21
	add r0, r4, r1
	strb r7, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r7, [r0]
	sub r1, r1, #129
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _08081FE4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r2]
	strb r0, [r1]
	ldr r0, _08081FF8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrh r0, [r2]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	add r3, r3, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _08081C92
_08081CD2:
	ldr r1, _08082000  @ =0x00000B26
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _08081D3A
	mov r2, #94
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r9
	lsl r0, r6, #1
	ldr r3, _08081FF0  @ =0x00000C22
	add r0, r0, r3
	mov r4, r9
	add r3, r0, r4
	add r7, r1, #0
_08081CF0:
	ldrh r4, [r3]
	ldr r1, _08081FE0  @ =gUnknown_0200CBA1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #127
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _08081FE4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r0, _08081FF8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r5]
	add r0, r0, r4
	strh r0, [r5]
	add r3, r3, #2
	add r6, r6, #1
	ldrh r0, [r7]
	cmp r6, r0
	bne _08081CF0
_08081D3A:
	ldr r1, _08082004  @ =0x00000B2A
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _08081DA2
	mov r2, #95
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r9
	lsl r0, r6, #1
	ldr r3, _08081FF0  @ =0x00000C22
	add r0, r0, r3
	mov r4, r9
	add r3, r0, r4
	add r7, r1, #0
_08081D58:
	ldrh r4, [r3]
	ldr r1, _08081FE0  @ =gUnknown_0200CBA1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #127
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _08081FE4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r0, _08081FF8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r5]
	add r0, r0, r4
	strh r0, [r5]
	add r3, r3, #2
	add r6, r6, #1
	ldrh r0, [r7]
	cmp r6, r0
	bne _08081D58
_08081DA2:
	ldr r1, _08082008  @ =0x00000B4A
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _08081E0E
	mov r5, #0
	mov r7, #56
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	lsl r0, r6, #1
	ldr r4, _08081FF0  @ =0x00000C22
	add r0, r0, r4
	mov r4, r9
	add r2, r0, r4
	mov r8, r1
_08081DC2:
	ldrh r4, [r2]
	ldr r1, _08081FF4  @ =gUnknown_0200CC21
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	sub r1, r1, #193
	add r0, r4, r1
	strb r7, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r7, [r0]
	ldr r0, _08081FE4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r0, _08081FF8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r3]
	add r0, r0, r4
	strh r0, [r3]
	add r2, r2, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _08081DC2
_08081E0E:
	ldr r1, _0808200C  @ =0x00000B4C
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _08081E7A
	mov r5, #0
	mov r7, #57
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	lsl r0, r6, #1
	ldr r4, _08081FF0  @ =0x00000C22
	add r0, r0, r4
	mov r4, r9
	add r2, r0, r4
	mov r8, r1
_08081E2E:
	ldrh r4, [r2]
	ldr r1, _08081FE0  @ =gUnknown_0200CBA1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #127
	add r0, r4, r1
	strb r7, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r7, [r0]
	ldr r0, _08081FF4  @ =gUnknown_0200CC21
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r0, _08082010  @ =gUnknown_0200CC22
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r3]
	add r0, r0, r4
	strh r0, [r3]
	add r2, r2, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _08081E2E
_08081E7A:
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldrh r0, [r2]
	ldr r1, _08082014  @ =0x00000707
	and r1, r1, r0
	ldr r3, _08082018  @ =0x00003434
	add r0, r3, #0
	orr r1, r1, r0
	strh r1, [r2]
	mov r1, #174
	lsl r1, r1, #4
	add r1, r1, r9
	ldrh r4, [r1]
	cmp r6, r4
	beq _08081EE0
	mov r5, #38
	add r3, r2, #0
	lsl r0, r6, #1
	ldr r7, _08081FF0  @ =0x00000C22
	add r0, r0, r7
	mov r4, r9
	add r2, r0, r4
	ldr r7, _0808201C  @ =gUnknown_0200CC61
	mov r8, r7
	add r7, r1, #0
_08081EAE:
	ldrh r4, [r2]
	mov r1, r8
	add r0, r4, r1
	strb r5, [r0]
	ldr r1, _08082020  @ =gUnknown_0200CC62
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _08081FF4  @ =gUnknown_0200CC21
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r0, _08082010  @ =gUnknown_0200CC22
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r3]
	add r0, r0, r4
	strh r0, [r3]
	add r2, r2, #2
	add r6, r6, #1
	ldrh r0, [r7]
	cmp r6, r0
	bne _08081EAE
_08081EE0:
	ldr r1, _08082024  @ =0x00000B28
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _08081F48
	mov r2, #94
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r9
	lsl r0, r6, #1
	ldr r3, _08081FF0  @ =0x00000C22
	add r0, r0, r3
	mov r4, r9
	add r3, r0, r4
	add r7, r1, #0
_08081EFE:
	ldrh r4, [r3]
	ldr r1, _08081FE0  @ =gUnknown_0200CBA1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #127
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _08081FE4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r0, _08081FF8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r5]
	add r0, r0, r4
	strh r0, [r5]
	add r3, r3, #2
	add r6, r6, #1
	ldrh r0, [r7]
	cmp r6, r0
	bne _08081EFE
_08081F48:
	ldr r1, _08082028  @ =0x00000B2C
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _08081FB0
	mov r2, #95
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r9
	lsl r0, r6, #1
	ldr r3, _08081FF0  @ =0x00000C22
	add r0, r0, r3
	mov r4, r9
	add r3, r0, r4
	add r7, r1, #0
_08081F66:
	ldrh r4, [r3]
	ldr r1, _08081FE0  @ =gUnknown_0200CBA1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #127
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _08081FE4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r0, _08081FF8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrh r0, [r5]
	strb r0, [r1]
	ldr r1, _08081FFC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r5]
	add r0, r0, r4
	strh r0, [r5]
	add r3, r3, #2
	add r6, r6, #1
	ldrh r0, [r7]
	cmp r6, r0
	bne _08081F66
_08081FB0:
	ldr r1, _0808202C  @ =0x00000B4E
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _08082080
	mov r5, #0
	mov r7, #56
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	lsl r0, r6, #1
	ldr r4, _08081FF0  @ =0x00000C22
	add r0, r0, r4
	mov r4, r9
	b _08082030
	.byte 0x00
	.byte 0x00
_08081FD0:
	.4byte gRam
_08081FD4:
	.4byte 0x00000AD8
_08081FD8:
	.4byte 0x00000C12
_08081FDC:
	.4byte gUnknown_0200CBA0
_08081FE0:
	.4byte gUnknown_0200CBA1
_08081FE4:
	.4byte gUnknown_0200CBE1
_08081FE8:
	.4byte 0x00003030
_08081FEC:
	.4byte 0x00000ADE
_08081FF0:
	.4byte 0x00000C22
_08081FF4:
	.4byte gUnknown_0200CC21
_08081FF8:
	.4byte gUnknown_0200CBE2
_08081FFC:
	.4byte 0x00000101
_08082000:
	.4byte 0x00000B26
_08082004:
	.4byte 0x00000B2A
_08082008:
	.4byte 0x00000B4A
_0808200C:
	.4byte 0x00000B4C
_08082010:
	.4byte gUnknown_0200CC22
_08082014:
	.4byte 0x00000707
_08082018:
	.4byte 0x00003434
_0808201C:
	.4byte gUnknown_0200CC61
_08082020:
	.4byte gUnknown_0200CC62
_08082024:
	.4byte 0x00000B28
_08082028:
	.4byte 0x00000B2C
_0808202C:
	.4byte 0x00000B4E
_08082030:
	add r2, r0, r4
	mov r8, r1
_08082034:
	ldrh r4, [r2]
	ldr r1, _080823E0  @ =gUnknown_0200CC21
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	sub r1, r1, #193
	add r0, r4, r1
	strb r7, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r7, [r0]
	ldr r0, _080823E4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r0, _080823E8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r1, _080823EC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r3]
	add r0, r0, r4
	strh r0, [r3]
	add r2, r2, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _08082034
_08082080:
	mov r1, #181
	lsl r1, r1, #4
	add r1, r1, r9
	ldrh r2, [r1]
	cmp r6, r2
	beq _080820EE
	mov r5, #0
	mov r7, #57
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	lsl r0, r6, #1
	ldr r4, _080823F0  @ =0x00000C22
	add r0, r0, r4
	mov r4, r9
	add r2, r0, r4
	mov r8, r1
_080820A2:
	ldrh r4, [r2]
	ldr r1, _080823F4  @ =gUnknown_0200CBA1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #63
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r1, r1, #127
	add r0, r4, r1
	strb r7, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r7, [r0]
	ldr r0, _080823E0  @ =gUnknown_0200CC21
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r0, _080823F8  @ =gUnknown_0200CC22
	add r1, r4, r0
	ldrh r0, [r3]
	strb r0, [r1]
	ldr r1, _080823EC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r3]
	add r0, r0, r4
	strh r0, [r3]
	add r2, r2, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _080820A2
_080820EE:
	mov r6, #0
	ldr r3, _080823FC  @ =0x00000964
	add r3, r3, r9
	strh r6, [r3]
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r0, _08082400  @ =0x00001F1F
	strh r0, [r2]
	ldr r0, _08082404  @ =0x00000AE2
	add r0, r0, r9
	ldrh r4, [r0]
	cmp r4, #0
	bne _08082130
	mov r0, #1
	strh r0, [r3]
	ldr r0, _08082408  @ =0x00001E1E
	strh r0, [r2]
	ldr r0, _0808240C  @ =0x00000AE4
	add r0, r0, r9
	ldrh r4, [r0]
	cmp r4, #0
	bne _08082130
	ldr r1, _08082410  @ =0x00000AE6
	add r1, r1, r9
	ldrh r0, [r1]
	cmp r0, #0
	beq _08082200
	mov r0, #2
	strh r0, [r3]
	ldr r0, _08082414  @ =0x00001D1D
	strh r0, [r2]
	ldrh r4, [r1]
_08082130:
	ldr r2, _080823FC  @ =0x00000964
	add r2, r2, r9
	ldrh r1, [r2]
	mov r0, #175
	lsl r0, r0, #4
	add r0, r0, r9
	strh r1, [r0]
	strh r4, [r2]
	mov r1, #2
	mov r8, r1
	mov r3, #0
	mov r12, r3
	mov r7, #1
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	lsl r0, r6, #1
	ldr r4, _08082418  @ =0x00000C2A
	add r0, r0, r4
	mov r1, r9
	add r5, r0, r1
_0808215A:
	ldrh r4, [r5]
	ldr r1, _0808241C  @ =gUnknown_0200CBA0
	add r0, r4, r1
	mov r1, r8
	strb r1, [r0]
	ldr r1, _080823F4  @ =gUnknown_0200CBA1
	add r0, r4, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _08082420  @ =gUnknown_0200DC60
	add r0, r4, r1
	mov r1, r8
	strb r1, [r0]
	ldr r1, _08082424  @ =gUnknown_0200DC61
	add r0, r4, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _08082428  @ =gUnknown_0200CBA2
	add r0, r4, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _0808242C  @ =gUnknown_0200CBA3
	add r0, r4, r1
	mov r1, r8
	strb r1, [r0]
	ldr r1, _08082430  @ =gUnknown_0200DC62
	add r0, r4, r1
	mov r1, r12
	strb r1, [r0]
	ldr r1, _08082434  @ =gUnknown_0200DC63
	add r0, r4, r1
	mov r1, r8
	strb r1, [r0]
	ldr r1, _08082438  @ =gUnknown_0200CBE0
	add r0, r4, r1
	strb r7, [r0]
	ldr r1, _0808243C  @ =gUnknown_0200DC20
	add r0, r4, r1
	strb r7, [r0]
	ldr r1, _08082440  @ =gUnknown_0200CBE3
	add r0, r4, r1
	strb r7, [r0]
	ldr r1, _08082444  @ =gUnknown_0200DC23
	add r0, r4, r1
	strb r7, [r0]
	ldr r0, _080823E4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080823E8  @ =gUnknown_0200CBE2
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08082448  @ =gUnknown_0200DBE1
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _0808244C  @ =gUnknown_0200DBE2
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080823E0  @ =gUnknown_0200CC21
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080823F8  @ =gUnknown_0200CC22
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08082450  @ =gUnknown_0200DC21
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08082454  @ =gUnknown_0200DC22
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	add r5, r5, #2
	add r6, r6, #1
	mov r1, #0
	ldrsh r0, [r2, r1]
	cmp r6, r0
	bne _0808215A
_08082200:
	ldr r4, _08082458  @ =0x00000AEE
	add r4, r4, r9
	ldrh r2, [r4]
	cmp r6, r2
	beq _0808227C
	mov r1, #175
	lsl r1, r1, #4
	add r1, r1, r9
	mov r0, #2
	strh r0, [r1]
	mov r1, #3
	mov r3, #10
	mov r5, #8
	lsl r0, r6, #1
	ldr r7, _08082418  @ =0x00000C2A
	add r0, r0, r7
	mov r7, r9
	add r2, r0, r7
	mov r8, r4
_08082226:
	ldrh r4, [r2]
	ldr r7, _0808241C  @ =gUnknown_0200CBA0
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r3, [r0]
	ldr r7, _0808245C  @ =gUnknown_0200DBA0
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r3, [r0]
	ldr r7, _0808242C  @ =gUnknown_0200CBA3
	add r0, r4, r7
	strb r1, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	strb r3, [r0]
	ldr r7, _08082460  @ =gUnknown_0200DBA3
	add r0, r4, r7
	strb r1, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	strb r3, [r0]
	ldr r7, _08082438  @ =gUnknown_0200CBE0
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	add r7, r7, #2
	add r0, r4, r7
	strb r1, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	add r2, r2, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _08082226
_0808227C:
	mov r6, #0
	ldr r4, _08082464  @ =0x00000AE8
	add r4, r4, r9
	ldrh r0, [r4]
	cmp r0, #0
	beq _080822FC
	mov r1, #175
	lsl r1, r1, #4
	add r1, r1, r9
	mov r0, #2
	strh r0, [r1]
	mov r2, #3
	mov r1, #0
	mov r12, r1
	mov r5, #10
	mov r1, #8
	ldr r3, _08082418  @ =0x00000C2A
	add r3, r3, r9
	mov r8, r4
_080822A2:
	ldrh r4, [r3]
	ldr r7, _0808241C  @ =gUnknown_0200CBA0
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #1
	add r0, r4, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _0808242C  @ =gUnknown_0200CBA3
	add r0, r4, r7
	strb r2, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _0808245C  @ =gUnknown_0200DBA0
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	add r7, r7, #2
	add r0, r4, r7
	strb r2, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	add r7, r7, #62
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	add r3, r3, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _080822A2
_080822FC:
	ldr r4, _08082468  @ =0x00000AEA
	add r4, r4, r9
	ldrh r1, [r4]
	cmp r6, r1
	beq _08082360
	mov r1, #175
	lsl r1, r1, #4
	add r1, r1, r9
	mov r0, #2
	strh r0, [r1]
	mov r2, #3
	mov r5, #0
	mov r3, #10
	lsl r0, r6, #1
	ldr r7, _08082418  @ =0x00000C2A
	add r0, r0, r7
	mov r7, r9
	add r1, r0, r7
	mov r8, r4
_08082322:
	ldrh r4, [r1]
	ldr r7, _0808241C  @ =gUnknown_0200CBA0
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	add r7, r7, #2
	add r0, r4, r7
	strb r2, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	ldr r7, _0808245C  @ =gUnknown_0200DBA0
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r3, [r0]
	add r7, r7, #2
	add r0, r4, r7
	strb r2, [r0]
	sub r7, r7, #1
	add r0, r4, r7
	strb r3, [r0]
	add r1, r1, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _08082322
_08082360:
	mov r6, #0
	ldr r4, _0808246C  @ =0x00000AD2
	add r4, r4, r9
	ldrh r0, [r4]
	cmp r0, #0
	beq _080823CE
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r9
	ldr r0, _08082470  @ =0x00007070
	strh r0, [r1]
	add r2, r1, #0
	ldr r5, _08082474  @ =0x0000199C
	add r5, r5, r9
	ldr r3, _08082478  @ =0x0000195C
	add r3, r3, r9
	ldr r1, _0808247C  @ =0x00003FFF
	mov r8, r1
	add r7, r4, #0
_08082386:
	ldrh r1, [r3]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #48
	beq _080823B8
	ldrh r1, [r5]
	mov r0, r8
	and r0, r0, r1
	lsr r4, r0, #1
	ldr r0, _0808241C  @ =gUnknown_0200CBA0
	add r1, r4, r0
	ldrh r0, [r2]
	strb r0, [r1]
	ldr r0, _080823F4  @ =gUnknown_0200CBA1
	add r1, r4, r0
	ldrh r0, [r2]
	strb r0, [r1]
	ldr r0, _08082438  @ =gUnknown_0200CBE0
	add r1, r4, r0
	ldrh r0, [r2]
	strb r0, [r1]
	ldr r0, _080823E4  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrh r0, [r2]
	strb r0, [r1]
_080823B8:
	ldr r1, _080823EC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	add r5, r5, #2
	add r3, r3, #2
	add r6, r6, #1
	ldrh r0, [r7]
	cmp r6, r0
	bne _08082386
_080823CE:
	ldr r4, _08082480  @ =0x00000AD4
	add r4, r4, r9
	ldrh r1, [r4]
	cmp r6, r1
	bne _080823DA
	b _080824F6
_080823DA:
	ldr r1, _08082484  @ =0x00000968
	b _08082488
	.byte 0x00
	.byte 0x00
_080823E0:
	.4byte gUnknown_0200CC21
_080823E4:
	.4byte gUnknown_0200CBE1
_080823E8:
	.4byte gUnknown_0200CBE2
_080823EC:
	.4byte 0x00000101
_080823F0:
	.4byte 0x00000C22
_080823F4:
	.4byte gUnknown_0200CBA1
_080823F8:
	.4byte gUnknown_0200CC22
_080823FC:
	.4byte 0x00000964
_08082400:
	.4byte 0x00001F1F
_08082404:
	.4byte 0x00000AE2
_08082408:
	.4byte 0x00001E1E
_0808240C:
	.4byte 0x00000AE4
_08082410:
	.4byte 0x00000AE6
_08082414:
	.4byte 0x00001D1D
_08082418:
	.4byte 0x00000C2A
_0808241C:
	.4byte gUnknown_0200CBA0
_08082420:
	.4byte gUnknown_0200DC60
_08082424:
	.4byte gUnknown_0200DC61
_08082428:
	.4byte gUnknown_0200CBA2
_0808242C:
	.4byte gUnknown_0200CBA3
_08082430:
	.4byte gUnknown_0200DC62
_08082434:
	.4byte gUnknown_0200DC63
_08082438:
	.4byte gUnknown_0200CBE0
_0808243C:
	.4byte gUnknown_0200DC20
_08082440:
	.4byte gUnknown_0200CBE3
_08082444:
	.4byte gUnknown_0200DC23
_08082448:
	.4byte gUnknown_0200DBE1
_0808244C:
	.4byte gUnknown_0200DBE2
_08082450:
	.4byte gUnknown_0200DC21
_08082454:
	.4byte gUnknown_0200DC22
_08082458:
	.4byte 0x00000AEE
_0808245C:
	.4byte gUnknown_0200DBA0
_08082460:
	.4byte gUnknown_0200DBA3
_08082464:
	.4byte 0x00000AE8
_08082468:
	.4byte 0x00000AEA
_0808246C:
	.4byte 0x00000AD2
_08082470:
	.4byte 0x00007070
_08082474:
	.4byte 0x0000199C
_08082478:
	.4byte 0x0000195C
_0808247C:
	.4byte 0x00003FFF
_08082480:
	.4byte 0x00000AD4
_08082484:
	.4byte 0x00000968
_08082488:
	add r1, r1, r9
	mov r0, #0
	strh r0, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r9
	ldr r0, _080826BC  @ =0x0000C0C0
	strh r0, [r1]
	ldr r2, _080826C0  @ =0x00003FFF
	mov r8, r2
	add r2, r1, #0
	lsl r0, r6, #1
	ldr r3, _080826C4  @ =0x0000199C
	add r0, r0, r3
	mov r5, r9
	add r3, r0, r5
	ldr r7, _080826C8  @ =0xFFFFEFEF
	add r5, r4, #0
_080824AC:
	ldrh r1, [r3]
	mov r0, r8
	and r0, r0, r1
	lsr r4, r0, #1
	ldr r0, _080826CC  @ =gUnknown_0200CBA0
	add r1, r4, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080826D0  @ =gUnknown_0200CBA1
	add r1, r4, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080826D4  @ =gUnknown_0200CBE0
	add r1, r4, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080826D8  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldrh r1, [r2]
	add r0, r7, #0
	and r0, r0, r1
	ldr r1, _080826DC  @ =0x00000101
	add r0, r0, r1
	strh r0, [r2]
	add r3, r3, #2
	add r6, r6, #1
	ldrh r4, [r5]
	cmp r6, r4
	bne _080824AC
	ldr r0, _080826E0  @ =0x00000968
	add r0, r0, r9
	ldrh r1, [r0]
	ldr r0, _080826E4  @ =0x00000AD4
	add r0, r0, r9
	strh r1, [r0]
_080824F6:
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r9
	ldr r0, _080826E8  @ =0x00005858
	strh r0, [r4]
	mov r6, #0
	ldr r0, _080826EC  @ =0x00000B3E
	add r0, r0, r9
	ldrh r0, [r0]
	cmp r0, #0
	beq _0808254E
	ldr r0, _080826F0  @ =0x000009E6
	add r0, r0, r9
	ldrb r0, [r0]
	add r1, r0, #0
	cmp r1, #39
	beq _080825AE
	cmp r1, #60
	beq _080825AE
	cmp r1, #62
	beq _080825AE
	sub r0, r0, #41
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #9
	bls _080825AE
	ldr r0, _080826F4  @ =0x000009E7
	add r0, r0, r9
	ldrb r0, [r0]
	add r1, r0, #0
	cmp r1, #39
	beq _080825AE
	cmp r1, #60
	beq _080825AE
	cmp r1, #62
	beq _080825AE
	sub r0, r0, #41
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #9
	bls _080825AE
	bl sub_08081824
	add r6, r0, #0
_0808254E:
	mov r1, #180
	lsl r1, r1, #4
	add r1, r1, r9
	ldrh r5, [r1]
	cmp r6, r5
	beq _080825AE
	ldr r7, _080826F8  @ =0x00007FFF
	add r3, r4, #0
	lsl r0, r6, #1
	ldr r2, _080826FC  @ =0x00000C52
	add r0, r0, r2
	mov r4, r9
	add r2, r0, r4
	add r5, r1, #0
_0808256A:
	ldrh r1, [r2]
	mov r4, #128
	lsl r4, r4, #8
	add r0, r4, #0
	orr r0, r0, r1
	strh r0, [r2]
	and r0, r0, r7
	lsr r4, r0, #1
	ldr r0, _080826CC  @ =gUnknown_0200CBA0
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080826D0  @ =gUnknown_0200CBA1
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080826D4  @ =gUnknown_0200CBE0
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _080826D8  @ =gUnknown_0200CBE1
	add r1, r4, r0
	ldrb r0, [r3]
	strb r0, [r1]
	add r2, r2, #2
	add r6, r6, #1
	ldr r1, _080826DC  @ =0x00000101
	add r0, r1, #0
	ldrh r4, [r3]
	add r0, r0, r4
	strh r0, [r3]
	ldrh r0, [r5]
	cmp r6, r0
	bne _0808256A
_080825AE:
	mov r6, #0
	ldr r5, _08082700  @ =0x00000964
	add r5, r5, r9
	strh r6, [r5]
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	ldr r0, _08082704  @ =0x00003F3F
	strh r0, [r3]
	ldr r0, _08082708  @ =0x00000B42
	add r0, r0, r9
	ldrh r4, [r0]
	cmp r4, #0
	bne _080825F0
	mov r0, #1
	strh r0, [r5]
	ldr r0, _0808270C  @ =0x00003E3E
	strh r0, [r3]
	ldr r0, _08082710  @ =0x00000B44
	add r0, r0, r9
	ldrh r4, [r0]
	cmp r4, #0
	bne _080825F0
	ldr r1, _08082714  @ =0x00000B46
	add r1, r1, r9
	ldrh r0, [r1]
	cmp r0, #0
	beq _08082620
	mov r0, #2
	strh r0, [r5]
	ldr r0, _08082718  @ =0x00003D3D
	strh r0, [r3]
	ldrh r4, [r1]
_080825F0:
	ldr r3, _0808271C  @ =gRam
	ldr r2, _08082700  @ =0x00000964
	add r1, r3, r2
	ldrh r2, [r1]
	mov r5, #175
	lsl r5, r5, #4
	add r0, r3, r5
	strh r2, [r0]
	strh r4, [r1]
	add r7, r1, #0
	lsl r0, r6, #1
	ldr r1, _08082720  @ =0x00000C62
	add r0, r0, r1
	add r5, r0, r3
_0808260C:
	ldrh r4, [r5]
	add r0, r4, #0
	bl sub_08081B28
	add r5, r5, #2
	add r6, r6, #1
	mov r2, #0
	ldrsh r0, [r7, r2]
	cmp r6, r0
	bne _0808260C
_08082620:
	mov r6, #0
	ldr r0, _0808271C  @ =gRam
	ldr r3, _08082724  @ =0x00000B56
	add r4, r0, r3
	ldrh r1, [r4]
	mov r9, r0
	cmp r1, #0
	beq _080826A4
	mov r1, #175
	lsl r1, r1, #4
	add r1, r1, r9
	mov r0, #2
	strh r0, [r1]
	mov r2, #3
	mov r5, #10
	mov r12, r5
	mov r1, #8
	ldr r3, _08082720  @ =0x00000C62
	add r3, r3, r9
	mov r5, #0
	mov r8, r4
_0808264A:
	ldrh r4, [r3]
	ldr r7, _08082728  @ =gUnknown_0200DC60
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #1
	add r0, r4, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _0808272C  @ =gUnknown_0200DC62
	add r0, r4, r7
	mov r7, r12
	strb r7, [r0]
	ldr r7, _08082730  @ =gUnknown_0200DC63
	add r0, r4, r7
	strb r2, [r0]
	ldr r7, _08082734  @ =gUnknown_0200CC60
	add r0, r4, r7
	strb r2, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r5, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r2, [r0]
	sub r7, r7, #67
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	add r7, r7, #1
	add r0, r4, r7
	strb r1, [r0]
	add r3, r3, #2
	add r6, r6, #1
	mov r0, r8
	ldrh r0, [r0]
	cmp r6, r0
	bne _0808264A
_080826A4:
	ldr r1, _08082738  @ =0x00000A4C
	add r1, r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080826BC:
	.4byte 0x0000C0C0
_080826C0:
	.4byte 0x00003FFF
_080826C4:
	.4byte 0x0000199C
_080826C8:
	.4byte 0xFFFFEFEF
_080826CC:
	.4byte gUnknown_0200CBA0
_080826D0:
	.4byte gUnknown_0200CBA1
_080826D4:
	.4byte gUnknown_0200CBE0
_080826D8:
	.4byte gUnknown_0200CBE1
_080826DC:
	.4byte 0x00000101
_080826E0:
	.4byte 0x00000968
_080826E4:
	.4byte 0x00000AD4
_080826E8:
	.4byte 0x00005858
_080826EC:
	.4byte 0x00000B3E
_080826F0:
	.4byte 0x000009E6
_080826F4:
	.4byte 0x000009E7
_080826F8:
	.4byte 0x00007FFF
_080826FC:
	.4byte 0x00000C52
_08082700:
	.4byte 0x00000964
_08082704:
	.4byte 0x00003F3F
_08082708:
	.4byte 0x00000B42
_0808270C:
	.4byte 0x00003E3E
_08082710:
	.4byte 0x00000B44
_08082714:
	.4byte 0x00000B46
_08082718:
	.4byte 0x00003D3D
_0808271C:
	.4byte gRam
_08082720:
	.4byte 0x00000C62
_08082724:
	.4byte 0x00000B56
_08082728:
	.4byte gUnknown_0200DC60
_0808272C:
	.4byte gUnknown_0200DC62
_08082730:
	.4byte gUnknown_0200DC63
_08082734:
	.4byte gUnknown_0200CC60
_08082738:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_08081C28

