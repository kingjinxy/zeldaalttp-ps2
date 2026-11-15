	THUMB_FUNC_START sub_080348A8
sub_080348A8: @ 0x080348A8
	push {r4,lr}
	add r4, r0, #0
	bl sub_080348D0
	ldr r1, _080348CC  @ =gUnknown_0813DB10
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl sub_080348F0
	pop {r4}
	pop {r0}
	bx r0
_080348CC:
	.4byte gUnknown_0813DB10
	THUMB_FUNC_END sub_080348A8

