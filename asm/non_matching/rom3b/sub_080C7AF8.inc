	THUMB_FUNC_START sub_080C7AF8
sub_080C7AF8: @ 0x080C7AF8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080C7B14  @ =gRam
	ldr r2, _080C7B18  @ =0x000010F2
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	bl sub_080C781C
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r1}
	bx r1
_080C7B14:
	.4byte gRam
_080C7B18:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080C7AF8

