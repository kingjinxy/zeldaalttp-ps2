	THUMB_FUNC_START sub_080CEB44
sub_080CEB44: @ 0x080CEB44
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080CEB78  @ =gRam
	ldr r2, _080CEB7C  @ =0x00000FC2
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #2
	mov r2, #7
	eor r1, r1, r2
	mov r2, #150
	lsl r2, r2, #4
	add r3, r3, r2
	strb r1, [r3]
	mov r1, #0
	ldrsb r1, [r3, r1]
	lsl r1, r1, #5
	ldr r2, _080CEB80  @ =gUnknown_08172E9C
	add r1, r1, r2
	mov r2, #4
	bl sub_080C9480
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CEB78:
	.4byte gRam
_080CEB7C:
	.4byte 0x00000FC2
_080CEB80:
	.4byte gUnknown_08172E9C
	THUMB_FUNC_END sub_080CEB44

