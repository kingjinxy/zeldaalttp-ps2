	THUMB_FUNC_START sub_0808273C
sub_0808273C: @ 0x0808273C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _08082948  @ =gRam
	mov r10, r0
	ldr r6, _0808294C  @ =0x000009EA
	add r6, r6, r10
	ldr r1, _08082950  @ =0x000003FF
	mov r9, r1
	ldr r2, _08082954  @ =gUnknown_02002E40
	mov r8, r2
	ldr r5, _08082958  @ =0x00000964
	add r5, r5, r10
	ldr r0, _0808295C  @ =0x00000968
	add r0, r0, r10
	mov r12, r0
	mov r7, #192
	lsl r7, r7, #4
_08082764:
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r2, _08082960  @ =gUnknown_02018002
	add r0, r0, r2
	ldrh r1, [r0]
	mov r0, r9
	and r0, r0, r1
	add r0, r0, r8
	ldrb r1, [r0]
	strh r1, [r5]
	ldrh r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r2, [r0]
	mov r0, r12
	strh r2, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _0808279A
	add r0, r7, #0
	and r0, r0, r2
	lsr r0, r0, #10
	orr r1, r1, r0
	strh r1, [r5]
_0808279A:
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r1, _08082964  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r2, [r0]
	mov r0, r9
	and r0, r0, r2
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, r12
	strh r2, [r0]
	add r3, r1, #0
	add r0, r3, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _080827C6
	add r0, r7, #0
	and r0, r0, r2
	lsr r1, r0, #10
	orr r1, r1, r3
_080827C6:
	ldr r4, _08082968  @ =0x000009EE
	add r4, r4, r10
	ldrh r0, [r4]
	ldr r2, _0808296C  @ =gUnknown_0200CBA0
	add r0, r0, r2
	strb r1, [r0]
	ldrh r0, [r4]
	ldr r1, _08082970  @ =gUnknown_0200CBA1
	add r0, r0, r1
	ldrb r1, [r5]
	strb r1, [r0]
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r2, _08082974  @ =gUnknown_02018802
	add r0, r0, r2
	ldrh r1, [r0]
	mov r0, r9
	and r0, r0, r1
	add r0, r0, r8
	ldrb r1, [r0]
	strh r1, [r5]
	ldrh r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r2, [r0]
	mov r0, r12
	strh r2, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _08082812
	add r0, r7, #0
	and r0, r0, r2
	lsr r0, r0, #10
	orr r1, r1, r0
	strh r1, [r5]
_08082812:
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r1, _08082978  @ =gUnknown_02018800
	add r0, r0, r1
	ldrh r2, [r0]
	mov r0, r9
	and r0, r0, r2
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, r12
	strh r2, [r0]
	add r3, r1, #0
	add r0, r3, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _0808283E
	add r0, r7, #0
	and r0, r0, r2
	lsr r1, r0, #10
	orr r1, r1, r3
_0808283E:
	ldrh r0, [r4]
	ldr r2, _0808297C  @ =gUnknown_0200CBC0
	add r0, r0, r2
	strb r1, [r0]
	ldrh r0, [r4]
	ldr r1, _08082980  @ =gUnknown_0200CBC1
	add r0, r0, r1
	ldrb r1, [r5]
	strb r1, [r0]
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r2, _08082984  @ =gUnknown_0201A002
	add r0, r0, r2
	ldrh r1, [r0]
	mov r0, r9
	and r0, r0, r1
	add r0, r0, r8
	ldrb r1, [r0]
	strh r1, [r5]
	ldrh r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r2, [r0]
	mov r0, r12
	strh r2, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _08082886
	add r0, r7, #0
	and r0, r0, r2
	lsr r0, r0, #10
	orr r1, r1, r0
	strh r1, [r5]
_08082886:
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r1, _08082988  @ =gUnknown_0201A000
	add r0, r0, r1
	ldrh r2, [r0]
	mov r0, r9
	and r0, r0, r2
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, r12
	strh r2, [r0]
	add r3, r1, #0
	add r0, r3, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _080828B2
	add r0, r7, #0
	and r0, r0, r2
	lsr r1, r0, #10
	orr r1, r1, r3
