	THUMB_FUNC_START sub_080D1EE4
sub_080D1EE4: @ 0x080D1EE4
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C36D8
	ldr r1, _080D1F08  @ =gRam
	ldr r2, _080D1F0C  @ =0x00000FB2
	add r1, r1, r2
	add r1, r4, r1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080D2020
	pop {r4}
	pop {r0}
	bx r0
_080D1F08:
	.4byte gRam
_080D1F0C:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080D1EE4

