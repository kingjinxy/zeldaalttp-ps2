	THUMB_FUNC_START sub_08028610
sub_08028610: @ 0x08028610
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	ldrh r0, [r7, #50]
	mov r4, #63
	add r2, r4, #0
	and r2, r2, r0
	lsl r2, r2, #3
	add r2, r2, #8
	add r0, r7, #0
	add r0, r0, #124
	mov r1, #0
	mov r8, r1
	strh r2, [r0]
	ldrh r0, [r7, #50]
	mov r3, #252
	lsl r3, r3, #4
	add r1, r3, #0
	and r1, r1, r0
	ldr r5, _0802869C  @ =gUnknown_0201EFF8
	mov r6, #82
	ldrb r0, [r6, r7]
	lsl r0, r0, #2
	add r0, r0, r5
	lsr r1, r1, #2
	ldrh r0, [r0]
	add r1, r1, r0
	add r2, r2, r1
	strh r2, [r7, #50]
	ldrh r0, [r7, #54]
	and r4, r4, r0
	lsl r4, r4, #3
	add r4, r4, #8
	add r0, r7, #0
	add r0, r0, #126
	strh r4, [r0]
	ldrh r0, [r7, #54]
	and r3, r3, r0
	ldrb r0, [r6, r7]
	lsl r0, r0, #2
	add r5, r5, #2
	add r0, r0, r5
	lsr r3, r3, #2
	ldrh r0, [r0]
	add r3, r3, r0
	add r4, r4, r3
	strh r4, [r7, #54]
	ldrb r0, [r6, r7]
	ldrb r1, [r7, #10]
	bl sub_08012F84
	str r0, [r7, #120]
	mov r0, r8
	str r0, [r7, #112]
	ldrb r0, [r7, #20]
	add r0, r0, #1
	strb r0, [r7, #20]
	add r1, r7, #0
	add r1, r1, #118
	mov r0, #1
	strh r0, [r1]
	add r0, r7, #0
	bl sub_08008D90
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0802869C:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_08028610

