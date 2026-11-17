	THUMB_FUNC_START sub_080185D0
sub_080185D0: @ 0x080185D0
	push {r4,r5,lr}
	add r5, r0, #0
	ldr r0, _08018600  @ =gUnknown_03000208
	ldrh r0, [r0, #2]
	cmp r0, #1
	bls _080185E2
	add r0, r5, #0
	bl sub_080095A4
_080185E2:
	ldr r4, _08018604  @ =gUnknown_08139874
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
_08018600:
	.4byte gUnknown_03000208
_08018604:
	.4byte gUnknown_08139874
	THUMB_FUNC_END sub_080185D0

