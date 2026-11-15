	THUMB_FUNC_START sub_080144A0
sub_080144A0: @ 0x080144A0
	ldr r0, _080144DC  @ =gUnknown_0201F020
	ldr r2, _080144E0  @ =gUnknown_030004C0
	str r2, [r0]
	ldr r3, _080144E4  @ =gUnknown_08142374
	ldrh r0, [r3, #32]
	strh r0, [r2]
	ldr r0, _080144E8  @ =gUnknown_0200B320
	add r1, r2, #0
	sub r1, r1, #12
	str r1, [r0]
	ldrh r0, [r3, #34]
	strh r0, [r1]
	ldr r1, _080144EC  @ =gUnknown_02002440
	mov r0, #0
	sub r2, r2, #32
	mov r3, #0
_080144C0:
	str r3, [r1]
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r1, #8
	cmp r0, #7
	bls _080144C0
	ldrh r1, [r2]
	mov r3, #192
	lsl r3, r3, #3
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	bx lr
_080144DC:
	.4byte gUnknown_0201F020
_080144E0:
	.4byte gUnknown_030004C0
_080144E4:
	.4byte gUnknown_08142374
_080144E8:
	.4byte gUnknown_0200B320
_080144EC:
	.4byte gUnknown_02002440
	THUMB_FUNC_END sub_080144A0

