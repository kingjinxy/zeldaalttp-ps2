	THUMB_FUNC_START sub_080DAE5C
sub_080DAE5C: @ 0x080DAE5C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	ldr r4, _080DAE90  @ =gRam
	ldr r0, _080DAE94  @ =0x00001172
	add r2, r4, r0
	add r2, r3, r2
	ldr r1, _080DAE98  @ =0x00000FC2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r1, [r0]
	strb r1, [r2]
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DAEA4
	ldr r2, _080DAE9C  @ =0x00000F92
	add r1, r4, r2
	add r1, r3, r1
	ldr r2, _080DAEA0  @ =gUnknown_08175C2F
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080DAEEC
_080DAE90:
	.4byte gRam
_080DAE94:
	.4byte 0x00001172
_080DAE98:
	.4byte 0x00000FC2
_080DAE9C:
	.4byte 0x00000F92
_080DAEA0:
	.4byte gUnknown_08175C2F
_080DAEA4:
	ldr r0, _080DAEF4  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r2, #4
	ldr r1, _080DAEF8  @ =0x00001002
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #4
	beq _080DAEC6
	bl GetRandomInt
	mov r2, #15
	and r2, r2, r0
_080DAEC6:
	ldr r0, _080DAEFC  @ =0x00000F82
	add r1, r4, r0
	add r1, r5, r1
	ldr r0, _080DAF00  @ =gUnknown_08175C34
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080DAF04  @ =0x00001062
	add r1, r4, r0
	add r1, r5, r1
	ldr r0, _080DAF08  @ =gUnknown_08175C44
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080DAF0C  @ =0x000010A2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #8
	strb r1, [r0]
_080DAEEC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DAEF4:
	.4byte 0x00000F52
_080DAEF8:
	.4byte 0x00001002
_080DAEFC:
	.4byte 0x00000F82
_080DAF00:
	.4byte gUnknown_08175C34
_080DAF04:
	.4byte 0x00001062
_080DAF08:
	.4byte gUnknown_08175C44
_080DAF0C:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080DAE5C

