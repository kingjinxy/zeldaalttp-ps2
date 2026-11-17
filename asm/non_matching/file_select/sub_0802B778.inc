	THUMB_FUNC_START sub_0802B778
sub_0802B778: @ 0x0802B778
	push {r4,r5,lr}
	ldr r0, _0802B7E0  @ =gUnknown_02016328
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802B812
	ldr r5, _0802B7E4  @ =gUnknown_0202A770
	ldrh r0, [r5, #8]
	sub r1, r0, #1
	strh r1, [r5, #8]
	lsl r0, r1, #16
	cmp r0, #0
	bne _0802B7FA
	bl sub_0802C148
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bls _0802B7F4
	ldr r0, _0802B7E8  @ =gUnknown_0201EFF0
	ldrb r0, [r0]
	cmp r0, #4
	bhi _0802B7F4
	bl sub_0800099C
	ldr r4, _0802B7EC  @ =gUnknown_03006A30
	ldr r1, _0802B7F0  @ =gUnknown_03006C80
	ldrb r1, [r1]
	bl __umodsi3
	mov r1, #3
	and r0, r0, r1
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r4, r4, #40
	add r1, r1, r4
	ldr r0, [r1]
	str r0, [r5, #16]
	mov r0, #1
	bl sub_0802B820
	cmp r0, #0
	bne _0802B7D8
	mov r0, #0
	bl sub_0802B820
	cmp r0, #0
	beq _0802B7F4
_0802B7D8:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	b _0802B812
_0802B7E0:
	.4byte gUnknown_02016328
_0802B7E4:
	.4byte gUnknown_0202A770
_0802B7E8:
	.4byte gUnknown_0201EFF0
_0802B7EC:
	.4byte gUnknown_03006A30
_0802B7F0:
	.4byte gUnknown_03006C80
_0802B7F4:
	bl sub_0802BF30
	b _0802B812
_0802B7FA:
	lsl r0, r1, #16
	lsr r0, r0, #16
	cmp r0, #1
	bne _0802B812
	ldr r1, _0802B818  @ =gUnknown_0201EFF0
	mov r0, #0
	strb r0, [r1]
	ldr r2, _0802B81C  @ =gUnknown_03000208
	ldrh r0, [r2]
	mov r1, #4
	orr r0, r0, r1
	strh r0, [r2]
_0802B812:
	pop {r4,r5}
	pop {r0}
	bx r0
_0802B818:
	.4byte gUnknown_0201EFF0
_0802B81C:
	.4byte gUnknown_03000208
	THUMB_FUNC_END sub_0802B778

