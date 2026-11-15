	THUMB_FUNC_START sub_08055270
sub_08055270: @ 0x08055270
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _080552BC  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldr r0, [r0]
	ldr r1, [r1, #96]
	and r0, r0, r1
	ldr r1, [r7]
	ldr r2, [r1, #96]
	cmp r0, r2
	beq _080552B2
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	sub r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
_080552B2:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080552BC:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08055270

