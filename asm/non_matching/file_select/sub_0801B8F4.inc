	THUMB_FUNC_START sub_0801B8F4
sub_0801B8F4: @ 0x0801B8F4
	push {r4-r7,lr}
	add r5, r0, #0
	mov r0, #50
	ldrsh r4, [r5, r0]
	ldr r6, _0801B988  @ =gUnknown_03000450
	ldrh r0, [r6, #24]
	sub r4, r4, r0
	asr r4, r4, #4
	mov r1, #54
	ldrsh r0, [r5, r1]
	ldrh r1, [r6, #26]
	sub r0, r0, r1
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	bl 0x0800099C
	ldr r2, _0801B98C  @ =gUnknown_0813A0DC
	mov r1, #31
	and r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r0, [r1]
	add r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r1, #128
	lsl r1, r1, #7
	add r0, r4, #0
	bl 0x080093C8
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801B9CA
	mov r1, #128
	lsl r1, r1, #8
	add r0, r4, #0
	bl 0x080093C8
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801B9CA
	mov r0, #63
	and r0, r0, r4
	lsl r0, r0, #4
	add r0, r0, #8
	ldrh r1, [r6, #24]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r2, r1, #16
	add r7, r2, #0
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r4
	lsr r0, r0, #2
	ldrh r1, [r6, #26]
	add r1, r1, #8
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r3, r1, #0
	ldr r0, [r5, #124]
	cmp r0, #0
	bne _0801B990
	add r0, r5, #0
	add r0, r0, #112
	strh r2, [r0]
	add r0, r0, #2
	strh r1, [r0]
	mov r0, #1
	b _0801B9D2
	.byte 0x00
	.byte 0x00
_0801B988:
	.4byte gUnknown_03000450
_0801B98C:
	.4byte gUnknown_0813A0DC
_0801B990:
	add r0, r5, #0
	add r0, r0, #120
	ldrh r0, [r0]
	sub r0, r7, r0
	add r1, r5, #0
	add r1, r1, #124
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r1]
	cmp r0, r1
	bhi _0801B9D0
	add r0, r5, #0
	add r0, r0, #122
	ldrh r0, [r0]
	sub r0, r3, r0
	add r1, r5, #0
	add r1, r1, #126
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r1]
	cmp r0, r1
	bhi _0801B9D0
	add r0, r5, #0
	add r0, r0, #112
	strh r7, [r0]
	add r0, r0, #2
	strh r3, [r0]
	mov r0, #1
	b _0801B9D2
_0801B9CA:
	add r0, r5, #0
	bl sub_0801BAD8
_0801B9D0:
	mov r0, #0
_0801B9D2:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801B8F4

