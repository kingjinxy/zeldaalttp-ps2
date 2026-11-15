	THUMB_FUNC_START sub_08018E20
sub_08018E20: @ 0x08018E20
	push {lr}
	ldr r2, _08018E34  @ =gUnknown_08139938
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08018E34:
	.4byte gUnknown_08139938
	THUMB_FUNC_END sub_08018E20

