	THUMB_FUNC_START sub_08024588
sub_08024588: @ 0x08024588
	push {r4,lr}
	add r4, r0, #0
	add r2, r4, #0
	add r2, r2, #110
	ldrh r1, [r2]
	mov r0, #192
	and r0, r0, r1
	cmp r0, #192
	bne _080245B4
	mov r0, #16
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024BDC
	add r0, r4, #0
	bl sub_08024C90
	ldr r0, [r4, #88]
	add r1, r4, #0
	bl sub_0803D3D0
	b _080245C0
_080245B4:
	mov r0, #63
	and r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	bl sub_08024F4C
_080245C0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024588

	.byte 0x00
	.byte 0x00
