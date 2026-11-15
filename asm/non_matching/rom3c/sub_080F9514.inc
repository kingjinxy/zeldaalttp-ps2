	THUMB_FUNC_START sub_080F9514
sub_080F9514: @ 0x080F9514
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F9538  @ =gRam
	ldr r3, _080F953C  @ =0x00000F52
	add r1, r2, r3
	add r0, r0, r1
	ldrb r1, [r0]
	add r1, r1, #1
	mov r3, #0
	strb r1, [r0]
	ldr r1, _080F9540  @ =0x00000B5D
	add r0, r2, r1
	strb r3, [r0]
	ldr r3, _080F9544  @ =0x00000B5C
	add r2, r2, r3
	mov r0, #30
	strb r0, [r2]
	bx lr
_080F9538:
	.4byte gRam
_080F953C:
	.4byte 0x00000F52
_080F9540:
	.4byte 0x00000B5D
_080F9544:
	.4byte 0x00000B5C
	THUMB_FUNC_END sub_080F9514

