	THUMB_FUNC_START sub_0801F0A0
sub_0801F0A0: @ 0x0801F0A0
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r5, _0801F0C0  @ =gUnknown_0813AFE4
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r5
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801F0C0:
	.4byte gUnknown_0813AFE4
	THUMB_FUNC_END sub_0801F0A0

