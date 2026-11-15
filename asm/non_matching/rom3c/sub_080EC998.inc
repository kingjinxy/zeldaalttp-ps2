	THUMB_FUNC_START sub_080EC998
sub_080EC998: @ 0x080EC998
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080EC9B8  @ =gRam
	ldr r1, _080EC9BC  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r1, #0
	beq _080EC9C0
	cmp r1, #24
	bne _080EC9C8
	add r0, r2, #0
	bl sub_080EC688
	b _080EC9C8
_080EC9B8:
	.4byte gRam
_080EC9BC:
	.4byte 0x00000FC2
_080EC9C0:
	ldr r4, _080EC9D0  @ =0x00000F52
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
_080EC9C8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EC9D0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EC998

