	THUMB_FUNC_START sub_08126E44
sub_08126E44: @ 0x08126E44
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08126E64  @ =gUnknown_08180764
	ldr r1, _08126E68  @ =gUnknown_03000050
	add r1, r1, #24
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126E64:
	.4byte gUnknown_08180764
_08126E68:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126E44

