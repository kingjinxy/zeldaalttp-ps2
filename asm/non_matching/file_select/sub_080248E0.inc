	THUMB_FUNC_START sub_080248E0
sub_080248E0: @ 0x080248E0
	add r3, r0, #0
	ldr r2, _08024910  @ =gUnknown_0842769E
	ldrb r1, [r3, #23]
	mov r0, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r3, #50]
	add r0, r0, r2
	strh r0, [r3, #50]
	add r1, r1, #1
	strb r1, [r3, #23]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #59
	bls _0802490C
	mov r0, #30
	strb r0, [r3, #23]
	mov r0, #24
	strb r0, [r3, #20]
_0802490C:
	bx lr
	.byte 0x00
	.byte 0x00
_08024910:
	.4byte gUnknown_0842769E
	THUMB_FUNC_END sub_080248E0

