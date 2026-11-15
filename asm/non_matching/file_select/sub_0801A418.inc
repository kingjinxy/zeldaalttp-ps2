	THUMB_FUNC_START sub_0801A418
sub_0801A418: @ 0x0801A418
	push {lr}
	ldr r2, _0801A42C  @ =gUnknown_08139D34
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801A42C:
	.4byte gUnknown_08139D34
	THUMB_FUNC_END sub_0801A418

