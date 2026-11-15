	THUMB_FUNC_START sub_08018FFC
sub_08018FFC: @ 0x08018FFC
	push {lr}
	ldr r2, _08019010  @ =gUnknown_0813995C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08019010:
	.4byte gUnknown_0813995C
	THUMB_FUNC_END sub_08018FFC

