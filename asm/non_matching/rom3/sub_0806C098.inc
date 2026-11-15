	THUMB_FUNC_START sub_0806C098
sub_0806C098: @ 0x0806C098
	push {lr}
	ldr r1, _0806C0BC  @ =gUnknown_0814C99C
	ldr r0, _0806C0C0  @ =gRam
	ldr r2, _0806C0C4  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_080C1B40
	bl sub_080A3EE0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C0BC:
	.4byte gUnknown_0814C99C
_0806C0C0:
	.4byte gRam
_0806C0C4:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806C098

