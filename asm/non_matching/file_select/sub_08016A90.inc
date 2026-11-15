	THUMB_FUNC_START sub_08016A90
sub_08016A90: @ 0x08016A90
	push {lr}
	ldr r2, _08016AA4  @ =gUnknown_081391FC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08016AA4:
	.4byte gUnknown_081391FC
	THUMB_FUNC_END sub_08016A90

