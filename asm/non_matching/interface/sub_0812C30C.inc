	THUMB_FUNC_START sub_0812C30C
sub_0812C30C: @ 0x0812C30C
	push {lr}
	add r3, r0, #0
	ldr r2, [r3]
	ldrb r1, [r2]
	add r2, r2, #1
	str r2, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0812C32E
	mov r0, #127
	and r1, r1, r0
	lsl r1, r1, #8
	ldrb r0, [r2]
	orr r1, r1, r0
	add r0, r2, #1
	str r0, [r3]
_0812C32E:
	add r0, r1, #0
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812C30C

