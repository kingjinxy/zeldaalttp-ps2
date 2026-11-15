	THUMB_FUNC_START sub_080145D8
sub_080145D8: @ 0x080145D8
	push {r4-r6,lr}
	lsl r0, r0, #16
	lsr r6, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	add r0, r6, #0
	add r1, r5, #0
	bl sub_080145B4
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801464C
	add r0, r6, #0
	sub r0, r0, #64
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145B4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145B4
	lsl r0, r0, #24
	lsr r0, r0, #23
	orr r4, r4, r0
	add r0, r6, #0
	add r0, r0, #64
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145B4
	lsl r0, r0, #24
	lsr r0, r0, #22
	orr r4, r4, r0
	sub r0, r6, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	bl sub_080145B4
	lsl r0, r0, #24
	lsr r0, r0, #21
	orr r4, r4, r0
	ldr r0, _08014654  @ =gUnknown_0813815C
	lsl r4, r4, #1
	add r4, r4, r0
	ldrh r0, [r4]
	add r1, r6, #0
	add r2, r5, #0
	bl sub_080144F0
_0801464C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08014654:
	.4byte gUnknown_0813815C
	THUMB_FUNC_END sub_080145D8

