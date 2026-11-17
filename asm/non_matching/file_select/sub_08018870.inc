	THUMB_FUNC_START sub_08018870
sub_08018870: @ 0x08018870
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _08018898  @ =gUnknown_03000208
	ldrh r0, [r0, #2]
	cmp r0, #1
	bls _08018882
	add r0, r4, #0
	bl sub_080095A4
_08018882:
	ldr r0, _0801889C  @ =gUnknown_081398F4
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_08018898:
	.4byte gUnknown_03000208
_0801889C:
	.4byte gUnknown_081398F4
	THUMB_FUNC_END sub_08018870

