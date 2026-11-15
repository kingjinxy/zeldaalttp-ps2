	THUMB_FUNC_START sub_08056B54
sub_08056B54: @ 0x08056B54
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _08056C0E
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #80
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #78
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #160
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	b _08056C74
_08056C0E:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, _08056C40  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #4
	bne _08056C74
	ldr r0, _08056C44  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	cmp r1, #0
	bne _08056C4C
	ldr r0, _08056C48  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08056C74
	b _08056C4C
_08056C40:
	.4byte gSubState
_08056C44:
	.4byte gLCDRegisterBuffer
_08056C48:
	.4byte gUnknown_02016D60
_08056C4C:
	ldr r0, _08056C7C  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r2, #16
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08056C74
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
_08056C74:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08056C7C:
	.4byte gUnknown_03000948
	THUMB_FUNC_END sub_08056B54

