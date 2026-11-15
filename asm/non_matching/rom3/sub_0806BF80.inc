	THUMB_FUNC_START sub_0806BF80
sub_0806BF80: @ 0x0806BF80
	push {lr}
	bl sub_080C1B40
	ldr r1, _0806BFA8  @ =gUnknown_0814C97C
	ldr r0, _0806BFAC  @ =gRam
	ldr r2, _0806BFB0  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_080A3EE0
	bl sub_08075A44
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BFA8:
	.4byte gUnknown_0814C97C
_0806BFAC:
	.4byte gRam
_0806BFB0:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806BF80