_080828B2:
	ldrh r0, [r4]
	ldr r2, _0808298C  @ =gUnknown_0200DBA0
	add r0, r0, r2
	strb r1, [r0]
	ldrh r0, [r4]
	ldr r1, _08082990  @ =gUnknown_0200DBA1
	add r0, r0, r1
	ldrb r1, [r5]
	strb r1, [r0]
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r2, _08082994  @ =gUnknown_0201A802
	add r0, r0, r2
	ldrh r1, [r0]
	mov r0, r9
	and r0, r0, r1
	add r0, r0, r8
	ldrb r1, [r0]
	strh r1, [r5]
	ldrh r0, [r6]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r2, [r0]
	mov r0, r12
	strh r2, [r0]
	add r0, r1, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _080828FA
	add r0, r7, #0
	and r0, r0, r2
	lsr r0, r0, #10
	orr r1, r1, r0
	strh r1, [r5]
_080828FA:
	ldrh r0, [r6]
	lsl r0, r0, #1
	ldr r1, _08082998  @ =gUnknown_0201A800
	add r0, r0, r1
	ldrh r2, [r0]
	mov r0, r9
	and r0, r0, r2
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, r12
	strh r2, [r0]
	add r3, r1, #0
	add r0, r3, #0
	sub r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bhi _08082926
	add r0, r7, #0
	and r0, r0, r2
	lsr r1, r0, #10
	orr r1, r1, r3
_08082926:
	ldrh r0, [r4]
	ldr r2, _0808299C  @ =gUnknown_0200DBC0
	add r0, r0, r2
	strb r1, [r0]
	ldrh r0, [r4]
	ldr r1, _080829A0  @ =gUnknown_0200DBC1
	add r0, r0, r1
	ldrb r1, [r5]
	strb r1, [r0]
	ldrh r1, [r4]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #30
	bne _080829A4
	add r0, r1, #0
	add r0, r0, #34
	b _080829A6
_08082948:
	.4byte gRam
_0808294C:
	.4byte 0x000009EA
_08082950:
	.4byte 0x000003FF
_08082954:
	.4byte gUnknown_02002E40
_08082958:
	.4byte 0x00000964
_0808295C:
	.4byte 0x00000968
_08082960:
	.4byte gUnknown_02018002
_08082964:
	.4byte gUnknown_02018000
_08082968:
	.4byte 0x000009EE
_0808296C:
	.4byte gUnknown_0200CBA0
_08082970:
	.4byte gUnknown_0200CBA1
_08082974:
	.4byte gUnknown_02018802
_08082978:
	.4byte gUnknown_02018800
_0808297C:
	.4byte gUnknown_0200CBC0
_08082980:
	.4byte gUnknown_0200CBC1
_08082984:
	.4byte gUnknown_0201A002
_08082988:
	.4byte gUnknown_0201A000
_0808298C:
	.4byte gUnknown_0200DBA0
_08082990:
	.4byte gUnknown_0200DBA1
_08082994:
	.4byte gUnknown_0201A802
_08082998:
	.4byte gUnknown_0201A800
_0808299C:
	.4byte gUnknown_0200DBC0
_080829A0:
	.4byte gUnknown_0200DBC1
_080829A4:
	add r0, r1, #2
_080829A6:
	strh r0, [r4]
	ldr r3, _080829E4  @ =0x000009EA
	add r3, r3, r10
	ldrh r2, [r3]
	add r1, r2, #2
	strh r1, [r3]
	lsl r1, r1, #16
	mov r0, #128
	lsl r0, r0, #19
	cmp r1, r0
	bne _080829C2
	ldr r1, _080829E8  @ =0x00000402
	add r0, r2, r1
	strh r0, [r3]
_080829C2:
	ldrh r0, [r3]
	cmp r0, r7
	beq _080829CA
	b _08082764
_080829CA:
	ldr r2, _080829EC  @ =gRam
	ldr r0, _080829F0  @ =0x00000A4C
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080829E4:
	.4byte 0x000009EA
_080829E8:
	.4byte 0x00000402
_080829EC:
	.4byte gRam
_080829F0:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0808273C

