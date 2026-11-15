	THUMB_FUNC_START sub_080279AC
sub_080279AC: @ 0x080279AC
	push {lr}
	ldr r2, _080279C0  @ =gUnknown_0813CDFC
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080279C0:
	.4byte gUnknown_0813CDFC
	THUMB_FUNC_END sub_080279AC

