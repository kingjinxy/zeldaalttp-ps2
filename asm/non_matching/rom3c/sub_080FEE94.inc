	THUMB_FUNC_START sub_080FEE94
sub_080FEE94: @ 0x080FEE94
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r1, #0
	ldr r4, _080FEEE0  @ =gRam
	ldr r3, _080FEEE4  @ =0x000009DA
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FEEAA
	mov r1, #1
_080FEEAA:
	cmp r1, #0
	beq _080FEEF4
	ldr r1, _080FEEE8  @ =0x00000D84
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080FEEF4
	ldr r1, _080FEEEC  @ =0x00000FC2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #9
	strb r1, [r0]
	ldr r1, _080FEEF0  @ =0x000010C2
	add r0, r4, r1
	add r0, r2, r0
	strb r3, [r0]
	add r0, r2, #0
	bl sub_080FEA04
	mov r0, #1
	b _080FEEF6
	.byte 0x00
	.byte 0x00
_080FEEE0:
	.4byte gRam
_080FEEE4:
	.4byte 0x000009DA
_080FEEE8:
	.4byte 0x00000D84
_080FEEEC:
	.4byte 0x00000FC2
_080FEEF0:
	.4byte 0x000010C2
_080FEEF4:
	mov r0, #0
_080FEEF6:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080FEE94

