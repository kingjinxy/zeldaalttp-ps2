	THUMB_FUNC_START sub_0812C494
sub_0812C494: @ 0x0812C494
	push {r4,r5,lr}
	add r3, r2, #0
	ldr r2, _0812C4BC  @ =gUnknown_030003CC
	ldr r5, [r2]
	ldr r4, [r5, #12]
	lsl r1, r1, #2
	add r2, r1, r4
	ldr r2, [r2]
	add r4, r4, r2
	ldr r2, [r5, #24]
	add r1, r1, r2
	ldr r1, [r1]
	add r2, r2, r1
	add r1, r4, #0
	bl sub_0812C548
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C4BC:
	.4byte gUnknown_030003CC
	THUMB_FUNC_END sub_0812C494

