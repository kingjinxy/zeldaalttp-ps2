	THUMB_FUNC_START sub_080698D4
sub_080698D4: @ 0x080698D4
	push {lr}
	ldr r1, _080698F0  @ =gUnknown_0814C860
	ldr r0, _080698F4  @ =gRam
	ldr r2, _080698F8  @ =0x000009A4
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080698F0:
	.4byte gUnknown_0814C860
_080698F4:
	.4byte gRam
_080698F8:
	.4byte 0x000009A4
	THUMB_FUNC_END sub_080698D4

