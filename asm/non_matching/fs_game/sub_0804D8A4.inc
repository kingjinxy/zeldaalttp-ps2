	THUMB_FUNC_START sub_0804D8A4
sub_0804D8A4: @ 0x0804D8A4
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
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
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
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
	ldrb r1, [r0, #10]
	ldr r0, [r7]
	bl sub_08003870
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	lsl r1, r0, #3
	ldr r0, _0804D988  @ =gUnknown_08428840
	add r1, r0, r1
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #2]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	mov r3, #4
	ldrsh r2, [r1, r3]
	str r2, [r0, #12]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #6]
	add r3, r2, #0
	lsl r1, r3, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #7]
	add r3, r2, #0
	lsl r1, r3, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #8
	beq _0804D98C
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #9
	beq _0804D98C
	b _0804D9F8
	.byte 0x00
	.byte 0x00
_0804D988:
	.4byte gUnknown_08428840
_0804D98C:
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #255
	and r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	bl sub_0800099C
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, [r7]
	mov r3, #31
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	add r2, r2, #112
	ldrh r3, [r1, #54]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	add r3, r2, #0
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r1, #54]
	add r1, r2, #0
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
_0804D9F8:
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _0804DA1C
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_0804DA1C:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804D8A4

