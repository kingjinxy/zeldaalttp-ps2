	THUMB_FUNC_START sub_08036F28
sub_08036F28: @ 0x08036F28
	push {r7,lr}
	mov r7, sp
	ldr r0, _08036F3C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	cmp r1, #0
	bne _08036F40
	mov r0, #5
	bl sub_08036770
	b _08036F8E
_08036F3C:
	.4byte gUnknown_03000FC0
_08036F40:
	ldr r0, _08036F94  @ =gUnknown_03000FC0
	ldrb r1, [r0, #16]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #16]
	ldr r0, _08036F94  @ =gUnknown_03000FC0
	ldr r1, _08036F98  @ =gRandom
	ldr r2, [r1]
	str r2, [r0, #20]
	mov r0, #64
	bl sub_08037B5C
	cmp r0, #0
	beq _08036F88
	ldr r0, _08036F94  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08036F82
	ldr r0, _08036F98  @ =gRandom
	ldr r1, _08036F94  @ =gUnknown_03000FC0
	ldr r2, [r1, #60]
	str r2, [r0]
_08036F82:
	mov r0, #1
	bl sub_08036770
_08036F88:
	mov r0, #64
	bl sub_08037D64
_08036F8E:
	pop {r7}
	pop {r0}
	bx r0
_08036F94:
	.4byte gUnknown_03000FC0
_08036F98:
	.4byte gRandom
	THUMB_FUNC_END sub_08036F28

