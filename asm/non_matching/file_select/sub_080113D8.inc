	THUMB_FUNC_START sub_080113D8
sub_080113D8: @ 0x080113D8
	push {lr}
	ldr r0, _080113F8  @ =0x80070000
	bl play_sound
	ldr r1, _080113FC  @ =0x040000B0
	ldrh r2, [r1, #10]
	ldr r0, _08011400  @ =0x0000C5FF
	and r0, r0, r2
	strh r0, [r1, #10]
	ldrh r2, [r1, #10]
	ldr r0, _08011404  @ =0x00007FFF
	and r0, r0, r2
	strh r0, [r1, #10]
	ldrh r0, [r1, #10]
	pop {r0}
	bx r0
_080113F8:
	.4byte 0x80070000
_080113FC:
	.4byte 0x040000B0
_08011400:
	.4byte 0x0000C5FF
_08011404:
	.4byte 0x00007FFF
	THUMB_FUNC_END sub_080113D8

