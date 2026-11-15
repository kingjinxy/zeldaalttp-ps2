	THUMB_FUNC_START sub_08018E38
sub_08018E38: @ 0x08018E38
	push {lr}
	ldr r2, _08018E4C  @ =gUnknown_08139948
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08018E4C:
	.4byte gUnknown_08139948
	THUMB_FUNC_END sub_08018E38

