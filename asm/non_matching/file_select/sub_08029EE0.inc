	THUMB_FUNC_START sub_08029EE0
sub_08029EE0: @ 0x08029EE0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #4
	bne _08029EF0
	mov r0, #6
	strb r0, [r4, #20]
	b _08029F98
_08029EF0:
	ldrb r2, [r4, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	mov r3, #4
	neg r3, r3
	add r0, r3, #0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _08029F88
	ldr r0, [r4, #116]
	sub r0, r0, #1
	str r0, [r4, #116]
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	bne _08029F98
	mov r0, #5
	str r0, [r4, #116]
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08029F64
	mov r0, #15
	bl sub_08012494
	add r1, r0, #0
	cmp r1, #0
	beq _08029F5C
	ldrh r0, [r4, #50]
	strh r0, [r1, #50]
	ldrh r0, [r4, #54]
	strh r0, [r1, #54]
	ldrh r0, [r4, #58]
	strh r0, [r1, #58]
	ldrb r0, [r4, #10]
	strb r0, [r1, #10]
	mov r0, #3
	strb r0, [r1, #11]
	str r4, [r1, #84]
	ldrb r0, [r4, #23]
	ldrb r2, [r4, #24]
	cmp r0, r2
	bne _08029F5C
	str r1, [r4, #88]
_08029F5C:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08029F98
_08029F64:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldr r1, _08029F84  @ =gUnknown_0813D44A
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	str r0, [r4, #116]
	ldrb r1, [r4, #28]
	add r0, r3, #0
	and r0, r0, r1
	strb r0, [r4, #28]
	b _08029F98
	.byte 0x00
	.byte 0x00
_08029F84:
	.4byte gUnknown_0813D44A
_08029F88:
	bl 0x0800099C
	mov r1, #7
	and r0, r0, r1
	add r0, r0, #1
	strb r0, [r4, #24]
	mov r0, #5
	str r0, [r4, #116]
_08029F98:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08029EE0

	.byte 0x00
	.byte 0x00
