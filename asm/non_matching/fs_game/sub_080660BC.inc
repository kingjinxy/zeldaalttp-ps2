	THUMB_FUNC_START sub_080660BC
sub_080660BC: @ 0x080660BC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #127
	ldrb r0, [r1]
	cmp r0, #0
	beq _080660F8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #127
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #127
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #127
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _08066116
_080660F8:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #127
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #175
	bl 0x08003DFC
_08066116:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080660BC

	.byte 0x00
	.byte 0x00
