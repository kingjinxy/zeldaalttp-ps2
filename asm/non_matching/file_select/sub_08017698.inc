	THUMB_FUNC_START sub_08017698
sub_08017698: @ 0x08017698
	push {lr}
	ldr r2, _080176AC  @ =gUnknown_081395B4
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080176AC:
	.4byte gUnknown_081395B4
	THUMB_FUNC_END sub_08017698

