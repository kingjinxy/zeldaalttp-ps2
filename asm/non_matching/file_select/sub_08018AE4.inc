	THUMB_FUNC_START sub_08018AE4
sub_08018AE4: @ 0x08018AE4
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _08018B0C  @ =gUnknown_03000208
	ldrh r0, [r0, #2]
	cmp r0, #1
	bls _08018AF6
	add r0, r4, #0
	bl 0x080095A4
_08018AF6:
	ldr r0, _08018B10  @ =gUnknown_08139924
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_08018B0C:
	.4byte gUnknown_03000208
_08018B10:
	.4byte gUnknown_08139924
	THUMB_FUNC_END sub_08018AE4

