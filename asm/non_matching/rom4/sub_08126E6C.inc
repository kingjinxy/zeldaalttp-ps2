	THUMB_FUNC_START sub_08126E6C
sub_08126E6C: @ 0x08126E6C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08126E8C  @ =gUnknown_08180784
	ldr r1, _08126E90  @ =gUnknown_03000050
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
_08126E8C:
	.4byte gUnknown_08180784
_08126E90:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126E6C

