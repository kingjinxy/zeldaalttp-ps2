	THUMB_FUNC_START sub_08053CE4
sub_08053CE4: @ 0x08053CE4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08053D48  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r2, r0, r1
	ldr r0, [r2]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #0
	mov r2, #3
	bl sub_08053B90
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08053D40
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
_08053D40:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08053D48:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08053CE4

