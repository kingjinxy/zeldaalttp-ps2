	THUMB_FUNC_START sub_08056988
sub_08056988: @ 0x08056988
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _080569E8  @ =gLCDRegisterBuffer
	ldrb r0, [r0, #11]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080569E0
	ldr r0, _080569EC  @ =gUnknown_02016D60
	ldr r1, [r0, #32]
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080569E0
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #0
	add r1, r1, #8
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
_080569E0:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_080569E8:
	.4byte gLCDRegisterBuffer
_080569EC:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08056988

