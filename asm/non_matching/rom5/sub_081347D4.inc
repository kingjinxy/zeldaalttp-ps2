	THUMB_FUNC_START sub_081347D4
sub_081347D4: @ 0x081347D4
	push {lr}
	lsl r0, r0, #16
	ldr r2, _08134800  @ =gUnknown_083C3A3C
	ldr r1, _08134804  @ =gSongTable
	lsr r0, r0, #13
	add r0, r0, r1
	ldrh r3, [r0, #4]
	lsl r1, r3, #1
	add r1, r1, r3
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r2, [r1]
	ldr r1, [r2]
	ldr r0, [r0]
	cmp r1, r0
	bne _081347FA
	add r0, r2, #0
	bl sub_08134F20
_081347FA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134800:
	.4byte gUnknown_083C3A3C
_08134804:
	.4byte gSongTable
	THUMB_FUNC_END sub_081347D4

