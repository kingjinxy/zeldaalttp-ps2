	THUMB_FUNC_START sub_0803D440
sub_0803D440: @ 0x0803D440
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #94
	ldrb r0, [r1]
	lsl r1, r0, #30
	lsr r0, r1, #30
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #2
	bhi _0803D49A
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #94
	ldrb r0, [r1]
	lsl r2, r0, #30
	lsr r1, r2, #30
	ldr r0, [r7, #4]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #94
	ldrb r1, [r2]
	lsl r2, r1, #30
	lsr r3, r2, #30
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #94
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0803D49A:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803D440

	.byte 0x00
	.byte 0x00
