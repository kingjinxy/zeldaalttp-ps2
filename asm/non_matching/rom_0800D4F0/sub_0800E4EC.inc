	THUMB_FUNC_START sub_0800E4EC
sub_0800E4EC: @ 0x0800E4EC
	push {r4-r7,lr}
	mov r7, #0
	ldr r2, _0800E51C  @ =gUnknown_0202A5E0
	ldrb r3, [r2, #4]
	lsl r1, r3, #27
	lsr r1, r1, #27
	add r1, r1, r0
	mov r0, #31
	and r1, r1, r0
	mov r5, #32
	neg r5, r5
	add r4, r5, #0
	and r4, r4, r3
	orr r4, r4, r1
	strb r4, [r2, #4]
	lsl r1, r4, #27
	lsr r0, r1, #27
	add r6, r2, #0
	cmp r0, #17
	bhi _0800E520
	and r4, r4, r5
	mov r0, #17
	b _0800E52A
	.byte 0x00
	.byte 0x00
_0800E51C:
	.4byte gUnknown_0202A5E0
_0800E520:
	lsr r0, r1, #27
	cmp r0, #19
	bls _0800E530
	and r4, r4, r5
	mov r0, #20
_0800E52A:
	orr r4, r4, r0
	strb r4, [r6, #4]
	mov r7, #1
_0800E530:
	ldr r4, _0800E568  @ =gUnknown_020309B0
	ldr r3, _0800E56C  @ =gUnknown_03000420
	ldrb r1, [r3, #3]
	lsl r1, r1, #3
	add r1, r1, r4
	ldrb r0, [r6, #4]
	lsl r0, r0, #27
	lsr r0, r0, #27
	strb r0, [r1, #5]
	ldrb r2, [r3, #3]
	lsl r2, r2, #3
	add r2, r2, r4
	ldrb r1, [r6, #4]
	lsl r1, r1, #27
	lsr r1, r1, #27
	mov r0, #20
	sub r0, r0, r1
	strb r0, [r2, #7]
	ldrb r0, [r3, #3]
	lsl r0, r0, #3
	add r0, r0, r4
	mov r1, #1
	strb r1, [r0, #1]
	add r0, r7, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0800E568:
	.4byte gUnknown_020309B0
_0800E56C:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0800E4EC

