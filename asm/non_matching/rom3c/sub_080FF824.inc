	THUMB_FUNC_START sub_080FF824
sub_080FF824: @ 0x080FF824
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080ED830
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	beq _080FF83E
	b _080FF994
_080FF83E:
	mov r2, #0
	ldr r5, _080FF8F4  @ =gRam
	ldr r1, _080FF8F8  @ =0x000009DA
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #236
	bne _080FF84E
	mov r2, #1
_080FF84E:
	cmp r2, #0
	beq _080FF92C
	ldr r0, _080FF8FC  @ =gUnknown_02010990
	strb r7, [r0]
	strb r7, [r0, #1]
	strb r7, [r0, #2]
	ldr r2, _080FF900  @ =0x00001663
	add r4, r5, r2
	mov r0, #6
	mov r8, r0
	mov r0, #6
	strb r0, [r4]
	bl sub_0812F9A8
	strb r7, [r4]
	ldr r1, _080FF904  @ =0x00000CDE
	add r0, r5, r1
	mov r3, #0
	strh r7, [r0]
	mov r2, #206
	lsl r2, r2, #4
	add r1, r5, r2
	mov r0, #160
	strh r0, [r1]
	ldr r1, _080FF908  @ =0x00000FE2
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #79
	strb r1, [r0]
	ldr r2, _080FF90C  @ =0x00000F82
	add r0, r5, r2
	add r0, r6, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080FF910  @ =0x00000FB2
	add r0, r5, r1
	add r0, r6, r0
	mov r2, #2
	strb r2, [r0]
	add r1, r1, #208
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080FF914  @ =0x00000F92
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #21
	strb r1, [r0]
	ldr r1, _080FF918  @ =0x00001122
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #7
	strb r1, [r0]
	ldr r1, _080FF91C  @ =0x00001172
	add r0, r5, r1
	add r0, r6, r0
	strb r2, [r0]
	ldr r2, _080FF920  @ =0x00000ED2
	add r1, r5, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	ldr r0, _080FF924  @ =0x00000EE2
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	sub r2, r2, #45
	add r1, r5, r2
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	mov r2, r8
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080FF928  @ =0x00000DA5
	add r0, r5, r1
	strb r3, [r0]
	b _080FF994
_080FF8F4:
	.4byte gRam
_080FF8F8:
	.4byte 0x000009DA
_080FF8FC:
	.4byte gUnknown_02010990
_080FF900:
	.4byte 0x00001663
_080FF904:
	.4byte 0x00000CDE
_080FF908:
	.4byte 0x00000FE2
_080FF90C:
	.4byte 0x00000F82
_080FF910:
	.4byte 0x00000FB2
_080FF914:
	.4byte 0x00000F92
_080FF918:
	.4byte 0x00001122
_080FF91C:
	.4byte 0x00001172
_080FF920:
	.4byte 0x00000ED2
_080FF924:
	.4byte 0x00000EE2
_080FF928:
	.4byte 0x00000DA5
_080FF92C:
	ldr r1, _080FF950  @ =0x00001663
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #6
	beq _080FF946
	ldr r1, _080FF954  @ =0x00000AA8
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #6
	and r0, r0, r1
	cmp r0, #0
	bne _080FF95C
_080FF946:
	ldr r1, _080FF958  @ =0x00000FA2
	add r0, r5, r1
	add r0, r6, r0
	b _080FF992
	.byte 0x00
	.byte 0x00
_080FF950:
	.4byte 0x00001663
_080FF954:
	.4byte 0x00000AA8
_080FF958:
	.4byte 0x00000FA2
_080FF95C:
	ldr r1, _080FF9A0  @ =0x00000FE2
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #96
	strb r1, [r0]
	ldr r1, _080FF9A4  @ =0x00000F82
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080FF9A8  @ =0x00000FB2
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080FF9AC  @ =0x00001082
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080FF9B0  @ =0x00000F92
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #7
	strb r1, [r0]
	ldr r1, _080FF9B4  @ =0x00000DA5
	add r0, r5, r1
_080FF992:
	strb r2, [r0]
_080FF994:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FF9A0:
	.4byte 0x00000FE2
_080FF9A4:
	.4byte 0x00000F82
_080FF9A8:
	.4byte 0x00000FB2
_080FF9AC:
	.4byte 0x00001082
_080FF9B0:
	.4byte 0x00000F92
_080FF9B4:
	.4byte 0x00000DA5
	THUMB_FUNC_END sub_080FF824

