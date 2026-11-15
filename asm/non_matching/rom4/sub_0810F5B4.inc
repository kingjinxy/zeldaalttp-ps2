	THUMB_FUNC_START sub_0810F5B4
sub_0810F5B4: @ 0x0810F5B4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810F5D4  @ =gUnknown_0817D0A8
	ldr r1, _0810F5D8  @ =gRam
	ldr r3, _0810F5DC  @ =0x00000B6C
	add r1, r1, r3
	ldrb r1, [r1]
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	mov r2, #0
	bl sub_080C9164
	pop {r0}
	bx r0
_0810F5D4:
	.4byte gUnknown_0817D0A8
_0810F5D8:
	.4byte gRam
_0810F5DC:
	.4byte 0x00000B6C
	THUMB_FUNC_END sub_0810F5B4

