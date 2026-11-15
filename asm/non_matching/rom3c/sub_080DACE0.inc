	THUMB_FUNC_START sub_080DACE0
sub_080DACE0: @ 0x080DACE0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080DAD20  @ =gRam
	ldr r1, _080DAD24  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #192
	bne _080DACFC
	add r0, r4, #0
	mov r1, #90
	bl sub_080CF140
_080DACFC:
	ldrb r0, [r5]
	sub r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #222
	bls _080DAD2C
	add r1, r4, #0
	ldr r2, _080DAD28  @ =0x0000164C
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DAD16
	mov r1, #2
_080DAD16:
	add r0, r1, #0
	bl sub_08132574
	b _080DAD3C
	.byte 0x00
	.byte 0x00
_080DAD20:
	.4byte gRam
_080DAD24:
	.4byte 0x00000FC2
_080DAD28:
	.4byte 0x0000164C
_080DAD2C:
	cmp r4, #0
	bne _080DAD3C
	mov r0, #0
	bl sub_080C5044
	ldr r3, _080DAE08  @ =0x00001172
	add r0, r6, r3
	strb r4, [r0]
_080DAD3C:
	ldr r5, _080DAE0C  @ =gRam
	ldr r1, _080DAE10  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DAE40
	cmp r0, #0
	bge _080DADA0
	add r0, r4, #0
	mov r1, #2
	bl sub_080C35FC
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #2
	ldr r3, _080DAE14  @ =0x00000964
	add r1, r5, r3
	strb r0, [r1]
	ldr r2, _080DAE18  @ =0x00000FB2
	add r1, r5, r2
	add r6, r4, r1
	ldr r2, _080DAE1C  @ =gUnknown_08175C10
	lsl r1, r0, #2
	add r0, r0, r1
	sub r3, r3, #3
	add r1, r5, r3
	add r0, r0, #2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r6]
	add r0, r4, #0
	mov r1, #32
	bl sub_080C35FC
	ldr r1, _080DAE20  @ =0x00001002
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #4
	bne _080DADA0
	mov r0, #3
	strb r0, [r6]
_080DADA0:
	ldr r6, _080DAE0C  @ =gRam
	ldr r2, _080DAE10  @ =0x00000FC2
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #112
	bne _080DADB4
	add r0, r4, #0
	bl sub_080DAF10
_080DADB4:
	ldrb r1, [r5]
	lsr r1, r1, #4
	ldr r3, _080DAE24  @ =0x00000F62
	add r0, r6, r3
	add r5, r4, r0
	ldr r0, _080DAE28  @ =gUnknown_08175BEA
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r5]
	ldr r0, _080DAE2C  @ =gUnknown_08175BFA
	add r1, r1, r0
	ldrb r2, [r1]
	cmp r2, #0
	beq _080DADE4
	ldr r1, _080DAE30  @ =gUnknown_08175C0A
	add r3, r3, #80
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	add r0, r2, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
_080DADE4:
	ldr r1, _080DAE34  @ =0x00001082
	add r0, r6, r1
	add r0, r4, r0
	strb r2, [r0]
	ldr r3, _080DAE38  @ =0x00000F92
	add r2, r6, r3
	add r2, r4, r2
	ldr r3, _080DAE3C  @ =gUnknown_08175C29
	sub r1, r1, #208
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, r3
	ldrb r0, [r5]
	ldrb r1, [r1]
	add r0, r0, r1
	b _080DAE4E
	.byte 0x00
	.byte 0x00
_080DAE08:
	.4byte 0x00001172
_080DAE0C:
	.4byte gRam
_080DAE10:
	.4byte 0x00000FC2
_080DAE14:
	.4byte 0x00000964
_080DAE18:
	.4byte 0x00000FB2
_080DAE1C:
	.4byte gUnknown_08175C10
_080DAE20:
	.4byte 0x00001002
_080DAE24:
	.4byte 0x00000F62
_080DAE28:
	.4byte gUnknown_08175BEA
_080DAE2C:
	.4byte gUnknown_08175BFA
_080DAE30:
	.4byte gUnknown_08175C0A
_080DAE34:
	.4byte 0x00001082
_080DAE38:
	.4byte 0x00000F92
_080DAE3C:
	.4byte gUnknown_08175C29
_080DAE40:
	ldr r3, _080DAE58  @ =0x00000F52
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #39
_080DAE4E:
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DAE58:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DACE0

