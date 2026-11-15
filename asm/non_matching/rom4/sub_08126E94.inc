	THUMB_FUNC_START sub_08126E94
sub_08126E94: @ 0x08126E94
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_08126EE4
	add r0, r4, #0
	bl sub_08126544
	ldr r1, _08126EC0  @ =gUnknown_081807B0
	ldr r0, _08126EC4  @ =gUnknown_03000050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_08126EC0:
	.4byte gUnknown_081807B0
_08126EC4:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126E94

