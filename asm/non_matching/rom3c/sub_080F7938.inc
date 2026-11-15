	THUMB_FUNC_START sub_080F7938
sub_080F7938: @ 0x080F7938
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F7968  @ =gRam
	ldr r1, _080F796C  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r2, [r5]
	cmp r2, #0
	beq _080F7A14
	cmp r2, #160
	bne _080F7956
	add r0, r4, #0
	bl sub_080F7AB4
_080F7956:
	ldrb r0, [r5]
	cmp r0, #159
	bls _080F7970
	cmp r0, #252
	bne _080F7A1C
	add r0, r4, #0
	bl sub_080F7AB4
	b _080F7A1C
_080F7968:
	.4byte gRam
_080F796C:
	.4byte 0x00000FC2
_080F7970:
	cmp r0, #10
	bne _080F797A
	add r0, r4, #0
	bl sub_080F7BDC
_080F797A:
	ldrb r0, [r5]
	cmp r0, #4
	bne _080F7986
	add r0, r4, #0
	bl sub_080F7AB4
_080F7986:
	ldrb r0, [r5]
	cmp r0, #96
	beq _080F79EC
	cmp r0, #80
	bne _080F79BE
	ldr r0, _080F79A0  @ =gQuakeMedallion
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F79A4
	add r0, r4, #0
	bl sub_080F7A28
	b _080F79BE
_080F79A0:
	.4byte gQuakeMedallion
_080F79A4:
	bl GetRandomInt
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	bne _080F79B8
	add r0, r4, #0
	bl sub_080E89E4
	b _080F79BE
_080F79B8:
	add r0, r4, #0
	bl sub_080F7B80
_080F79BE:
	ldr r0, _080F79DC  @ =gRam
	ldr r2, _080F79E0  @ =0x00000F92
	add r1, r0, r2
	add r1, r4, r1
	ldr r2, _080F79E4  @ =gUnknown_08179C54
	ldr r3, _080F79E8  @ =0x00000FC2
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080F7A1C
	.byte 0x00
	.byte 0x00
_080F79DC:
	.4byte gRam
_080F79E0:
	.4byte 0x00000F92
_080F79E4:
	.4byte gUnknown_08179C54
_080F79E8:
	.4byte 0x00000FC2
_080F79EC:
	ldr r2, _080F7A08  @ =0x0000012D
	ldr r0, _080F7A0C  @ =0x00001770
	add r1, r6, r0
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080F7A10  @ =gQuakeMedallion
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F7A00
	add r2, r2, #1
_080F7A00:
	add r0, r2, #0
	bl sub_080C95C0
	b _080F7A1C
_080F7A08:
	.4byte 0x0000012D
_080F7A0C:
	.4byte 0x00001770
_080F7A10:
	.4byte gQuakeMedallion
_080F7A14:
	ldr r1, _080F7A24  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r2, [r0]
_080F7A1C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7A24:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F7938

