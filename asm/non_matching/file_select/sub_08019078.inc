	THUMB_FUNC_START sub_08019078
sub_08019078: @ 0x08019078
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r3, [r5, #11]
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	ldr r1, _080190EC  @ =gUnknown_03006A30
	add r4, r0, r1
	ldr r0, [r4, #40]
	mov r12, r0
	ldrb r0, [r4, #5]
	cmp r0, #0
	beq _08019106
	ldr r2, [r5, #84]
	add r2, r2, #117
	add r0, r3, #4
	lsl r0, r0, #4
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, r12
	add r0, r0, #41
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801910C
	mov r2, r12
	add r2, r2, #42
	ldrb r1, [r2]
	mov r3, #2
	add r0, r3, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080190F0
	strb r0, [r4, #5]
	mov r1, r12
	add r1, r1, #61
	mov r0, #254
	strb r0, [r1]
	mov r0, r12
	add r0, r0, #66
	strb r3, [r0]
	ldrb r0, [r2]
	mov r1, #4
	eor r0, r0, r1
	lsl r0, r0, #2
	mov r1, r12
	add r1, r1, #62
	strb r0, [r1]
	ldr r1, [r5, #84]
	add r1, r1, #117
	ldrb r2, [r1]
	mov r0, #15
	and r0, r0, r2
	strb r0, [r1]
	b _0801910C
	.byte 0x00
	.byte 0x00
_080190EC:
	.4byte gUnknown_03006A30
_080190F0:
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #6
	bne _0801910C
	ldr r0, [r5, #84]
	add r0, r0, #117
	ldrb r1, [r0]
	mov r2, #128
	orr r1, r1, r2
	strb r1, [r0]
	b _0801910C
_08019106:
	ldrb r0, [r5, #20]
	sub r0, r0, #1
	strb r0, [r5, #20]
_0801910C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019078

	.byte 0x00
	.byte 0x00
