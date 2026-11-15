	THUMB_FUNC_START sub_080489B0
sub_080489B0: @ 0x080489B0
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08048A28
	ldr r0, [r7]
	ldr r1, [r0, #120]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r2, [r1]
	add r0, r2, #0
	add r1, r0, #0
	sub r1, r1, #132
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #159
	bhi _08048A28
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #120]
	ldrb r0, [r1, #30]
	lsl r2, r0, #24
	lsr r1, r2, #28
	sub r0, r1, #7
	ldr r1, [r7]
	ldr r2, [r1, #120]
	ldr r1, [r2, #76]
	ldrb r2, [r1, #10]
	cmp r0, r2
	bne _08048A28
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08048A28:
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08048A92
	ldr r0, [r7]
	ldr r1, [r0, #124]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r2, [r1]
	add r0, r2, #0
	add r1, r0, #0
	sub r1, r1, #132
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #159
	bhi _08048A92
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #124]
	ldrb r0, [r1, #30]
	lsl r2, r0, #24
	lsr r1, r2, #28
	sub r0, r1, #7
	ldr r1, [r7]
	ldr r2, [r1, #124]
	ldr r1, [r2, #76]
	ldrb r2, [r1, #10]
	cmp r0, r2
	bne _08048A92
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08048A92:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #0
	bne _08048A9C
	b _08048BEC
_08048A9C:
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #3
	beq _08048AB2
	b _08048BEC
_08048AB2:
	ldr r0, [r7]
	ldr r2, [r0, #84]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, [r7]
	ldr r2, [r1, #120]
	ldr r3, [r2, #76]
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #70
	mov r1, #0
	ldrsb r1, [r2, r1]
	cmp r1, #0
	bge _08048AF8
	ldr r1, [r7]
	ldr r2, [r1, #120]
	ldr r3, [r2, #76]
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #70
	ldrb r1, [r2]
	neg r2, r1
	add r1, r2, #0
	add r2, r1, #0
	sub r2, r2, #16
	add r1, r2, #0
	b _08048B0C
_08048AF8:
	ldr r2, [r7]
	ldr r3, [r2, #120]
	ldr r4, [r3, #76]
	add r2, r4, #0
	add r3, r4, #0
	add r3, r3, #70
	ldrb r2, [r3]
	add r3, r2, #0
	add r3, r3, #16
	add r1, r3, #0
_08048B0C:
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #88]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #61
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #5
	ldr r1, [r7]
	ldr r2, [r1, #120]
	ldr r1, [r2, #76]
	add r2, r1, #0
	add r1, r1, #68
	ldr r2, [r7]
	ldr r3, [r2, #124]
	ldr r4, [r3, #76]
	add r2, r4, #0
	add r3, r4, #0
	add r3, r3, #68
	ldrb r2, [r3]
	lsl r4, r2, #24
	lsr r3, r4, #24
	ldrb r4, [r1]
	cmp r3, r4
	bcs _08048B68
	ldrb r2, [r1]
_08048B68:
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #69
	add r0, r7, #5
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bls _08048BA6
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r2, #0
	add r2, r2, #69
	add r1, r7, #5
	ldrb r2, [r2]
	ldrb r3, [r1]
	sub r1, r2, r3
	add r2, r0, #0
	add r0, r0, #69
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _08048BBA
_08048BA6:
	ldr r0, [r7]
	ldr r2, [r0, #84]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_08048BBA:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #62
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #116
	ldrb r1, [r0]
	add r2, r1, #1
	add r3, r2, #0
	strb r3, [r0]
	lsl r0, r1, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	mov r2, #0
	mov r3, #8
	bl sub_0804469C
	mov r0, #45
	bl sub_08003DFC
_08048BEC:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080489B0

