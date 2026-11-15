	THUMB_FUNC_START sub_0804F760
sub_0804F760: @ 0x0804F760
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	mov r1, #128
	str r1, [r0, #12]
	add r0, r7, #0
	add r0, r0, #10
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804F858  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804F858  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	lsl r2, r1, #3
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r1, #50]
	ldrh r2, [r2]
	add r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r1, [r1, #54]
	ldrh r2, [r2]
	add r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, _0804F85C  @ =gUnknown_0813FEAC
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #72]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #1
	beq _0804F860
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	b _0804F868
	.byte 0x00
	.byte 0x00
_0804F858:
	.4byte gUnknown_03000450
_0804F85C:
	.4byte gUnknown_0813FEAC
_0804F860:
	ldr r0, [r7]
	mov r1, #1
	bl sub_08003870
_0804F868:
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #2
	beq _0804F8D8
	cmp r0, #2
	bgt _0804F87A
	cmp r0, #1
	beq _0804F882
	b _0804FB16
_0804F87A:
	cmp r0, #3
	bne _0804F880
	b _0804F9A4
_0804F880:
	b _0804FB16
_0804F882:
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #1
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #64
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #65
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	b _0804FB26
_0804F8D8:
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #1
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #2
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #64
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #65
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #66
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #128
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #129
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #130
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	b _0804FB26
_0804F9A4:
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #1
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #2
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #3
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #64
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #65
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #66
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #67
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #128
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #129
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #130
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #131
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #192
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #193
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #194
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	add r0, r0, #195
	add r1, r0, #0
	lsl r0, r1, #16
	lsr r1, r0, #16
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	b _0804FB26
_0804FB16:
	add r0, r7, #0
	add r0, r0, #10
	ldrh r1, [r0]
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0804FF80
	b _0804FB26
_0804FB26:
	mov r0, #21
	bl sub_08003DFC
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804F760

