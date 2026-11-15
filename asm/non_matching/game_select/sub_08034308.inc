	THUMB_FUNC_START sub_08034308
sub_08034308: @ 0x08034308
	push {lr}
	add r3, r0, #0
	ldr r2, _08034328  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	str r0, [r2]
	add r1, r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08034324
	add r0, r3, #0
	bl DeleteThisEntity
_08034324:
	pop {r0}
	bx r0
_08034328:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08034308

