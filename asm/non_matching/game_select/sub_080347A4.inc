	THUMB_FUNC_START sub_080347A4
sub_080347A4: @ 0x080347A4
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #10]
	bl sub_08013D20
	str r0, [r4, #96]
	ldrb r0, [r4, #11]
	bl sub_08013D20
	str r0, [r4, #100]
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _080347F0  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r3, #54
	ldrsh r0, [r4, r3]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	str r1, [r4, #104]
	ldrb r0, [r4, #10]
	cmp r0, #255
	bne _080347EA
	add r0, r4, #0
	bl sub_080347F4
	mov r0, #2
	strb r0, [r4, #20]
_080347EA:
	pop {r4}
	pop {r0}
	bx r0
_080347F0:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_080347A4

