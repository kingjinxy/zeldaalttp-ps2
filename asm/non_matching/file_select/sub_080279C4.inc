	THUMB_FUNC_START sub_080279C4
sub_080279C4: @ 0x080279C4
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r1, [r4, #11]
	mov r0, #2
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #42
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
	ldrb r1, [r4, #11]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080279F2
	add r1, r4, #0
	add r1, r1, #120
	mov r0, #255
	strb r0, [r1]
	b _080279F8
_080279F2:
	add r0, r4, #0
	add r0, r0, #120
	strb r2, [r0]
_080279F8:
	ldrb r0, [r4, #11]
	lsr r0, r0, #4
	strb r0, [r4, #11]
	cmp r0, #0
	beq _08027A0A
	ldrb r0, [r4, #10]
	bl sub_08013D20
	str r0, [r4, #96]
_08027A0A:
	mov r3, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r2, [r4, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	add r0, r0, #80
	ldrh r0, [r0]
	bl sub_08015DC0
	mov r1, #50
	ldrsh r2, [r4, r1]
	ldr r3, _08027A60  @ =gUnknown_03000450
	ldrh r1, [r3, #24]
	sub r2, r2, r1
	asr r2, r2, #4
	mov r5, #54
	ldrsh r1, [r4, r5]
	ldrh r3, [r3, #26]
	sub r1, r1, r3
	asr r1, r1, #4
	lsl r1, r1, #6
	orr r2, r2, r1
	lsl r2, r2, #1
	add r2, r2, #4
	add r0, r0, r2
	str r0, [r4, #124]
	add r0, r4, #0
	bl sub_08027BCC
	pop {r4,r5}
	pop {r0}
	bx r0
_08027A60:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_080279C4

