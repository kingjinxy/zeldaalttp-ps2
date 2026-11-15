	THUMB_FUNC_START sub_08035338
sub_08035338: @ 0x08035338
	push {r4,lr}
	add r3, r0, #0
	ldr r1, _0803536C  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r4, r0, r1
	ldr r2, [r4]
	ldr r1, [r3, #96]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, r1
	bne _08035366
	ldr r0, _08035370  @ =gUnknown_08137B10
	ldrb r1, [r3, #11]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bic r2, r2, r0
	str r2, [r4]
	add r0, r3, #0
	bl DeleteThisEntity
_08035366:
	pop {r4}
	pop {r0}
	bx r0
_0803536C:
	.4byte gUnknown_0201F000
_08035370:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08035338

