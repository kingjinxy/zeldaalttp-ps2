	THUMB_FUNC_START sub_080B8068
sub_080B8068: @ 0x080B8068
	ldr r1, _080B808C  @ =gUnknown_02006886
	mov r0, #0
	strb r0, [r1]
	sub r1, r1, #4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080B8090  @ =gRam
	mov r2, #152
	lsl r2, r2, #4
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r1, _080B8094  @ =0x0000099D
	add r0, r0, r1
	strb r2, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080B808C:
	.4byte gUnknown_02006886
_080B8090:
	.4byte gRam
_080B8094:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B8068

