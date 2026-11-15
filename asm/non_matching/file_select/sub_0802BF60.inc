	THUMB_FUNC_START sub_0802BF60
sub_0802BF60: @ 0x0802BF60
	push {r4,r5,lr}
	ldr r5, _0802BFBC  @ =gUnknown_0202A3F0
	mov r4, #128
	lsl r4, r4, #1
	add r0, r5, #0
	add r1, r4, #0
	bl zero_memory
	ldr r0, _0802BFC0  @ =gUnknown_02016C50
	add r1, r4, #0
	bl zero_memory
	mov r2, #0
	mov r3, #255
_0802BF7C:
	lsl r1, r2, #2
	add r1, r1, r5
	ldrb r0, [r1]
	orr r0, r0, r3
	strb r0, [r1]
	ldrb r0, [r1, #1]
	orr r0, r0, r3
	strb r0, [r1, #1]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #7
	bls _0802BF7C
	mov r2, #43
	ldr r4, _0802BFBC  @ =gUnknown_0202A3F0
	mov r3, #255
_0802BF9C:
	lsl r1, r2, #2
	add r1, r1, r4
	ldrb r0, [r1]
	orr r0, r0, r3
	strb r0, [r1]
	ldrb r0, [r1, #1]
	orr r0, r0, r3
	strb r0, [r1, #1]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #63
	bls _0802BF9C
	pop {r4,r5}
	pop {r0}
	bx r0
_0802BFBC:
	.4byte gUnknown_0202A3F0
_0802BFC0:
	.4byte gUnknown_02016C50
	THUMB_FUNC_END sub_0802BF60

