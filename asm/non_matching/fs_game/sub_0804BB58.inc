	THUMB_FUNC_START sub_0804BB58
sub_0804BB58: @ 0x0804BB58
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0804BB7E
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
	b _0804BC2A
_0804BB7E:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldrb r3, [r2, #23]
	add r2, r3, #7
	add r3, r2, #0
	mov r4, #15
	and r3, r3, r4
	ldrb r4, [r1, #30]
	mov r5, #240
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #4
	ldrb r2, [r0, #30]
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #112
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r0, [r7]
	ldr r1, _0804BC9C  @ =gUnknown_03006C80
	ldrb r2, [r1, #6]
	add r1, r2, #1
	add r2, r0, #0
	add r0, r0, #117
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804BC2A:
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #114
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
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
	ldr r1, _0804BCA0  @ =gUnknown_0813F990
	str r1, [r0, #72]
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_0804BC9C:
	.4byte gUnknown_03006C80
_0804BCA0:
	.4byte gUnknown_0813F990
	THUMB_FUNC_END sub_0804BB58

