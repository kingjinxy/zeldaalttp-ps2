	THUMB_FUNC_START sub_081183C0
sub_081183C0: @ 0x081183C0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _081183DC  @ =gRam
	ldr r2, _081183E0  @ =0x00001082
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	bl sub_080CF6C0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081183DC:
	.4byte gRam
_081183E0:
	.4byte 0x00001082
	THUMB_FUNC_END sub_081183C0

