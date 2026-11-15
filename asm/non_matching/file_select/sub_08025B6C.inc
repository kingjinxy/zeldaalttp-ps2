	THUMB_FUNC_START sub_08025B6C
sub_08025B6C: @ 0x08025B6C
	push {lr}
	ldr r2, _08025B80  @ =gUnknown_0813C5B0
	ldrb r1, [r0, #20]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08025B80:
	.4byte gUnknown_0813C5B0
	THUMB_FUNC_END sub_08025B6C

