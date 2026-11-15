	THUMB_FUNC_START sub_0803D224
sub_0803D224: @ 0x0803D224
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0803D300
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #28
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	lsr r1, r0, #2
	add r0, r1, #0
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803D2AA
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	mov r1, #28
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	lsr r1, r0, #2
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	sub r0, r0, r1
	add r1, r0, #1
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _0803D2AA
	add r0, r7, #4
	ldrb r1, [r0]
	add r0, r1, #0
	b _0803D308
_0803D2AA:
	add r0, r7, #4
	ldr r2, [r7]
	ldr r3, [r7]
	add r1, r3, #0
	add r3, r3, #43
	ldrb r1, [r3]
	lsr r3, r1, #2
	add r1, r3, #0
	mov r3, #126
	and r1, r1, r3
	add r3, r2, #0
	add r2, r2, #42
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	add r3, r1, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r2]
	mov r2, #0
	bic r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	cmp r0, #4
	bhi _0803D2F4
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #251
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _0803D300
_0803D2F4:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #4
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_0803D300:
	add r0, r7, #4
	ldrb r1, [r0]
	add r0, r1, #0
	b _0803D308
_0803D308:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803D224

