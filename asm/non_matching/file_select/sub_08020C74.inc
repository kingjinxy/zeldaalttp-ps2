	THUMB_FUNC_START sub_08020C74
sub_08020C74: @ 0x08020C74
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _08020CC0
	ldr r0, [r4, #84]
	add r0, r0, #127
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08020CC0
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	ldrb r2, [r4, #29]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #2
	orr r1, r1, r0
	sub r0, r0, #6
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #29]
	add r1, r4, #0
	add r1, r1, #112
	mov r0, #240
	strh r0, [r1]
	add r1, r1, #2
	add r0, r0, #48
	strh r0, [r1]
	ldr r1, [r4, #84]
	add r1, r1, #127
	ldrb r2, [r1]
	mov r0, #254
	and r0, r0, r2
	strb r0, [r1]
_08020CC0:
	ldr r1, _08020D04  @ =gUnknown_0813B8A4
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	ldrb r0, [r4, #10]
	cmp r0, #2
	bne _08020CFE
	add r0, r4, #0
	bl sub_08021234
	add r0, r4, #0
	bl sub_080210F0
	add r1, r4, #0
	add r1, r1, #110
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08020CFE
	mov r0, #30
	strh r0, [r1]
	add r0, r4, #0
	mov r1, #89
	bl sub_08003E10
_08020CFE:
	pop {r4}
	pop {r0}
	bx r0
_08020D04:
	.4byte gUnknown_0813B8A4
	THUMB_FUNC_END sub_08020C74

