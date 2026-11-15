	THUMB_FUNC_START sub_080F423C
sub_080F423C: @ 0x080F423C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r3, _080F4274  @ =gRam
	ldr r2, _080F4278  @ =0x00001082
	add r1, r3, r2
	add r1, r4, r1
	mov r2, #3
	eor r0, r0, r2
	strb r0, [r1]
	ldr r1, _080F427C  @ =gUnknown_08179584
	ldr r0, _080F4280  @ =0x00000F52
	add r3, r3, r0
	add r3, r4, r3
	ldrb r0, [r3]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_080F4274:
	.4byte gRam
_080F4278:
	.4byte 0x00001082
_080F427C:
	.4byte gUnknown_08179584
_080F4280:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F423C

