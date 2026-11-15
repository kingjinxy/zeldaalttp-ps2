	THUMB_FUNC_START sub_080FEEFC
sub_080FEEFC: @ 0x080FEEFC
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080FEF20  @ =gRam
	ldr r3, _080FEF24  @ =0x00000FC2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FEF1C
	ldr r0, _080FEF28  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080FEF1C:
	pop {r0}
	bx r0
_080FEF20:
	.4byte gRam
_080FEF24:
	.4byte 0x00000FC2
_080FEF28:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FEEFC

