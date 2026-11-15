	THUMB_FUNC_START sub_0802651C
sub_0802651C: @ 0x0802651C
	push {lr}
	ldr r2, _08026530  @ =gUnknown_0813C708
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08026530:
	.4byte gUnknown_0813C708
	THUMB_FUNC_END sub_0802651C

