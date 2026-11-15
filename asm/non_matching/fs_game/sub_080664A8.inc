	THUMB_FUNC_START sub_080664A8
sub_080664A8: @ 0x080664A8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _080664D4
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
	b _08066528
_080664D4:
	ldr r0, [r7]
	bl sub_0802C12C
	cmp r0, #0
	bne _08066528
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #83
	ldrb r0, [r1]
	add r1, r0, #1
	add r0, r1, #0
	lsl r1, r0, #9
	ldr r2, _08066530  @ =0x06010000
	add r0, r1, r2
	ldr r1, _08066534  @ =0x03000030
	ldr r2, [r1]
	ldr r3, _08066538  @ =0x00042320
	add r1, r2, r3
	mov r2, #128
	lsl r2, r2, #1
	bl 0x080009F4
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
_08066528:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08066530:
	.4byte 0x06010000
_08066534:
	.4byte 0x03000030
_08066538:
	.4byte 0x00042320
	THUMB_FUNC_END sub_080664A8

