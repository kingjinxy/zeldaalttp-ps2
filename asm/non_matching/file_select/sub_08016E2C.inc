	THUMB_FUNC_START sub_08016E2C
sub_08016E2C: @ 0x08016E2C
	push {lr}
	ldr r2, _08016E40  @ =gUnknown_0813929C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08016E40:
	.4byte gUnknown_0813929C
	THUMB_FUNC_END sub_08016E2C

