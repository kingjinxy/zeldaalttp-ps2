	THUMB_FUNC_START sub_0804C808
sub_0804C808: @ 0x0804C808
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
_0804C810:
	ldr r0, [r7]
	ldrb r1, [r0]
	cmp r1, #0
	bne _0804C81A
	b _0804C89C
_0804C81A:
	add r1, r7, #0
	add r1, r1, #8
	ldr r0, [r7]
	ldrb r2, [r0]
	strb r2, [r1]
	add r0, r0, #1
	str r0, [r7]
	add r1, r7, #0
	add r1, r1, #9
	ldr r0, [r7]
	ldrb r2, [r0]
	strb r2, [r1]
	add r0, r0, #1
	str r0, [r7]
	add r1, r7, #0
	add r1, r1, #10
	ldr r0, [r7]
	ldrb r2, [r0]
	strb r2, [r1]
	add r0, r0, #1
	str r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	ldrb r0, [r1]
	add r2, r7, #0
	add r2, r2, #9
	ldrb r1, [r2]
	add r3, r7, #0
	add r3, r3, #10
	ldrb r2, [r3]
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	bne _0804C866
	mov r0, #0
	b _0804C8A0
_0804C866:
	ldr r1, [r7, #4]
	ldr r0, [r7]
	ldrb r3, [r0]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strh r3, [r1, #50]
	add r0, r0, #1
	str r0, [r7]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	ldrb r3, [r0]
	add r2, r3, #0
	ldrh r3, [r1, #54]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strh r3, [r1, #54]
	add r0, r0, #1
	str r0, [r7]
	b _0804C810
_0804C89C:
	mov r0, #1
	b _0804C8A0
_0804C8A0:
	add sp, sp, #12
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804C808

