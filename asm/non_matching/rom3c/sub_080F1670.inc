	THUMB_FUNC_START sub_080F1670
sub_080F1670: @ 0x080F1670
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080F168C  @ =gRam
	ldr r2, _080F1690  @ =0x00001002
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F1694
	add r0, r1, #0
	bl sub_080F1780
	b _080F169A
_080F168C:
	.4byte gRam
_080F1690:
	.4byte 0x00001002
_080F1694:
	add r0, r1, #0
	bl sub_080F16A0
_080F169A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F1670

	.byte 0x00
	.byte 0x00
