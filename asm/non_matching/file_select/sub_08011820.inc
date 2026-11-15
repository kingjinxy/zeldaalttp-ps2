	THUMB_FUNC_START sub_08011820
sub_08011820: @ 0x08011820
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	cmp r0, #135
	bhi _08011834
	add r0, r0, #8
	strb r0, [r4, #24]
	ldr r1, _0801186C  @ =gUnknown_02016D60
	mov r0, #1
	strb r0, [r1, #27]
_08011834:
	add r0, r4, #0
	bl sub_08011870
	ldr r3, _0801186C  @ =gUnknown_02016D60
	ldrb r1, [r3, #28]
	mov r0, #3
	and r0, r0, r1
	ldrb r1, [r4, #11]
	eor r0, r0, r1
	neg r1, r0
	orr r1, r1, r0
	asr r1, r1, #31
	mov r0, #2
	and r1, r1, r0
	ldrb r2, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r3, #26]
	cmp r0, #3
	bne _08011866
	add r0, r4, #0
	bl DeleteThisEntity
_08011866:
	pop {r4}
	pop {r0}
	bx r0
_0801186C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011820

