	THUMB_FUNC_START sub_08056DCC
sub_08056DCC: @ 0x08056DCC
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	add r1, r7, #4
	strb r0, [r1]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08056E48
	ldr r0, _08056E40  @ =0x03000030
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r3, r2, #0
	lsl r1, r3, #1
	add r1, r1, r2
	add r2, r7, #4
	ldrb r3, [r2]
	add r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #5
	ldr r3, _08056E44  @ =0x00002820
	add r2, r1, r3
	ldr r1, [r0]
	add r0, r2, r1
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #0
	add r1, r1, #24
	mov r2, #1
	bl load_palette
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
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
	b _08056E62
	.byte 0x00
	.byte 0x00
_08056E40:
	.4byte 0x03000030
_08056E44:
	.4byte 0x00002820
_08056E48:
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
_08056E62:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08056DCC

	.byte 0x00
	.byte 0x00
