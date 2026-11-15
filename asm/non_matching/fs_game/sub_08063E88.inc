	THUMB_FUNC_START sub_08063E88
sub_08063E88: @ 0x08063E88
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r1, _08063F2C  @ =gUnknown_03006A30
	add r0, r1, r0
	str r0, [r7, #4]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7, #4]
	ldrh r2, [r1, #8]
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #0
	add r0, r0, #9
	ldr r1, [r7, #4]
	ldrh r2, [r1, #8]
	lsr r1, r2, #8
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #0
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	cmp r2, #4
	bls _08063ECE
	mov r1, #1
_08063ECE:
	mov r2, #1
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	cmp r1, #163
	bhi _08063F0A
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r4, [r3]
	lsr r2, r4, #1
	ldrb r1, [r1]
	add r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_08063F0A:
	add r0, r7, #0
	add r0, r0, #9
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #27]
	cmp r0, r1
	bne _08063F30
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #35
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	bne _08063F30
	b _08063F5A
_08063F2C:
	.4byte gUnknown_03006A30
_08063F30:
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #9
	ldrb r2, [r0, #27]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #27]
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	add r0, r7, #0
	add r0, r0, #9
	ldrb r2, [r0]
	ldr r0, [r7]
	bl 0x08003840
_08063F5A:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08063E88

	.byte 0x00
	.byte 0x00
