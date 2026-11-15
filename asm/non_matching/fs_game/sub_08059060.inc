	THUMB_FUNC_START sub_08059060
sub_08059060: @ 0x08059060
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _08059114
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldr r2, _0805918C  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #128
	mov r3, #0
	ldrsh r1, [r2, r3]
	asr r2, r1, #4
	add r1, r2, #0
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #88
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r2, _0805918C  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #130
	mov r3, #0
	ldrsh r1, [r2, r3]
	asr r2, r1, #4
	add r1, r2, #0
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #48
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	ldr r0, [r7]
	bl sub_08003870
_08059114:
	ldr r1, _0805918C  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #128
	mov r2, #0
	ldrsh r0, [r1, r2]
	cmp r0, #0
	beq _08059190
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r2, _0805918C  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #128
	mov r3, #0
	ldrsh r1, [r2, r3]
	asr r2, r1, #4
	add r1, r2, #0
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #88
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r2, _0805918C  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #130
	mov r3, #0
	ldrsh r1, [r2, r3]
	asr r2, r1, #4
	add r1, r2, #0
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #48
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _0805919C
_0805918C:
	.4byte gUnknown_03006C80
_08059190:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_0805919C:
	ldr r0, [r7]
	bl GetNextFrame
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08059060

	.byte 0x00
	.byte 0x00
