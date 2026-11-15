	THUMB_FUNC_START sub_080F29B8
sub_080F29B8: @ 0x080F29B8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080F29F4  @ =gRam
	ldr r2, _080F29F8  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r4, r1, #0
	cmp r0, #0
	beq _080F2A08
	ldr r1, _080F29FC  @ =0x00000AA8
	add r0, r4, r1
	ldrh r1, [r0]
	lsr r1, r1, #8
	ldr r3, _080F2A00  @ =gUnknown_08179264
	ldr r2, _080F2A04  @ =0x00000F02
	add r0, r4, r2
	add r0, r5, r0
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	add r0, r0, r3
	ldrb r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	beq _080F2A48
	b _080F2A3E
	.byte 0x00
	.byte 0x00
_080F29F4:
	.4byte gRam
_080F29F8:
	.4byte 0x000009B2
_080F29FC:
	.4byte 0x00000AA8
_080F2A00:
	.4byte gUnknown_08179264
_080F2A04:
	.4byte 0x00000F02
_080F2A08:
	ldr r2, _080F2A50  @ =0x000009C6
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #59
	bne _080F2A2A
	ldr r0, _080F2A54  @ =gUnknown_020022BB
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080F2A2A
	ldr r2, _080F2A58  @ =0x00000FA2
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
_080F2A2A:
	ldr r1, _080F2A50  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	ldr r2, _080F2A5C  @ =gUnknown_02002280
	add r0, r0, r2
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080F2A48
_080F2A3E:
	ldr r1, _080F2A58  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_080F2A48:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F2A50:
	.4byte 0x000009C6
_080F2A54:
	.4byte gUnknown_020022BB
_080F2A58:
	.4byte 0x00000FA2
_080F2A5C:
	.4byte gUnknown_02002280
	THUMB_FUNC_END sub_080F29B8

