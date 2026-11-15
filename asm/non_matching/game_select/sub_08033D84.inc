	THUMB_FUNC_START sub_08033D84
sub_08033D84: @ 0x08033D84
	push {lr}
	add r2, r0, #0
	ldr r0, _08033D9C  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08033DA0
	add r0, r2, #0
	bl DeleteThisEntity
	b _08033DA6
_08033D9C:
	.4byte gUnknown_0201F000
_08033DA0:
	add r0, r2, #0
	bl GetNextFrame
_08033DA6:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033D84

	.byte 0x00
	.byte 0x00
