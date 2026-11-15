	THUMB_FUNC_START sub_080F175C
sub_080F175C: @ 0x080F175C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F1774  @ =gRam
	ldr r3, _080F1778  @ =0x00000FA2
	add r1, r2, r3
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080F177C  @ =0x00001770
	add r2, r2, r0
	strb r1, [r2]
	bx lr
_080F1774:
	.4byte gRam
_080F1778:
	.4byte 0x00000FA2
_080F177C:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080F175C

