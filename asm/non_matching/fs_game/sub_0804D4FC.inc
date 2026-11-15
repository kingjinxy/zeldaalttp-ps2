	THUMB_FUNC_START sub_0804D4FC
sub_0804D4FC: @ 0x0804D4FC
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _0804D5BC
	mov r0, #15
	mov r1, #1
	mov r2, #32
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804D5B6
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	bne _0804D58C
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	mov r0, #16
	bl play_sound
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	bl DeleteThisEntity
_0804D58C:
	ldr r1, [r7, #4]
	ldr r0, _0804D5B8  @ =gUnknown_0842882C
	ldr r2, [r7]
	ldrb r3, [r2, #24]
	lsl r2, r3, #1
	add r0, r0, r2
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r2, r3, #16
	ldr r0, _0804D5B8  @ =gUnknown_0842882C
	ldr r3, [r7]
	ldrb r4, [r3, #24]
	lsl r3, r4, #1
	add r4, r3, #1
	add r0, r0, r4
	mov r4, #0
	ldrsb r4, [r0, r4]
	lsl r3, r4, #16
	ldr r0, [r7]
	bl sub_0803D4A4
_0804D5B6:
	b _0804D5D6
_0804D5B8:
	.4byte gUnknown_0842882C
_0804D5BC:
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
_0804D5D6:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804D4FC

	.byte 0x00
	.byte 0x00
