	THUMB_FUNC_START sub_08044AE0
sub_08044AE0: @ 0x08044AE0
	push {r7,lr}
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
	bne _08044B4A
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
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	add r1, r0, #2
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
	b _08044B70
_08044B4A:
	ldr r0, [r7]
	ldr r1, [r0, #12]
	cmp r1, #16
	ble _08044B5C
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #12]
	sub r1, r2, #2
	str r1, [r0, #12]
_08044B5C:
	ldr r0, [r7]
	bl 0x08009694
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08044B70
	ldr r0, [r7]
	bl sub_08044BC4
_08044B70:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08044AE0

