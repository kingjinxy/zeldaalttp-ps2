	THUMB_FUNC_START sub_080E3DFC
sub_080E3DFC: @ 0x080E3DFC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E2614
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080E3E30  @ =gRam
	ldr r3, _080E3E34  @ =0x00001082
	add r1, r2, r3
	add r1, r4, r1
	strb r0, [r1]
	ldr r0, _080E3E38  @ =0x00000FC2
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	cmp r0, #0
	bne _080E3E2A
	add r0, r4, #0
	bl sub_080E3E3C
_080E3E2A:
	pop {r4}
	pop {r0}
	bx r0
_080E3E30:
	.4byte gRam
_080E3E34:
	.4byte 0x00001082
_080E3E38:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E3DFC

