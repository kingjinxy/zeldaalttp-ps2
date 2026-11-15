	THUMB_FUNC_START sub_0804B788
sub_0804B788: @ 0x0804B788
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
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
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #40
	ldrb r4, [r3]
	add r2, r4, #0
	add r2, r2, #254
	mov r3, #3
	and r1, r1, r3
	add r3, r1, #0
	add r1, r2, r3
	add r2, r0, #0
	add r0, r0, #40
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0804B82A
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	b _0804B8A0
_0804B82A:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #67
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	sub r0, r1, #1
	ldr r1, _0804B894  @ =gLCDRegisterBuffer
	ldrb r2, [r1]
	cmp r0, r2
	bne _0804B898
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #6
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
	mov r1, #1
	bl sub_08003870
	b _0804B8A0
_0804B894:
	.4byte gLCDRegisterBuffer
_0804B898:
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
_0804B8A0:
	ldr r0, [r7]
	bl sub_0804B8B0
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804B788

	.byte 0x00
	.byte 0x00
