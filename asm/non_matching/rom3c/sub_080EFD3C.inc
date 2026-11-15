	THUMB_FUNC_START sub_080EFD3C
sub_080EFD3C: @ 0x080EFD3C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080EFD74  @ =gRam
	ldr r1, _080EFD78  @ =0x00000FB2
	add r3, r2, r1
	add r3, r0, r3
	ldr r4, _080EFD7C  @ =0x00000EE2
	add r1, r2, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080EFD80  @ =0x00001042
	add r3, r2, r1
	add r3, r0, r3
	sub r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080EFD84  @ =0x00000FD2
	add r2, r2, r1
	add r0, r0, r2
	mov r1, #74
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080EFD74:
	.4byte gRam
_080EFD78:
	.4byte 0x00000FB2
_080EFD7C:
	.4byte 0x00000EE2
_080EFD80:
	.4byte 0x00001042
_080EFD84:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080EFD3C

