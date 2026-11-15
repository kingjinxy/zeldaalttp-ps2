	THUMB_FUNC_START sub_0802D7E8
sub_0802D7E8: @ 0x0802D7E8
	ldr r1, _0802D7FC  @ =gUnknown_03000420
	ldrb r0, [r1, #12]
	cmp r0, #7
	bne _0802D800
	ldrb r0, [r1, #14]
	mov r1, #7
	cmp r0, #2
	bne _0802D802
	mov r1, #4
	b _0802D802
_0802D7FC:
	.4byte gUnknown_03000420
_0802D800:
	ldrb r1, [r1, #12]
_0802D802:
	ldr r3, _0802D818  @ =gUnknown_02030A70
	ldr r0, _0802D81C  @ =gUnknown_0813D72C
	add r0, r1, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldrb r2, [r3, #5]
	mov r0, #15
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #5]
	bx lr
_0802D818:
	.4byte gUnknown_02030A70
_0802D81C:
	.4byte gUnknown_0813D72C
	THUMB_FUNC_END sub_0802D7E8

