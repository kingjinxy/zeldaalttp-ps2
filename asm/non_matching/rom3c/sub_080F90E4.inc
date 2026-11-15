	THUMB_FUNC_START sub_080F90E4
sub_080F90E4: @ 0x080F90E4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F9108  @ =gRam
	ldr r1, _080F910C  @ =0x00001052
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r2, _080F9110  @ =0x00000F92
	add r3, r3, r2
	add r0, r0, r3
	lsl r1, r1, #24
	lsr r1, r1, #27
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
	bx lr
_080F9108:
	.4byte gRam
_080F910C:
	.4byte 0x00001052
_080F9110:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F90E4

