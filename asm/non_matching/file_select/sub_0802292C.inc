	THUMB_FUNC_START sub_0802292C
sub_0802292C: @ 0x0802292C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	bl sub_0800099C
	add r6, r0, #0
	mov r0, #3
	and r6, r6, r0
	bl sub_0800099C
	add r5, r0, #0
	mov r0, #1
	and r5, r5, r0
	mov r4, #0
_0802294A:
	mov r0, #42
	bl sub_08012468
	add r2, r0, #0
	cmp r2, #0
	beq _0802297C
	mov r3, #0
	mov r0, #1
	strb r0, [r2, #10]
	mov r1, #64
	add r0, r4, #0
	orr r0, r0, r1
	strb r0, [r2, #11]
	lsl r0, r4, #1
	add r0, r5, r0
	add r1, r2, #0
	add r1, r1, #114
	strb r0, [r1]
	str r7, [r2, #84]
	cmp r4, r6
	bne _0802297A
	mov r0, #255
	strb r0, [r2, #23]
	b _0802297C
_0802297A:
	strb r3, [r2, #23]
_0802297C:
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #3
	bls _0802294A
	mov r0, #161
	bl play_sound
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802292C

	.byte 0x00
	.byte 0x00
