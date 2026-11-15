	THUMB_FUNC_START sub_08034B9C
sub_08034B9C: @ 0x08034B9C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldr r1, [r4, #96]
	mov r0, #2
	strb r0, [r1, #2]
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08034BCE
	ldr r1, [r4, #96]
	mov r0, #1
	strb r0, [r1, #4]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	sub r0, r0, #14
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r2]
_08034BCE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034B9C

