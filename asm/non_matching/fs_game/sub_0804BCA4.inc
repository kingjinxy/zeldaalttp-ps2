	THUMB_FUNC_START sub_0804BCA4
sub_0804BCA4: @ 0x0804BCA4
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804BD2E
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	add r1, r0, #0
	add r1, r1, #124
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #135
	bhi _0804BD2E
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #116
	ldrb r0, [r1]
	cmp r0, #9
	bhi _0804BD28
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #116
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #116
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #116
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804BD28:
	mov r0, #180
	bl sub_08003DFC
_0804BD2E:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldrb r3, [r2, #23]
	mov r4, #3
	add r2, r3, #0
	and r2, r2, r4
	add r3, r2, #0
	lsl r2, r3, #24
	lsr r3, r2, #24
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
	ldr r0, [r7]
	bl sub_0804C088
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804BCA4

