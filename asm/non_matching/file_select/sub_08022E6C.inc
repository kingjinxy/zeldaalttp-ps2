	THUMB_FUNC_START sub_08022E6C
sub_08022E6C: @ 0x08022E6C
	push {lr}
	ldr r2, _08022E80  @ =gUnknown_0813BDBC
	ldrb r1, [r0, #21]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_08022E80:
	.4byte gUnknown_0813BDBC
	THUMB_FUNC_END sub_08022E6C

