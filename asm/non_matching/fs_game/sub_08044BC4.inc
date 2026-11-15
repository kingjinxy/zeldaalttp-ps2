	THUMB_FUNC_START sub_08044BC4
sub_08044BC4: @ 0x08044BC4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	add r0, r2, #0
	bl sub_08043EA4
	add r1, r7, #4
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #255
	beq _08044C1A
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	beq _08044C1A
	ldr r0, [r7]
	add r1, r7, #4
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #4
	ldrb r1, [r0]
	ldr r0, [r7]
	bl sub_08003870
_08044C1A:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08044BC4

	.byte 0x00
	.byte 0x00
