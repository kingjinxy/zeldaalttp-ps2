	THUMB_FUNC_START sub_0802B030
sub_0802B030: @ 0x0802B030
	push {r4,lr}
	add r4, r0, #0
	mov r3, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r2, [r4, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	ldrh r2, [r4, #50]
	mov r1, #252
	lsl r1, r1, #2
	add r0, r1, #0
	and r0, r0, r2
	add r0, r0, #8
	strh r0, [r4, #50]
	ldrh r0, [r4, #54]
	and r1, r1, r0
	add r1, r1, #8
	strh r1, [r4, #54]
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _0802B0A4  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	add r2, r4, #0
	add r2, r2, #124
	strh r1, [r2]
	mov r0, #128
	lsl r0, r0, #7
	ldrh r1, [r2]
	sub r2, r2, #44
	ldrh r2, [r2]
	bl 0x08008F48
	ldrb r1, [r4, #10]
	add r0, r4, #0
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
_0802B0A4:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_0802B030

