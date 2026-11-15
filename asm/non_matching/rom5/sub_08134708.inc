	THUMB_FUNC_START sub_08134708
sub_08134708: @ 0x08134708
	push {lr}
	lsl r0, r0, #16
	ldr r2, _0813472C  @ =gUnknown_083C3A3C
	ldr r1, _08134730  @ =gSongTable
	lsr r0, r0, #13
	add r0, r0, r1
	ldrh r3, [r0, #4]
	lsl r1, r3, #1
	add r1, r1, r3
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r2, [r1]
	ldr r1, [r0]
	add r0, r2, #0
	bl sub_08134E3C
	pop {r0}
	bx r0
_0813472C:
	.4byte gUnknown_083C3A3C
_08134730:
	.4byte gSongTable
	THUMB_FUNC_END sub_08134708

