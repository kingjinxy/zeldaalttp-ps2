	THUMB_FUNC_START sub_08058058
sub_08058058: @ 0x08058058
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08058094  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #5
	bne _0805808A
	ldr r0, [r7]
	mov r1, #0
	bl sub_080599A8
	ldr r1, _08058094  @ =gUnknown_02016D60
	ldr r0, _08058094  @ =gUnknown_02016D60
	ldr r1, _08058094  @ =gUnknown_02016D60
	ldrb r2, [r1, #8]
	add r1, r2, #1
	ldrb r2, [r0, #8]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #8]
_0805808A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08058094:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08058058

