	THUMB_FUNC_START sub_08026754
sub_08026754: @ 0x08026754
	push {lr}
	ldr r2, _08026768  @ =gUnknown_0813CBE0
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08026768:
	.4byte gUnknown_0813CBE0
	THUMB_FUNC_END sub_08026754

