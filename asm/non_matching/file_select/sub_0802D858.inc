	THUMB_FUNC_START sub_0802D858
sub_0802D858: @ 0x0802D858
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #14
	ldr r1, _0802D8A8  @ =gOAMBuffer
	add r0, r0, r1
	ldr r4, _0802D8AC  @ =gUnknown_02030A70
	ldr r6, _0802D8B0  @ =gUnknown_0813D73D
	ldr r5, _0802D8B4  @ =gUnknown_03000420
	ldrb r1, [r5, #12]
	lsl r1, r1, #1
	add r1, r1, r6
	mov r2, #0
	ldrsb r2, [r1, r2]
	add r2, r2, #212
	ldr r3, _0802D8B8  @ =0x000001FF
	add r1, r3, #0
	and r2, r2, r1
	ldrh r3, [r4, #2]
	ldr r1, _0802D8BC  @ =0xFFFFFE00
	and r1, r1, r3
	orr r1, r1, r2
	strh r1, [r4, #2]
	ldrb r1, [r5, #12]
	lsl r1, r1, #1
	add r1, r1, #1
	add r1, r1, r6
	ldrb r1, [r1]
	add r1, r1, #10
	strb r1, [r4]
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r0, r0, #2
	ldrh r1, [r4]
	strh r1, [r0]
	ldrh r1, [r4, #2]
	strh r1, [r0, #2]
	pop {r4-r6}
	pop {r0}
	bx r0
_0802D8A8:
	.4byte gOAMBuffer
_0802D8AC:
	.4byte gUnknown_02030A70
_0802D8B0:
	.4byte gUnknown_0813D73D
_0802D8B4:
	.4byte gUnknown_03000420
_0802D8B8:
	.4byte 0x000001FF
_0802D8BC:
	.4byte 0xFFFFFE00
	THUMB_FUNC_END sub_0802D858

