	THUMB_FUNC_START sub_080F5E44
sub_080F5E44: @ 0x080F5E44
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F5E64  @ =gUnknown_0817988C
	ldr r1, _080F5E68  @ =gRam
	ldr r3, _080F5E6C  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F5E64:
	.4byte gUnknown_0817988C
_080F5E68:
	.4byte gRam
_080F5E6C:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F5E44

