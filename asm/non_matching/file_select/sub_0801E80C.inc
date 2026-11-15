	THUMB_FUNC_START sub_0801E80C
sub_0801E80C: @ 0x0801E80C
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _0801E834  @ =gUnknown_03000208
	ldrh r0, [r0, #2]
	cmp r0, #1
	bls _0801E81E
	add r0, r4, #0
	bl 0x080095A4
_0801E81E:
	ldr r0, _0801E838  @ =gUnknown_0813AE6C
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_0801E834:
	.4byte gUnknown_03000208
_0801E838:
	.4byte gUnknown_0813AE6C
	THUMB_FUNC_END sub_0801E80C

