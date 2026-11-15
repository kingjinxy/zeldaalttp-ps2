	THUMB_FUNC_START sub_080F39F0
sub_080F39F0: @ 0x080F39F0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F3A24  @ =gRam
	ldr r3, _080F3A28  @ =0x00001082
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #4
	strb r3, [r1]
	ldr r4, _080F3A2C  @ =0x00000FB2
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r3, _080F3A30  @ =gUnknown_08179470
	ldr r1, _080F3A34  @ =0x00000F52
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsl r1, r1, #2
	add r1, r1, r3
	ldr r1, [r1]
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_080F3A24:
	.4byte gRam
_080F3A28:
	.4byte 0x00001082
_080F3A2C:
	.4byte 0x00000FB2
_080F3A30:
	.4byte gUnknown_08179470
_080F3A34:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F39F0

