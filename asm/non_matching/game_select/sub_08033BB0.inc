	THUMB_FUNC_START sub_08033BB0
sub_08033BB0: @ 0x08033BB0
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_08034248
	ldr r0, _08033BD8  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08033BD0
	add r0, r4, #0
	bl DeleteThisEntity
_08033BD0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033BD8:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08033BB0

