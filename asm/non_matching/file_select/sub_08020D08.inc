	THUMB_FUNC_START sub_08020D08
sub_08020D08: @ 0x08020D08
	push {r4,lr}
	add r4, r0, #0
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	ldrb r1, [r4, #10]
	mov r0, #2
	sub r0, r0, r1
	strh r0, [r4, #52]
	ldr r1, _08020D44  @ =gUnknown_0813B8C0
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	strh r0, [r4, #58]
	add r1, r4, #0
	add r1, r1, #110
	mov r0, #30
	strh r0, [r1]
	ldrb r0, [r4, #10]
	cmp r0, #0
	beq _08020D48
	cmp r0, #1
	beq _08020D60
	b _08020D6C
_08020D44:
	.4byte gUnknown_0813B8C0
_08020D48:
	ldrb r2, [r4, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r0, [r4, #31]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #31]
	b _08020D6C
_08020D60:
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
_08020D6C:
	add r0, r4, #0
	bl sub_08021350
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	add r0, r4, #0
	bl sub_08003B94
	add r1, r4, #0
	add r1, r1, #112
	mov r3, #0
	mov r0, #128
	lsl r0, r0, #4
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #114
	mov r2, #192
	lsl r2, r2, #3
	strh r2, [r0]
	ldr r0, _08020DAC  @ =gUnknown_03000488
	ldrh r1, [r1]
	strh r1, [r0]
	strh r2, [r0, #2]
	strh r3, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	pop {r4}
	pop {r0}
	bx r0
_08020DAC:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08020D08

