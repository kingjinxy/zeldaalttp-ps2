	THUMB_FUNC_START sub_080AB70C
sub_080AB70C: @ 0x080AB70C
	push {lr}
	ldr r1, _080AB728  @ =gUnknown_0816E058
	ldr r0, _080AB72C  @ =gRam
	ldr r2, _080AB730  @ =0x000009E5
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
_080AB728:
	.4byte gUnknown_0816E058
_080AB72C:
	.4byte gRam
_080AB730:
	.4byte 0x000009E5
	THUMB_FUNC_END sub_080AB70C

