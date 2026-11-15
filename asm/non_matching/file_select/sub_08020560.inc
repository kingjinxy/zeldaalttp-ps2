	THUMB_FUNC_START sub_08020560
sub_08020560: @ 0x08020560
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x080095A4
	ldr r5, _08020584  @ =gUnknown_0813B654
	add r0, r4, #0
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r5
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4,r5}
	pop {r0}
	bx r0
_08020584:
	.4byte gUnknown_0813B654
	THUMB_FUNC_END sub_08020560

