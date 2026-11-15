	THUMB_FUNC_START sub_08025754
sub_08025754: @ 0x08025754
	push {lr}
	ldr r2, _08025768  @ =gUnknown_0813C434
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08025768:
	.4byte gUnknown_0813C434
	THUMB_FUNC_END sub_08025754

