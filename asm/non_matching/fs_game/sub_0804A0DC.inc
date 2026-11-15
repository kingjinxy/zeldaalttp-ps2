	THUMB_FUNC_START sub_0804A0DC
sub_0804A0DC: @ 0x0804A0DC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _0804A108
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
	b _0804A14A
_0804A108:
	mov r1, #128
	lsl r1, r1, #6
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	bne _0804A14A
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	beq _0804A13A
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #1
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	b _0804A144
_0804A13A:
	ldr r0, [r7]
	mov r1, #13
	mov r2, #0
	bl sub_0804CB38
_0804A144:
	ldr r0, [r7]
	bl DeleteThisEntity
_0804A14A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804A0DC

	.byte 0x00
	.byte 0x00
