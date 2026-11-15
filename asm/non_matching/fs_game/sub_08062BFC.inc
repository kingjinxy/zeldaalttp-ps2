	THUMB_FUNC_START sub_08062BFC
sub_08062BFC: @ 0x08062BFC
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	cmp r1, #0
	beq _08062C32
	add r0, r7, #0
	add r0, r0, #9
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r2, r1, #2
	add r1, r2, #0
	mov r2, #6
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _08062C52
_08062C32:
	add r0, r7, #0
	add r0, r0, #9
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r2, #4
	eor r1, r1, r2
	add r2, r1, #0
	add r1, r2, #2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08062C52:
	ldr r0, [r7, #4]
	ldr r1, _08062C80  @ =gUnknown_08141D38
	add r2, r7, #0
	add r2, r2, #9
	ldrb r3, [r2]
	add r2, r1, r3
	mov r1, #0
	ldrsb r1, [r2, r1]
	ldr r2, _08062C80  @ =gUnknown_08141D38
	add r3, r7, #0
	add r3, r3, #9
	ldrb r4, [r3]
	add r3, r4, #1
	add r4, r2, r3
	mov r2, #0
	ldrsb r2, [r4, r2]
	bl 0x08009394
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08062C84
	b _08062C9E
_08062C80:
	.4byte gUnknown_08141D38
_08062C84:
	add r0, r7, #0
	add r0, r0, #9
	add r1, r7, #0
	add r1, r1, #9
	ldrb r2, [r1]
	add r1, r2, #2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _08062C52
_08062C9E:
	add r0, r7, #0
	add r0, r0, #9
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r1, r0, #24
	add r0, r1, #0
	b _08062CB0
_08062CB0:
	add sp, sp, #12
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08062BFC

