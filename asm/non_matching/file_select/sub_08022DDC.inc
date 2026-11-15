	THUMB_FUNC_START sub_08022DDC
sub_08022DDC: @ 0x08022DDC
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _08022E04  @ =gUnknown_03000208
	ldrh r0, [r0, #2]
	cmp r0, #1
	bls _08022DEE
	add r0, r4, #0
	bl 0x080095A4
_08022DEE:
	ldr r0, _08022E08  @ =gUnknown_0813BDB4
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_08022E04:
	.4byte gUnknown_03000208
_08022E08:
	.4byte gUnknown_0813BDB4
	THUMB_FUNC_END sub_08022DDC

