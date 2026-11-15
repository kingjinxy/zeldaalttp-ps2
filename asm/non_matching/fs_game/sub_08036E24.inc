	THUMB_FUNC_START sub_08036E24
sub_08036E24: @ 0x08036E24
	push {r7,lr}
	mov r7, sp
	ldr r0, _08036E38  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	cmp r1, #0
	bne _08036E3C
	mov r0, #5
	bl sub_08036770
	b _08036F16
_08036E38:
	.4byte gUnknown_03000FC0
_08036E3C:
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #16]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #48
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #16]
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r1, _08036F20  @ =gUnknown_0200B250
	mov r2, #192
	lsl r2, r2, #18
	ldrb r3, [r2, #4]
	add r2, r3, #0
	lsl r3, r2, #6
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #20]
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	mov r1, #192
	lsl r1, r1, #18
	ldrb r2, [r1, #4]
	add r1, r2, #0
	lsl r2, r1, #6
	ldr r3, _08036F24  @ =gUnknown_0200B254
	add r1, r2, r3
	ldr r2, [r1]
	str r2, [r0, #24]
	mov r0, #48
	bl sub_08037B5C
	cmp r0, #0
	beq _08036F10
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08036EA4
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r1, [r0, #60]
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r2, [r0, #64]
	mov r0, #0
	bl sub_08036DEC
_08036EA4:
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08036EC6
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r1, [r0, #80]
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r2, [r0, #84]
	mov r0, #1
	bl sub_08036DEC
_08036EC6:
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08036EE8
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r1, [r0, #100]
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r2, [r0, #104]
	mov r0, #2
	bl sub_08036DEC
_08036EE8:
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08036F0A
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r1, [r0, #120]
	ldr r0, _08036F1C  @ =gUnknown_03000FC0
	ldr r2, [r0, #124]
	mov r0, #3
	bl sub_08036DEC
_08036F0A:
	mov r0, #1
	bl sub_08036770
_08036F10:
	mov r0, #48
	bl sub_08037D64
_08036F16:
	pop {r7}
	pop {r0}
	bx r0
_08036F1C:
	.4byte gUnknown_03000FC0
_08036F20:
	.4byte gUnknown_0200B250
_08036F24:
	.4byte gUnknown_0200B254
	THUMB_FUNC_END sub_08036E24

