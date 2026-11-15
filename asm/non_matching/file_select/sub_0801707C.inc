	THUMB_FUNC_START sub_0801707C
sub_0801707C: @ 0x0801707C
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #6
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	add r1, r1, #79
	strb r0, [r1]
	ldr r0, _080170E8  @ =gUnknown_08139520
	str r0, [r4, #72]
	ldrb r0, [r4, #10]
	cmp r0, #0
	beq _080170B0
	sub r1, r1, #62
	mov r0, #9
	strb r0, [r1]
_080170B0:
	ldrb r0, [r4, #10]
	cmp r0, #3
	bne _080170C2
	bl 0x0800099C
	mov r1, #127
	and r0, r0, r1
	add r0, r0, #64
	strb r0, [r4, #24]
_080170C2:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #1
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl 0x08003870
	add r0, r4, #0
	bl sub_0801740C
	pop {r4}
	pop {r0}
	bx r0
_080170E8:
	.4byte gUnknown_08139520
	THUMB_FUNC_END sub_0801707C

