	THUMB_FUNC_START sub_0805842C
sub_0805842C: @ 0x0805842C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #1
	add r1, r1, r0
	lsl r0, r1, #1
	ldr r1, _080584E4  @ =gUnknown_08428F04
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r2, #50]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2, #50]
	add r1, r1, #2
	str r1, [r0]
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r2, #54]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2, #54]
	add r1, r1, #2
	str r1, [r0]
	ldr r1, [r7]
	ldr r0, [r7, #4]
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #33
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080584E4:
	.4byte gUnknown_08428F04
	THUMB_FUNC_END sub_0805842C

