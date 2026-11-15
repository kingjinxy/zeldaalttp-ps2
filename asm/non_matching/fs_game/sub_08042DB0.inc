	THUMB_FUNC_START sub_08042DB0
sub_08042DB0: @ 0x08042DB0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _08042F54  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, _08042F54  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	ldr r0, [r7]
	str r0, [r1]
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
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, _08042F58  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #10]
	cmp r0, r1
	bne _08042E2A
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #1
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
_08042E2A:
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #64
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
	add r0, r0, #68
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #70
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #18
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r2, #14
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
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
	ldr r1, [r7, #4]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #32
	add r2, r0, #0
	add r0, r0, #32
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #28]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #28]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	bl sub_08042F5C
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08042F54:
	.4byte gUnknown_03006A30
_08042F58:
	.4byte gLCDRegisterBuffer
	THUMB_FUNC_END sub_08042DB0

