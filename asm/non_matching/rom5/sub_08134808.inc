	THUMB_FUNC_START sub_08134808
sub_08134808: @ 0x08134808
	push {lr}
	lsl r0, r0, #16
	ldr r2, _08134834  @ =gUnknown_083C3A3C
	ldr r1, _08134838  @ =gSongTable
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
	bne _0813482E
	add r0, r2, #0
	bl sub_08134648
_0813482E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134834:
	.4byte gUnknown_083C3A3C
_08134838:
	.4byte gSongTable
	THUMB_FUNC_END sub_08134808

