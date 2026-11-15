	THUMB_FUNC_START sub_080576F4
sub_080576F4: @ 0x080576F4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
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
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	add r0, r1, #0
	bl sub_08013D20
	ldr r1, [r7]
	str r0, [r1, #96]
	ldr r0, [r7]
	ldr r1, _08057754  @ =gUnknown_08137B10
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #100]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #30
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08057754:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_080576F4

