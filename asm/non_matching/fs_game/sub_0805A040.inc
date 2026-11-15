	THUMB_FUNC_START sub_0805A040
sub_0805A040: @ 0x0805A040
	push {r7,lr}
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
	beq _0805A0CC
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	cmp r0, #128
	beq _0805A090
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #7
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #64
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0805A090:
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
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #3
	str r1, [r0, #12]
	mov r0, #140
	bl sub_08003DFC
_0805A0CC:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #66
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805A13A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #66
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #66
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #66
	ldrb r0, [r1]
	cmp r0, #11
	bhi _0805A116
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #12]
	add r1, r2, #0
	sub r1, r1, #64
	str r1, [r0, #12]
_0805A116:
	ldr r0, [r7]
	bl 0x08009678
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0805A12A
	mov r0, #140
	bl sub_08003DFC
_0805A12A:
	ldr r0, [r7]
	bl sub_0805A148
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805A13A
	b _0805A140
_0805A13A:
	ldr r0, [r7]
	bl GetNextFrame
_0805A140:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805A040

