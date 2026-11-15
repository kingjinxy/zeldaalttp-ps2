	THUMB_FUNC_START sub_08034344
sub_08034344: @ 0x08034344
	push {lr}
	ldr r2, _08034358  @ =gUnknown_08427AB0
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034358:
	.4byte gUnknown_08427AB0
	THUMB_FUNC_END sub_08034344

