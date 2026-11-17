	THUMB_FUNC_START sub_08023178
sub_08023178: @ 0x08023178
	push {r4,r5,lr}
	add r5, r0, #0
	bl sub_0803DF84
	add r0, r5, #0
	bl sub_08023A38
	lsl r0, r0, #24
	cmp r0, #0
	beq _080231C4
	mov r4, #1
	mov r3, #1
	strb r3, [r5, #20]
	mov r0, #30
	strb r0, [r5, #23]
	ldrb r2, [r5, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r4
	strb r0, [r5, #28]
	ldr r0, _080231CC  @ =gUnknown_0813C0B0
	str r0, [r5, #72]
	add r0, r5, #0
	add r0, r0, #106
	strb r3, [r0]
	add r2, r5, #0
	add r2, r2, #94
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	add r0, r5, #0
	mov r1, #0
	bl sub_08003870
	ldr r0, _080231D0  @ =gUnknown_03000450
	str r5, [r0]
_080231C4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080231CC:
	.4byte gUnknown_0813C0B0
_080231D0:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08023178

