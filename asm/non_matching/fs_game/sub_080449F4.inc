	THUMB_FUNC_START sub_080449F4
sub_080449F4: @ 0x080449F4
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08044AA8
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #15
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08044A8E
	add r4, r7, #4
	ldr r5, _08044AA4  @ =gUnknown_0813EDC0
	bl sub_0800099C
	mov r1, #3
	and r0, r0, r1
	add r1, r5, r0
	ldrb r0, [r1]
	add r1, r0, #0
	strh r1, [r4]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	add r2, r7, #4
	ldrh r3, [r2]
	add r2, r3, #0
	ldrb r1, [r1]
	add r2, r2, r1
	add r1, r2, #0
	mov r2, #31
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #4
	ldrh r1, [r0]
	cmp r1, #0
	beq _08044A8E
	ldr r0, [r7]
	bl sub_08044BC4
_08044A8E:
	ldr r0, [r7]
	bl 0x08009694
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08044AA2
	ldr r0, [r7]
	bl sub_08044BC4
_08044AA2:
	b _08044AD6
_08044AA4:
	.4byte gUnknown_0813EDC0
_08044AA8:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
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
_08044AD6:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080449F4

	.byte 0x00
	.byte 0x00
