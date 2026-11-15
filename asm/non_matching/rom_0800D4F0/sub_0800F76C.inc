	THUMB_FUNC_START sub_0800F76C
sub_0800F76C: @ 0x0800F76C
	push {r4,lr}
	mov r12, r0
	lsl r1, r1, #16
	lsr r3, r1, #16
	lsl r2, r2, #24
	mov r0, #255
	lsl r0, r0, #24
	add r2, r2, r0
	lsr r4, r2, #24
	cmp r4, #255
	beq _0800F7AA
_0800F782:
	add r1, r3, #0
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	add r2, r3, #0
	mov r0, r12
	strh r1, [r0]
	mov r1, r12
	add r1, r1, #64
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	strh r2, [r1]
	mov r0, #2
	add r12, r12, r0
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #255
	bne _0800F782
_0800F7AA:
	add r0, r3, #0
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800F76C

	.byte 0x00
	.byte 0x00
