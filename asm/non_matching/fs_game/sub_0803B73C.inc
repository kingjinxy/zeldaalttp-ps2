	THUMB_FUNC_START sub_0803B73C
sub_0803B73C: @ 0x0803B73C
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	add r0, r2, #0
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803B826
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #0
	bne _0803B826
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #70
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #70
	ldrb r1, [r2]
	mov r2, #128
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _0803B7A6
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #70
	ldrb r1, [r2]
	b _0803B7B2
_0803B7A6:
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #70
	ldrb r2, [r3]
	neg r3, r2
	add r1, r3, #0
_0803B7B2:
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #70
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #70
	ldrb r1, [r2]
	mov r2, #128
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _0803B804
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #70
	ldrb r1, [r2]
	b _0803B810
_0803B804:
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #70
	ldrb r2, [r3]
	neg r3, r2
	add r1, r3, #0
_0803B810:
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #1
	b _0803B82A
_0803B826:
	mov r0, #0
	b _0803B82A
_0803B82A:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803B73C

	.byte 0x00
	.byte 0x00
