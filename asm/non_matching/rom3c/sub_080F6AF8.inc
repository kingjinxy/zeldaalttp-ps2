	THUMB_FUNC_START sub_080F6AF8
sub_080F6AF8: @ 0x080F6AF8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080F6B20  @ =gRam
	ldr r1, _080F6B24  @ =0x00000D94
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #48
	strb r1, [r0]
	ldr r4, _080F6B28  @ =0x00000F62
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F6B2C
	add r0, r2, #0
	bl sub_080F6720
	b _080F6B42
	.byte 0x00
	.byte 0x00
_080F6B20:
	.4byte gRam
_080F6B24:
	.4byte 0x00000D94
_080F6B28:
	.4byte 0x00000F62
_080F6B2C:
	ldr r1, _080F6B48  @ =gUnknown_08179A04
	ldr r4, _080F6B4C  @ =0x00000F52
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r2, #0
	bl _call_via_r1
_080F6B42:
	pop {r4}
	pop {r0}
	bx r0
_080F6B48:
	.4byte gUnknown_08179A04
_080F6B4C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F6AF8

