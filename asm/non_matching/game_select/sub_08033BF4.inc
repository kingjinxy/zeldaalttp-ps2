	THUMB_FUNC_START sub_08033BF4
sub_08033BF4: @ 0x08033BF4
	push {r4,lr}
	add r4, r0, #0
	bl sub_08034238
	add r3, r4, #0
	add r3, r3, #94
	ldrb r2, [r3]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3]
	ldrb r0, [r4, #28]
	and r1, r1, r0
	mov r0, #1
	orr r1, r1, r0
	strb r1, [r4, #28]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033BF4

