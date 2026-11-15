	THUMB_FUNC_START sub_0805B5FC
sub_0805B5FC: @ 0x0805B5FC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x080077D0
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	cmp r0, #0
	beq _0805B63E
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	lsl r1, r2, #3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl sub_0805BC44
_0805B63E:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805B5FC

	.byte 0x00
	.byte 0x00
