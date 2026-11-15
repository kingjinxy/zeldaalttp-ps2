	THUMB_FUNC_START sub_0806BE78
sub_0806BE78: @ 0x0806BE78
	push {lr}
	ldr r1, _0806BE98  @ =gUnknown_0814CA5C
	ldr r0, _0806BE9C  @ =gRam
	ldr r2, _0806BEA0  @ =0x000009AC
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_0812D32C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BE98:
	.4byte gUnknown_0814CA5C
_0806BE9C:
	.4byte gRam
_0806BEA0:
	.4byte 0x000009AC
	THUMB_FUNC_END sub_0806BE78

