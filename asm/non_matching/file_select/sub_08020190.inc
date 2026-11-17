	THUMB_FUNC_START sub_08020190
sub_08020190: @ 0x08020190
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #1
	strb r0, [r5, #20]
	ldr r0, _08020270  @ =0x0000FFFF
	strh r0, [r5, #58]
	add r1, r5, #0
	add r1, r1, #46
	mov r0, #3
	strb r0, [r1]
	ldrb r1, [r5, #28]
	sub r0, r0, #52
	and r0, r0, r1
	mov r1, #16
	orr r0, r0, r1
	strb r0, [r5, #28]
	ldr r0, _08020274  @ =gUnknown_0813B64C
	str r0, [r5, #72]
	add r1, r5, #0
	add r1, r1, #126
	mov r0, #225
	lsl r0, r0, #2
	strh r0, [r1]
	add r0, r5, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r0, #0
	bne _08020252
	ldrh r2, [r5, #50]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	lsl r0, r0, #4
	add r0, r0, #16
	add r2, r5, #0
	add r2, r2, #120
	strh r0, [r2]
	ldrh r0, [r5, #54]
	and r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, #16
	add r0, r5, #0
	add r0, r0, #122
	strh r1, [r0]
	ldrh r0, [r5, #50]
	mov r2, #252
	lsl r2, r2, #4
	add r1, r2, #0
	and r1, r1, r0
	ldr r3, _08020278  @ =gUnknown_0201EFF8
	mov r0, #82
	add r0, r0, r5
	mov r12, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r3
	lsr r1, r1, #2
	ldrh r0, [r0]
	add r1, r1, r0
	add r0, r5, #0
	add r0, r0, #116
	strh r1, [r0]
	ldrh r0, [r5, #54]
	and r2, r2, r0
	mov r1, r12
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r4, r3, #2
	add r0, r0, r4
	lsr r2, r2, #2
	ldrh r0, [r0]
	add r2, r2, r0
	add r0, r5, #0
	add r0, r0, #118
	strh r2, [r0]
	ldrb r1, [r5, #11]
	lsl r1, r1, #4
	mov r2, r12
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r3
	ldrh r0, [r0]
	add r0, r0, #8
	add r1, r1, r0
	strh r1, [r5, #50]
	ldrb r1, [r5, #23]
	lsl r1, r1, #4
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r4
	ldrh r0, [r0]
	add r0, r0, #8
	add r1, r1, r0
	strh r1, [r5, #54]
	add r0, r5, #0
	bl sub_08008D90
_08020252:
	ldrh r0, [r5, #50]
	add r1, r5, #0
	add r1, r1, #112
	strh r0, [r1]
	ldrh r0, [r5, #54]
	add r1, r1, #2
	strh r0, [r1]
	add r0, r5, #0
	mov r1, #0
	bl sub_08003870
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08020270:
	.4byte 0x0000FFFF
_08020274:
	.4byte gUnknown_0813B64C
_08020278:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_08020190

