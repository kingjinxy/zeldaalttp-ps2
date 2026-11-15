	THUMB_FUNC_START sub_080463F4
sub_080463F4: @ 0x080463F4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_08047538
	ldr r0, [r7]
	bl sub_0804721C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08046424
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #0
	bne _08046424
	b _08046438
_08046424:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #27
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_08046438:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080463F4

