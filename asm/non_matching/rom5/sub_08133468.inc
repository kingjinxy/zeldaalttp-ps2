	THUMB_FUNC_START sub_08133468
sub_08133468: @ 0x08133468
	push {r4,lr}
	add r2, r0, #0
	lsl r2, r2, #16
	mov r0, #192
	lsl r0, r0, #18
	ldrb r3, [r0, #7]
	lsl r3, r3, #6
	ldr r0, _081334B0  @ =gUnknown_0822BE66
	add r3, r3, r0
	mov r4, #31
	mov r1, #248
	lsl r1, r1, #13
	and r1, r1, r2
	lsr r1, r1, #15
	add r1, r1, r3
	lsr r0, r2, #21
	and r0, r0, r4
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	lsl r0, r0, #5
	ldrh r1, [r1]
	orr r0, r0, r1
	lsr r2, r2, #26
	and r2, r2, r4
	lsl r2, r2, #1
	add r2, r2, r3
	ldrh r1, [r2]
	lsl r1, r1, #10
	orr r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081334B0:
	.4byte gUnknown_0822BE66
	THUMB_FUNC_END sub_08133468

