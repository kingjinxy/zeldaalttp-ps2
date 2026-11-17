	THUMB_FUNC_START sub_0801D41C
sub_0801D41C: @ 0x0801D41C
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r0, _0801D44C  @ =gUnknown_03000208
	ldrh r0, [r0, #2]
	cmp r0, #1
	bls _0801D42E
	add r0, r5, #0
	bl sub_080095A4
_0801D42E:
	ldr r4, _0801D450  @ =gUnknown_0813A874
	add r0, r5, #0
	bl sub_080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r4
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801D44C:
	.4byte gUnknown_03000208
_0801D450:
	.4byte gUnknown_0813A874
	THUMB_FUNC_END sub_0801D41C

