	THUMB_FUNC_START sub_08134734
sub_08134734: @ 0x08134734
	push {lr}
	lsl r0, r0, #16
	ldr r2, _08134760  @ =gUnknown_083C3A3C
	ldr r1, _08134764  @ =gSongTable
	lsr r0, r0, #13
	add r0, r0, r1
	ldrh r3, [r0, #4]
	lsl r1, r3, #1
	add r1, r1, r3
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	ldr r3, [r1]
	ldr r2, [r0]
	cmp r3, r2
	beq _08134768
	add r0, r1, #0
	add r1, r2, #0
	bl sub_08134E3C
	b _0813477C
	.byte 0x00
	.byte 0x00
_08134760:
	.4byte gUnknown_083C3A3C
_08134764:
	.4byte gSongTable
_08134768:
	ldr r2, [r1, #4]
	ldrh r0, [r1, #4]
	cmp r0, #0
	beq _08134774
	cmp r2, #0
	bge _0813477C
_08134774:
	add r0, r1, #0
	add r1, r3, #0
	bl sub_08134E3C
_0813477C:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08134734

