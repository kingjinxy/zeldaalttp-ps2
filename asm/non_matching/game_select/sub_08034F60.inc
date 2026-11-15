	THUMB_FUNC_START sub_08034F60
sub_08034F60: @ 0x08034F60
	push {lr}
	ldr r2, _08034F74  @ =gUnknown_08427B44
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034F74:
	.4byte gUnknown_08427B44
	THUMB_FUNC_END sub_08034F60

