	THUMB_FUNC_START sub_0812C46C
sub_0812C46C: @ 0x0812C46C
	push {r4,lr}
	ldr r2, _0812C490  @ =gUnknown_030003CC
	ldr r4, [r2]
	ldr r3, [r4, #8]
	lsl r1, r1, #2
	add r2, r1, r3
	ldr r2, [r2]
	add r3, r3, r2
	ldr r2, [r4, #20]
	add r1, r1, r2
	ldr r1, [r1]
	add r2, r2, r1
	add r1, r3, #0
	bl sub_0812C4C0
	pop {r4}
	pop {r0}
	bx r0
_0812C490:
	.4byte gUnknown_030003CC
	THUMB_FUNC_END sub_0812C46C

