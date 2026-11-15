	THUMB_FUNC_START sub_0802F688
sub_0802F688: @ 0x0802F688
	push {r4,r5,lr}
	ldr r0, _0802F6C4  @ =gUnknown_0202A4F8
	ldr r1, [r0]
	mov r2, #8
	orr r1, r1, r2
	str r1, [r0]
	mov r4, #0
	ldr r5, _0802F6C8  @ =gUnknown_03006A58
_0802F698:
	lsl r0, r4, #3
	add r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, r5
	ldr r0, [r0]
	lsl r1, r4, #2
	ldr r2, _0802F6CC  @ =gUnknown_0842788C
	add r1, r1, r2
	mov r2, #120
	bl sub_0803D7E8
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bls _0802F698
	ldr r0, _0802F6D0  @ =0x00000205
	bl play_sound
	pop {r4,r5}
	pop {r0}
	bx r0
_0802F6C4:
	.4byte gUnknown_0202A4F8
_0802F6C8:
	.4byte gUnknown_03006A58
_0802F6CC:
	.4byte gUnknown_0842788C
_0802F6D0:
	.4byte 0x00000205
	THUMB_FUNC_END sub_0802F688

