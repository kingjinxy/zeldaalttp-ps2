	THUMB_FUNC_START sub_0801AA9C
sub_0801AA9C: @ 0x0801AA9C
	push {lr}
	ldr r2, _0801AAB0  @ =gUnknown_08139F0C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_0801AAB0:
	.4byte gUnknown_08139F0C
	THUMB_FUNC_END sub_0801AA9C

