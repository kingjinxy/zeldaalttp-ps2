	THUMB_FUNC_START sub_080566EC
sub_080566EC: @ 0x080566EC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08056770  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #4
	bne _08056766
	ldr r1, _08056774  @ =gUnknown_02016D60
	ldrb r0, [r1, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08056766
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
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #2
	add r2, r2, r1
	lsl r1, r2, #3
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #252
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #4
	str r1, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	bl sub_08056988
_08056766:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08056770:
	.4byte gSubState
_08056774:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080566EC

