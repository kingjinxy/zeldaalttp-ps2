	THUMB_FUNC_START sub_08034C5C
sub_08034C5C: @ 0x08034C5C
	push {r4,r5,lr}
	add r4, r0, #0
	mov r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #80
	ldrh r0, [r0]
	bl sub_08015DC0
	mov r1, #50
	ldrsh r2, [r4, r1]
	ldr r3, _08034C9C  @ =gUnknown_03000450
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
	lsl r2, r2, #1
	add r2, r2, #4
	add r0, r0, r2
	str r0, [r4, #124]
	ldrh r0, [r0]
	add r4, r4, #120
	strh r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_08034C9C:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08034C5C

