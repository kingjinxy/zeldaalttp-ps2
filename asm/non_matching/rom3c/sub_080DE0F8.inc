	THUMB_FUNC_START sub_080DE0F8
sub_080DE0F8: @ 0x080DE0F8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DE118  @ =gUnknown_0817638C
	ldr r1, _080DE11C  @ =gRam
	ldr r3, _080DE120  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DE118:
	.4byte gUnknown_0817638C
_080DE11C:
	.4byte gRam
_080DE120:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE0F8

