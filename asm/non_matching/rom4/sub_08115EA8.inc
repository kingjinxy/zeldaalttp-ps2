	THUMB_FUNC_START sub_08115EA8
sub_08115EA8: @ 0x08115EA8
	push {lr}
	ldr r1, _08115EC4  @ =gUnknown_0817E9A4
	ldr r0, _08115EC8  @ =gRam
	ldr r2, _08115ECC  @ =0x00001663
	add r0, r0, r2
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
_08115EC4:
	.4byte gUnknown_0817E9A4
_08115EC8:
	.4byte gRam
_08115ECC:
	.4byte 0x00001663
	THUMB_FUNC_END sub_08115EA8

