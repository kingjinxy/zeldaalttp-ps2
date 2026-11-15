	THUMB_FUNC_START sub_08065958
sub_08065958: @ 0x08065958
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08065992
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	b _08065A62
_08065992:
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
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #120
	bhi _08065A62
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08065A06
	ldr r1, [r7]
	ldr r0, [r1, #88]
	ldr r2, [r7]
	ldr r1, [r2, #88]
	ldr r2, _08065A6C  @ =gUnknown_081421FC
	ldr r3, [r7]
	ldrb r4, [r3, #23]
	mov r5, #6
	add r3, r4, #0
	and r3, r3, r5
	add r5, r3, #0
	lsl r4, r5, #24
	lsr r3, r4, #24
	lsr r4, r3, #1
	add r3, r4, #0
	lsl r4, r3, #24
	lsr r3, r4, #24
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_08065A06:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08065A62
	mov r0, #15
	mov r1, #15
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08065A62
	ldr r1, [r7, #4]
	ldr r0, _08065A70  @ =gUnknown_08142200
	ldr r2, [r7]
	ldrb r3, [r2, #23]
	lsr r2, r3, #2
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r0, r0, r2
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r2, r3, #16
	ldr r0, _08065A70  @ =gUnknown_08142200
	ldr r3, [r7]
	ldrb r4, [r3, #23]
	lsr r3, r4, #2
	add r5, r3, #0
	lsl r4, r5, #24
	lsr r3, r4, #24
	add r4, r3, #1
	add r0, r0, r4
	mov r4, #0
	ldrsb r4, [r0, r4]
	lsl r3, r4, #16
	ldr r0, [r7]
	bl sub_0803D4A4
_08065A62:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08065A6C:
	.4byte gUnknown_081421FC
_08065A70:
	.4byte gUnknown_08142200
	THUMB_FUNC_END sub_08065958

