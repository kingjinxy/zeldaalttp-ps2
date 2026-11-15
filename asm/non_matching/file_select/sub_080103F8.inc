	THUMB_FUNC_START sub_080103F8
sub_080103F8: @ 0x080103F8
	push {lr}
	ldr r1, _08010410  @ =gUnknown_084274EC
	ldr r0, _08010414  @ =gSubState
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010410:
	.4byte gUnknown_084274EC
_08010414:
	.4byte gSubState
	THUMB_FUNC_END sub_080103F8

