	THUMB_FUNC_START sub_08025FA0
sub_08025FA0: @ 0x08025FA0
	push {lr}
	ldr r2, _08025FB4  @ =gUnknown_0813C5DC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08025FB4:
	.4byte gUnknown_0813C5DC
	THUMB_FUNC_END sub_08025FA0

