	THUMB_FUNC_START sub_08033EAC
sub_08033EAC: @ 0x08033EAC
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #11]
	cmp r0, #0
	bne _08033ECC
	ldr r0, _08033EC8  @ =gUnknown_0813D9B0
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	b _08033EE2
_08033EC8:
	.4byte gUnknown_0813D9B0
_08033ECC:
	ldr r0, _08033EE8  @ =gUnknown_0813D9C0
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl GetNextFrame
_08033EE2:
	pop {r4}
	pop {r0}
	bx r0
_08033EE8:
	.4byte gUnknown_0813D9C0
	THUMB_FUNC_END sub_08033EAC

