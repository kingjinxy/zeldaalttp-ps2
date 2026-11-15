	THUMB_FUNC_START sub_08019054
sub_08019054: @ 0x08019054
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803DB4C
	ldr r1, _08019074  @ =gUnknown_08139968
	ldrb r0, [r4, #21]
	sub r0, r0, #5
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_08019074:
	.4byte gUnknown_08139968
	THUMB_FUNC_END sub_08019054

