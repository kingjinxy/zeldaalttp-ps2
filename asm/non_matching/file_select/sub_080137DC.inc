	THUMB_FUNC_START sub_080137DC
sub_080137DC: @ 0x080137DC
	mov r1, #0
	ldr r3, _08013800  @ =gUnknown_0202A580
	mov r2, #0
_080137E2:
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r3
	str r2, [r0]
	strh r2, [r0, #4]
	strb r2, [r0, #6]
	strb r2, [r0, #7]
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #7
	bls _080137E2
	bx lr
	.byte 0x00
	.byte 0x00
_08013800:
	.4byte gUnknown_0202A580
	THUMB_FUNC_END sub_080137DC

