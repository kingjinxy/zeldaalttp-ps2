	THUMB_FUNC_START sub_0802D6F0
sub_0802D6F0: @ 0x0802D6F0
	push {r4-r6,lr}
	ldr r2, _0802D738  @ =gUnknown_0813D798
	mov r3, #0
	ldr r6, _0802D73C  @ =gUnknown_03000420
	add r5, r6, #0
	ldr r4, _0802D740  @ =gUnknown_0202D118
_0802D6FC:
	ldrb r1, [r5, #3]
	lsl r1, r1, #11
	add r1, r1, r4
	add r0, r3, #5
	lsl r0, r0, #6
	add r1, r1, r0
	ldrh r0, [r2]
	strh r0, [r1]
	ldrh r0, [r2, #2]
	strh r0, [r1, #2]
	ldrh r0, [r2, #4]
	strh r0, [r1, #4]
	ldrh r0, [r2, #6]
	strh r0, [r1, #6]
	ldrh r0, [r2, #8]
	strh r0, [r1, #8]
	ldrh r0, [r2, #10]
	strh r0, [r1, #10]
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r2, r2, #12
	cmp r3, #8
	bls _0802D6FC
	mov r0, #1
	strb r0, [r6, #2]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D738:
	.4byte gUnknown_0813D798
_0802D73C:
	.4byte gUnknown_03000420
_0802D740:
	.4byte gUnknown_0202D118
	THUMB_FUNC_END sub_0802D6F0

