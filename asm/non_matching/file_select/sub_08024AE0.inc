	THUMB_FUNC_START sub_08024AE0
sub_08024AE0: @ 0x08024AE0
	push {r4-r6,lr}
	add r2, r0, #0
	ldr r4, [r2, #112]
	ldrb r0, [r4, #30]
	lsr r0, r0, #4
	ldrb r1, [r2, #30]
	lsr r5, r1, #4
	cmp r0, r5
	bne _08024B44
	add r3, r2, #0
	add r3, r3, #65
	ldrb r1, [r3]
	mov r6, #128
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08024B1A
	ldrb r0, [r3]
	sub r0, r0, #132
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #159
	bhi _08024BC4
	sub r1, r5, #7
	ldr r0, [r2, #76]
	ldrb r0, [r0, #10]
	cmp r1, r0
	bne _08024BD2
	b _08024BB4
_08024B1A:
	add r3, r4, #0
	add r3, r3, #65
	ldrb r1, [r3]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08024BD2
	ldrb r0, [r3]
	sub r0, r0, #132
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #159
	bhi _08024BC4
	sub r1, r5, #7
	ldr r0, [r4, #76]
	ldrb r0, [r0, #10]
	cmp r1, r0
	bne _08024BD2
	add r0, r2, #0
	add r1, r4, #0
	b _08024BB8
_08024B44:
	mov r4, #0
	add r3, r2, #0
	add r3, r3, #65
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08024B6E
	ldrb r0, [r3]
	sub r0, r0, #132
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #159
	bhi _08024B6E
	mov r4, #16
	sub r1, r5, #7
	ldr r0, [r2, #76]
	ldrb r0, [r0, #10]
	cmp r1, r0
	bne _08024B6E
	mov r4, #17
_08024B6E:
	ldr r3, [r2, #112]
	mov r0, #65
	add r0, r0, r3
	mov r12, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08024BA8
	mov r1, r12
	ldrb r0, [r1]
	sub r0, r0, #132
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #159
	bhi _08024BA8
	mov r0, #32
	orr r4, r4, r0
	ldrb r0, [r3, #30]
	lsr r0, r0, #4
	sub r0, r0, #7
	ldr r1, [r3, #76]
	ldrb r1, [r1, #10]
	cmp r0, r1
	bne _08024BA8
	mov r0, #2
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r4, r0, #24
_08024BA8:
	cmp r4, #0
	beq _08024BD2
	mov r0, #3
	and r0, r0, r4
	cmp r0, #3
	bne _08024BC0
_08024BB4:
	add r0, r2, #0
	add r1, r2, #0
_08024BB8:
	bl sub_08024A80
	mov r0, #1
	b _08024BD4
_08024BC0:
	cmp r0, #0
	bne _08024BD2
_08024BC4:
	add r0, r2, #0
	add r0, r0, #61
	mov r1, #248
	strb r1, [r0]
	ldr r0, [r2, #112]
	add r0, r0, #61
	strb r1, [r0]
_08024BD2:
	mov r0, #0
_08024BD4:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08024AE0

	.byte 0x00
	.byte 0x00
