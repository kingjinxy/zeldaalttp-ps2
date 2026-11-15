	THUMB_FUNC_START sub_0802F9F8
sub_0802F9F8: @ 0x0802F9F8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r3, _0802FA30  @ =gUnknown_0202A7E0
	lsl r4, r0, #2
	add r4, r4, r0
	lsl r4, r4, #2
	add r3, r3, #12
	add r4, r4, r3
	ldr r0, [r4]
	lsr r1, r1, #22
	ldr r3, _0802FA34  @ =gUnknown_0842789C
	add r1, r1, r3
	bl sub_0803D7E8
	ldr r1, [r4]
	mov r0, #1
	strb r0, [r1, #20]
	ldr r0, _0802FA38  @ =0x00000201
	bl play_sound
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802FA30:
	.4byte gUnknown_0202A7E0
_0802FA34:
	.4byte gUnknown_0842789C
_0802FA38:
	.4byte 0x00000201
	THUMB_FUNC_END sub_0802F9F8

