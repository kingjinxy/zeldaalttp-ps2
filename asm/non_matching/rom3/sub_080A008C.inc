	THUMB_FUNC_START sub_080A008C
sub_080A008C: @ 0x080A008C
	push {r4,r5,lr}
	bl sub_080A08B0
	ldr r4, _080A010C  @ =gUnknown_03003966
	ldr r0, _080A0110  @ =0xFFFFF236
	add r5, r4, r0
	ldrh r0, [r5]
	strb r0, [r4]
	mov r1, #0
	ldrsh r0, [r5, r1]
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	asr r0, r0, #8
	strb r0, [r4, #1]
	mov r2, #0
	ldrsh r0, [r5, r2]
	sub r0, r0, #88
	lsl r0, r0, #1
	ldr r2, _080A0114  @ =0xFFFFF51C
	add r1, r4, r2
	add r0, r0, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	bge _080A00EE
	ldr r0, _080A0118  @ =0xFFFFF246
	add r2, r4, r0
	ldr r1, _080A011C  @ =0xFFFFF23E
	add r3, r4, r1
	ldrh r0, [r2]
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r2]
	ldrh r1, [r3]
	lsl r1, r1, #20
	lsr r1, r1, #16
	ldrh r2, [r4, #62]
	add r0, r1, #0
	orr r0, r0, r2
	strh r0, [r4, #62]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080A0106
	ldrh r0, [r5]
	add r1, r4, #0
	add r1, r1, #66
	strh r0, [r1]
_080A00EE:
	ldr r2, _080A011C  @ =0xFFFFF23E
	add r3, r4, r2
	ldrh r0, [r4, #60]
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r4, #60]
	ldr r0, _080A0118  @ =0xFFFFF246
	add r2, r4, r0
	ldrh r0, [r2]
	ldrh r1, [r3]
	orr r0, r0, r1
	strh r0, [r2]
_080A0106:
	pop {r4,r5}
	pop {r0}
	bx r0
_080A010C:
	.4byte gUnknown_03003966
_080A0110:
	.4byte 0xFFFFF236
_080A0114:
	.4byte 0xFFFFF51C
_080A0118:
	.4byte 0xFFFFF246
_080A011C:
	.4byte 0xFFFFF23E
	THUMB_FUNC_END sub_080A008C

