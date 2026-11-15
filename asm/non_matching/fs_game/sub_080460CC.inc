	THUMB_FUNC_START sub_080460CC
sub_080460CC: @ 0x080460CC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #3
	bne _08046140
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
	bne _08046140
	ldr r0, [r7]
	ldr r1, _08046150  @ =gUnknown_08137B10
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #113
	ldrb r2, [r3]
	add r3, r2, #2
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_08046140:
	ldr r0, [r7]
	bl GetNextFrame
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08046150:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_080460CC

