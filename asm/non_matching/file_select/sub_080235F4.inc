	THUMB_FUNC_START sub_080235F4
sub_080235F4: @ 0x080235F4
	push {r4,lr}
	add r3, r0, #0
	ldr r0, [r3, #124]
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r0, #16
	bne _08023644
	mov r2, #1
	mov r0, #1
	strb r0, [r3, #20]
	mov r0, #32
	strb r0, [r3, #23]
	mov r0, #128
	str r0, [r3, #12]
	ldrb r1, [r3, #28]
	sub r0, r0, #132
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #28]
	mov r0, #117
	add r0, r0, r3
	mov r12, r0
	ldrb r0, [r0]
	eor r0, r0, r2
	lsl r0, r0, #4
	add r0, r0, #8
	add r1, r3, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r2, [r3, #84]
	ldr r1, _0802364C  @ =gUnknown_0813BE2C
	mov r4, r12
	ldrb r0, [r4]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r2, #50]
	add r0, r0, r2
	strh r0, [r3, #50]
_08023644:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802364C:
	.4byte gUnknown_0813BE2C
	THUMB_FUNC_END sub_080235F4

