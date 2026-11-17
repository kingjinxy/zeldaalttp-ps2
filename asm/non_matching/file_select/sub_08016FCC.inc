	THUMB_FUNC_START sub_08016FCC
sub_08016FCC: @ 0x08016FCC
	push {lr}
	add r2, r0, #0
	add r0, r0, #67
	ldrb r0, [r0]
	cmp r0, #0
	beq _08017002
	ldrb r3, [r2, #20]
	add r1, r3, #0
	cmp r1, #2
	beq _08016FEA
	ldrb r0, [r2, #10]
	cmp r0, #3
	beq _08016FF2
	cmp r1, #4
	bne _08016FF2
_08016FEA:
	add r0, r3, #1
	mov r1, #0
	strb r0, [r2, #20]
	strb r1, [r2, #23]
_08016FF2:
	add r3, r2, #0
	add r3, r3, #63
	ldrb r0, [r3]
	add r1, r2, #0
	add r1, r1, #124
	strb r0, [r1]
	mov r0, #6
	strb r0, [r3]
_08017002:
	ldrb r0, [r2, #21]
	cmp r0, #255
	bne _08017048
	mov r1, #0
	mov r0, #2
	strb r0, [r2, #20]
	strb r1, [r2, #21]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r2, #16]
	mov r0, #128
	lsl r0, r0, #1
	str r0, [r2, #12]
	add r0, r2, #0
	add r0, r0, #62
	ldrb r0, [r0]
	add r1, r2, #0
	add r1, r1, #43
	strb r0, [r1]
	add r1, r1, #20
	mov r0, #6
	strb r0, [r1]
	add r0, r2, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r2, #0
	bl sub_08003870
	mov r0, #49
	bl sub_08003DFC
	b _08017050
_08017048:
	ldr r1, _08017054  @ =gUnknown_08139364
	add r0, r2, #0
	bl sub_080098A0
_08017050:
	pop {r0}
	bx r0
_08017054:
	.4byte gUnknown_08139364
	THUMB_FUNC_END sub_08016FCC

