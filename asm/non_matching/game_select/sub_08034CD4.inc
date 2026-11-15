	THUMB_FUNC_START sub_08034CD4
sub_08034CD4: @ 0x08034CD4
	push {lr}
	ldr r2, _08034CE8  @ =gUnknown_08427B2C
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08034CE8:
	.4byte gUnknown_08427B2C
	THUMB_FUNC_END sub_08034CD4

