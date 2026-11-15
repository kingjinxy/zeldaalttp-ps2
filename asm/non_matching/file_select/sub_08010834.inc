	THUMB_FUNC_START sub_08010834
sub_08010834: @ 0x08010834
	push {lr}
	bl sub_0800BC50
	ldr r1, _08010850  @ =gUnknown_0842750C
	ldr r0, _08010854  @ =gSubState
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010850:
	.4byte gUnknown_0842750C
_08010854:
	.4byte gSubState
	THUMB_FUNC_END sub_08010834

