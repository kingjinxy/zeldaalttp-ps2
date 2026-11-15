	THUMB_FUNC_START sub_08063384
sub_08063384: @ 0x08063384
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
	ldr r1, _0806347C  @ =gUnknown_081420BC
	str r1, [r0, #72]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #88]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #92
	add r2, r0, #0
	add r0, r0, #92
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #64
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #63
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	beq _08063480
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #100
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	mov r1, #0
	bl 0x08003870
	ldr r0, [r7]
	bl sub_080637F4
	b _08063512
_0806347C:
	.4byte gUnknown_081420BC
_08063480:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldr r1, [r2, #48]
	str r1, [r0, #48]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldr r1, [r2, #52]
	str r1, [r0, #52]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #88]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #29]
	lsl r2, r1, #24
	lsr r1, r2, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	add r1, r2, #0
	add r2, r2, #94
	ldrb r1, [r2]
	lsl r2, r1, #30
	lsr r1, r2, #30
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
	ldr r0, _0806351C  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r0, [r0]
	ldrb r1, [r2, #10]
	cmp r0, r1
	bne _08063512
	ldr r0, _08063520  @ =gUnknown_03000450
	ldr r1, [r7]
	str r1, [r0]
_08063512:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806351C:
	.4byte gLCDRegisterBuffer
_08063520:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08063384

