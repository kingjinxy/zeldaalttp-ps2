	THUMB_FUNC_START sub_08044C68
sub_08044C68: @ 0x08044C68
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	beq _08044CA6
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #69
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	beq _08044CA6
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
	b _08044CAE
_08044CA6:
	ldr r1, _08044CB8  @ =gUnknown_0813EE1C
	ldr r0, [r7]
	bl 0x080098A0
_08044CAE:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08044CB8:
	.4byte gUnknown_0813EE1C
	THUMB_FUNC_END sub_08044C68

