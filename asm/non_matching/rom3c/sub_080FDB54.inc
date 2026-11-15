	THUMB_FUNC_START sub_080FDB54
sub_080FDB54: @ 0x080FDB54
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080FDB80  @ =0x0000013D
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080FDB84  @ =gRam
	ldr r1, _080FDB88  @ =0x00000F52
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FDB80:
	.4byte 0x0000013D
_080FDB84:
	.4byte gRam
_080FDB88:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDB54

