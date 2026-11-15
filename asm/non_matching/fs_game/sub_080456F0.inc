	THUMB_FUNC_START sub_080456F0
sub_080456F0: @ 0x080456F0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_080660BC
	bl sub_0803DF84
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08045748
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #4
	bne _0804573C
	ldr r1, _08045740  @ =gUnknown_08143FD8
	add r0, r1, #0
	mov r1, #1
	bl sub_0801484C
	ldr r0, _08045744  @ =gUnknown_0200B310
	mov r1, #0
	str r1, [r0]
_0804573C:
	b _08045778
	.byte 0x00
	.byte 0x00
_08045740:
	.4byte gUnknown_08143FD8
_08045744:
	.4byte gUnknown_0200B310
_08045748:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #62
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
_08045778:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080456F0

