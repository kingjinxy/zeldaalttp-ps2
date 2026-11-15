	THUMB_FUNC_START sub_080EF19C
sub_080EF19C: @ 0x080EF19C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080EF1C8  @ =gRam
	ldr r1, _080EF1CC  @ =0x00001052
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r2, _080EF1D0  @ =0x00000F92
	add r3, r3, r2
	add r0, r0, r3
	ldr r3, _080EF1D4  @ =gUnknown_08178BA6
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r2, #3
	and r1, r1, r2
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080EF1C8:
	.4byte gRam
_080EF1CC:
	.4byte 0x00001052
_080EF1D0:
	.4byte 0x00000F92
_080EF1D4:
	.4byte gUnknown_08178BA6
	THUMB_FUNC_END sub_080EF19C

