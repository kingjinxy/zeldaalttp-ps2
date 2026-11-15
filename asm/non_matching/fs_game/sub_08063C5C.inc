	THUMB_FUNC_START sub_08063C5C
sub_08063C5C: @ 0x08063C5C
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	add r0, r7, #0
	ldrb r1, [r0]
	mov r0, #86
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08063D14
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #7
	add r3, r2, #0
	mov r4, #15
	and r3, r3, r4
	ldrb r4, [r1, #30]
	mov r5, #240
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #4
	ldrb r2, [r0, #30]
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7, #4]
	add r1, r7, #0
	ldrb r2, [r1]
	add r3, r2, #0
	lsl r1, r3, #5
	add r2, r0, #0
	add r0, r0, #32
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, _08063D1C  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r7, #4]
	str r0, [r1]
_08063D14:
	ldr r1, [r7, #4]
	add r0, r1, #0
	b _08063D20
	.byte 0x00
	.byte 0x00
_08063D1C:
	.4byte gUnknown_03006A30
_08063D20:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08063C5C

