	THUMB_FUNC_START sub_0802B8D4
sub_0802B8D4: @ 0x0802B8D4
	push {r4-r7,lr}
	bl 0x0800099C
	mov r1, #3
	and r1, r1, r0
	ldr r4, _0802B960  @ =gUnknown_0202A770
	ldr r0, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldrh r0, [r1]
	strb r0, [r4, #4]
	ldrh r0, [r1, #2]
	strb r0, [r4, #5]
	ldrh r2, [r1, #2]
	mov r0, #224
	lsl r0, r0, #3
	and r0, r0, r2
	lsr r0, r0, #8
	strb r0, [r4, #6]
	ldrh r0, [r1, #2]
	lsr r0, r0, #12
	strb r0, [r4, #1]
	bl 0x0800099C
	mov r1, #1
	and r0, r0, r1
	add r0, r0, #3
	strb r0, [r4, #7]
	ldr r5, [r4, #16]
	bl 0x0800099C
	add r2, r0, #0
	mov r0, #28
	and r2, r2, r0
	mov r3, #0
	ldrb r0, [r4, #6]
	cmp r3, r0
	bcs _0802B94E
	mov r0, #24
	add r0, r0, r4
	mov r12, r0
	mov r6, #0
	add r7, r4, #0
	mov r4, #28
_0802B92C:
	lsl r0, r3, #3
	add r0, r0, r12
	ldrh r1, [r5, #50]
	strh r1, [r0]
	ldrh r1, [r5, #54]
	strh r1, [r0, #2]
	strb r2, [r0, #4]
	strb r6, [r0, #5]
	strb r6, [r0, #6]
	add r2, r2, #4
	and r2, r2, r4
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldrb r0, [r7, #6]
	cmp r3, r0
	bcc _0802B92C
_0802B94E:
	ldr r0, _0802B960  @ =gUnknown_0202A770
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldrb r1, [r0, #7]
	strh r1, [r0, #8]
	pop {r4-r7}
	pop {r0}
	bx r0
_0802B960:
	.4byte gUnknown_0202A770
	THUMB_FUNC_END sub_0802B8D4

