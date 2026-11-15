	THUMB_FUNC_START sub_0801A754
sub_0801A754: @ 0x0801A754
	push {r4,r5,lr}
	add r4, r0, #0
	add r0, r0, #80
	ldrh r0, [r0]
	bl sub_08015DC0
	mov r1, #50
	ldrsh r2, [r4, r1]
	ldr r3, _0801A790  @ =gUnknown_03000450
	ldrh r1, [r3, #24]
	sub r2, r2, r1
	asr r2, r2, #4
	mov r5, #54
	ldrsh r1, [r4, r5]
	ldrh r3, [r3, #26]
	sub r1, r1, r3
	asr r1, r1, #4
	lsl r1, r1, #6
	orr r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r1, _0801A794  @ =0x00002004
	add r0, r0, r1
	add r0, r0, r2
	add r4, r4, #122
	ldrb r1, [r4]
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_0801A790:
	.4byte gUnknown_03000450
_0801A794:
	.4byte 0x00002004
	THUMB_FUNC_END sub_0801A754

