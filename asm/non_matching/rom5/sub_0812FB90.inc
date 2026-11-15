	THUMB_FUNC_START sub_0812FB90
sub_0812FB90: @ 0x0812FB90
	push {lr}
	ldr r1, _0812FBB0  @ =gUnknown_0822B9C8
	ldr r0, _0812FBB4  @ =gRam
	ldr r2, _0812FBB8  @ =0x0000098E
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, _0812FBBC  @ =0x06007000
	bl LZ77UnCompVram
	pop {r0}
	bx r0
_0812FBB0:
	.4byte gUnknown_0822B9C8
_0812FBB4:
	.4byte gRam
_0812FBB8:
	.4byte 0x0000098E
_0812FBBC:
	.4byte 0x06007000
	THUMB_FUNC_END sub_0812FB90

