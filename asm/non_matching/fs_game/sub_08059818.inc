	THUMB_FUNC_START sub_08059818
sub_08059818: @ 0x08059818
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	mov r0, #57
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080598C4
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _080598CC  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #34]
	lsr r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	mov r3, #63
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #4
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	mov r3, #252
	lsl r3, r3, #4
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	lsr r2, r1, #2
	add r1, r2, #0
	mov r2, #8
	orr r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_080598C4:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
_080598CC:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08059818

