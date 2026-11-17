	THUMB_FUNC_START sub_0801F6E8
sub_0801F6E8: @ 0x0801F6E8
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #11]
	cmp r0, #0
	bne _0801F73C
	add r0, r5, #0
	bl sub_080095A4
	ldr r4, _0801F738  @ =gUnknown_0813B1CC
	add r0, r5, #0
	bl sub_080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	add r0, r5, #0
	bl sub_0801F970
	add r0, r5, #0
	bl GetNextFrame
	add r0, r5, #0
	bl sub_08008D90
	ldrb r2, [r5, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r5, #31]
	ldrb r0, [r5, #29]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r5, #29]
	b _0801F742
_0801F738:
	.4byte gUnknown_0813B1CC
_0801F73C:
	add r0, r5, #0
	bl sub_0801F8D8
_0801F742:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F6E8

