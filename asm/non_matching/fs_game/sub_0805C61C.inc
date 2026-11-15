	THUMB_FUNC_START sub_0805C61C
sub_0805C61C: @ 0x0805C61C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0805CDA4
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805C658
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #104
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805C658
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #96]
_0805C658:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805C61C

