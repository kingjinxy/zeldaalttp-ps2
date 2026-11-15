	THUMB_FUNC_START sub_08016858
sub_08016858: @ 0x08016858
	push {lr}
	ldr r2, _0801686C  @ =gUnknown_0813911C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801686C:
	.4byte gUnknown_0813911C
	THUMB_FUNC_END sub_08016858

