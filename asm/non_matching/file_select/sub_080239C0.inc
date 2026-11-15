	THUMB_FUNC_START sub_080239C0
sub_080239C0: @ 0x080239C0
	push {r4,lr}
	add r3, r0, #0
	add r0, r0, #117
	ldrb r0, [r0]
	cmp r0, #0
	beq _080239E0
	ldrh r1, [r3, #50]
	add r0, r3, #0
	add r0, r0, #112
	ldrb r0, [r0]
	sub r1, r1, r0
	add r0, r3, #0
	add r0, r0, #114
	strb r1, [r0]
	add r4, r0, #0
	b _080239F2
_080239E0:
	add r0, r3, #0
	add r0, r0, #112
	ldrb r0, [r0]
	ldrh r1, [r3, #50]
	sub r0, r0, r1
	add r1, r3, #0
	add r1, r1, #114
	strb r0, [r1]
	add r4, r1, #0
_080239F2:
	ldr r0, [r3, #84]
	ldrb r0, [r0, #20]
	cmp r0, #4
	bne _08023A14
	ldr r2, [r3, #124]
	add r2, r2, #124
	ldrb r1, [r4]
	add r3, r3, #115
	ldrb r0, [r3]
	sub r1, r1, r0
	asr r1, r1, #2
	ldrh r0, [r2]
	sub r0, r0, r1
	strh r0, [r2]
	ldrb r1, [r4]
	mov r0, #252
	b _08023A2C
_08023A14:
	ldr r2, [r3, #124]
	add r2, r2, #124
	ldrb r1, [r4]
	add r3, r3, #115
	ldrb r0, [r3]
	sub r1, r1, r0
	asr r1, r1, #3
	ldrh r0, [r2]
	sub r0, r0, r1
	strh r0, [r2]
	ldrb r1, [r4]
	mov r0, #248
_08023A2C:
	and r0, r0, r1
	strb r0, [r3]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080239C0

	.byte 0x00
	.byte 0x00
