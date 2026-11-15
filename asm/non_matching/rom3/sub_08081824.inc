	THUMB_FUNC_START sub_08081824
sub_08081824: @ 0x08081824
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r6, #0
	ldr r7, _080818EC  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	mov r10, r0
	add r1, r0, #0
	add r1, r1, r7
	mov r12, r1
	ldr r2, _080818F0  @ =0x00000C52
	add r4, r7, r2
	mov r0, #128
	lsl r0, r0, #8
	mov r9, r0
	ldr r1, _080818F4  @ =0x00000B3E
	add r1, r1, r7
	mov r8, r1
_0808184E:
	ldrh r1, [r4]
	cmp r1, #0
	beq _080818C0
	ldr r5, _080818F8  @ =0x00007FFF
	add r0, r5, #0
	and r0, r0, r1
	lsr r2, r0, #1
	ldr r0, _080818FC  @ =gUnknown_0200CBA0
	add r1, r2, r0
	mov r0, r10
	add r3, r7, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08081900  @ =gUnknown_0200CBA1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08081904  @ =gUnknown_0200CBE0
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08081908  @ =gUnknown_0200CBE1
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldrh r1, [r4]
	mov r0, r9
	and r0, r0, r1
	cmp r0, #0
	beq _080818C0
	add r0, r5, #0
	and r0, r0, r1
	strh r0, [r4]
	ldr r0, _0808190C  @ =gUnknown_0200CBE2
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08081910  @ =gUnknown_0200CBE3
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08081914  @ =gUnknown_0200CC20
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08081918  @ =gUnknown_0200CC21
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _0808191C  @ =gUnknown_0200CC22
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08081920  @ =gUnknown_0200CC23
	add r1, r2, r0
	ldrb r0, [r3]
	strb r0, [r1]
_080818C0:
	ldr r1, _08081924  @ =0x00000101
	add r0, r1, #0
	mov r2, r12
	ldrh r2, [r2]
	add r0, r0, r2
	mov r1, r12
	strh r0, [r1]
	add r4, r4, #2
	add r6, r6, #1
	mov r2, r8
	ldrh r2, [r2]
	cmp r6, r2
	bne _0808184E
	add r0, r6, #0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080818EC:
	.4byte gRam
_080818F0:
	.4byte 0x00000C52
_080818F4:
	.4byte 0x00000B3E
_080818F8:
	.4byte 0x00007FFF
_080818FC:
	.4byte gUnknown_0200CBA0
_08081900:
	.4byte gUnknown_0200CBA1
_08081904:
	.4byte gUnknown_0200CBE0
_08081908:
	.4byte gUnknown_0200CBE1
_0808190C:
	.4byte gUnknown_0200CBE2
_08081910:
	.4byte gUnknown_0200CBE3
_08081914:
	.4byte gUnknown_0200CC20
_08081918:
	.4byte gUnknown_0200CC21
_0808191C:
	.4byte gUnknown_0200CC22
_08081920:
	.4byte gUnknown_0200CC23
_08081924:
	.4byte 0x00000101
	THUMB_FUNC_END sub_08081824

