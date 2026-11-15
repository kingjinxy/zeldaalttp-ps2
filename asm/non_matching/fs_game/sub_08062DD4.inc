	THUMB_FUNC_START sub_08062DD4
sub_08062DD4: @ 0x08062DD4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08062E98
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
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
	ldr r0, _08062E58  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	cmp r1, #1
	bne _08062E60
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	add r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #1
	ldr r1, _08062E5C  @ =gUnknown_08141FC4
	add r0, r1, r0
	str r0, [r7, #4]
	b _08062E88
_08062E58:
	.4byte gUnknown_03006C80
_08062E5C:
	.4byte gUnknown_08141FC4
_08062E60:
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r3, r1, #0
	lsl r2, r3, #1
	add r2, r2, r1
	lsl r1, r2, #1
	add r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #1
	ldr r1, _08062EA0  @ =gUnknown_08141EA4
	add r0, r1, r0
	str r0, [r7, #4]
_08062E88:
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_08062FD8
	ldr r0, [r7]
	mov r1, #17
	bl 0x08003E10
_08062E98:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_08062EA0:
	.4byte gUnknown_08141EA4
	THUMB_FUNC_END sub_08062DD4

