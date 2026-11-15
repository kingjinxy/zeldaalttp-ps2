	THUMB_FUNC_START sub_08134780
sub_08134780: @ 0x08134780
	push {lr}
	lsl r0, r0, #16
	ldr r2, _081347AC  @ =gUnknown_083C3A3C
	ldr r1, _081347B0  @ =gSongTable
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
	beq _081347B4
	add r0, r1, #0
	add r1, r2, #0
	bl sub_08134E3C
	b _081347D0
	.byte 0x00
	.byte 0x00
_081347AC:
	.4byte gUnknown_083C3A3C
_081347B0:
	.4byte gSongTable
_081347B4:
	ldr r2, [r1, #4]
	ldrh r0, [r1, #4]
	cmp r0, #0
	bne _081347C6
	add r0, r1, #0
	add r1, r3, #0
	bl sub_08134E3C
	b _081347D0
_081347C6:
	cmp r2, #0
	bge _081347D0
	add r0, r1, #0
	bl sub_08134648
_081347D0:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08134780

