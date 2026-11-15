	THUMB_FUNC_START sub_08010628
sub_08010628: @ 0x08010628
	push {lr}
	ldr r1, _08010640  @ =gUnknown_084274FC
	ldr r0, _08010644  @ =gSubState
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010640:
	.4byte gUnknown_084274FC
_08010644:
	.4byte gSubState
	THUMB_FUNC_END sub_08010628

