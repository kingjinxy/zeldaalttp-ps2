	THUMB_FUNC_START sub_0804BFA4
sub_0804BFA4: @ 0x0804BFA4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
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
	ldr r0, [r7]
	ldr r2, [r0, #84]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #4
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	cmp r2, #0
	beq _0804BFEA
	mov r1, #20
	b _0804BFEC
_0804BFEA:
	mov r1, #5
_0804BFEC:
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #69
	add r0, r7, #4
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bls _0804C02A
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r2, #0
	add r2, r2, #69
	add r1, r7, #4
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
	b _0804C03E
_0804C02A:
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
_0804C03E:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0804C062
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldrb r1, [r0, #11]
	add r2, r1, #1
	add r3, r2, #0
	strb r3, [r0, #11]
	lsl r0, r1, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	mov r2, #0
	mov r3, #0
	bl sub_0804469C
	b _0804C076
_0804C062:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #116
	ldrb r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	mov r2, #0
	mov r3, #0
	bl sub_0804469C
_0804C076:
	ldr r0, [r7]
	mov r1, #45
	bl 0x08003E10
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804BFA4

	.byte 0x00
	.byte 0x00
