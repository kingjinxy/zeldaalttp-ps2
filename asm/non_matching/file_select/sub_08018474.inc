	THUMB_FUNC_START sub_08018474
sub_08018474: @ 0x08018474
	add r3, r0, #0
	ldr r1, _080184BC  @ =gUnknown_081397A0
	ldrb r0, [r3, #10]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r3, #30]
	add r1, r3, #0
	add r1, r1, #46
	mov r0, #0
	strb r0, [r1]
	ldr r0, [r3, #84]
	add r0, r0, #126
	ldrh r1, [r0]
	add r0, r3, #0
	add r0, r0, #32
	strb r1, [r0]
	ldr r0, [r3, #84]
	add r0, r0, #126
	ldrh r1, [r0]
	lsr r1, r1, #8
	lsl r1, r1, #6
	ldrb r2, [r3, #28]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
	mov r0, #44
	strb r0, [r3, #27]
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	bx lr
_080184BC:
	.4byte gUnknown_081397A0
	THUMB_FUNC_END sub_08018474

