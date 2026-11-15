	THUMB_FUNC_START sub_08046C7C
sub_08046C7C: @ 0x08046C7C
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #28]
	lsl r3, r2, #30
	lsr r1, r3, #30
	mov r2, #1
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	bl sub_080476DC
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08046CD8
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
	b _08046D1A
_08046CD8:
	mov r0, #105
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	bne _08046CEC
	b _08046D1A
_08046CEC:
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #37
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
_08046D1A:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08046C7C

	.byte 0x00
	.byte 0x00
