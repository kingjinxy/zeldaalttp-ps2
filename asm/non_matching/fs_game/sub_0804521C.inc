	THUMB_FUNC_START sub_0804521C
sub_0804521C: @ 0x0804521C
	push {r7,lr}
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
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #180
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #252
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #196
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804532C  @ =0x0000FF90
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #207
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #243
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, _08045330  @ =gUnknown_0813F3F8
	str r1, [r0, #72]
	bl sub_0800099C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #124
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r0
	add r0, r2, #0
	strb r0, [r1]
	ldr r0, [r7]
	ldr r1, _08045334  @ =gUnknown_0813EFFC
	ldr r2, _08045338  @ =gUnknown_03006C80
	ldrb r3, [r2, #3]
	add r1, r1, r3
	add r2, r0, #0
	add r0, r0, #69
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #106
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl 0x08008D90
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	bl sub_0803DF84
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804532C:
	.4byte 0x0000FF90
_08045330:
	.4byte gUnknown_0813F3F8
_08045334:
	.4byte gUnknown_0813EFFC
_08045338:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0804521C

