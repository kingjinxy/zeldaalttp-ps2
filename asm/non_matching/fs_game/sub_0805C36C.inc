	THUMB_FUNC_START sub_0805C36C
sub_0805C36C: @ 0x0805C36C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
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
	ldr r2, [r7]
	ldr r3, [r7]
	ldrb r1, [r3, #23]
	add r4, r1, #0
	lsl r3, r4, #4
	sub r3, r3, r1
	lsl r1, r3, #2
	add r3, r2, #0
	add r2, r2, #102
	ldrh r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	add r3, r1, #0
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2]
	mov r2, #0
	bic r1, r1, r2
	add r2, r0, #0
	add r0, r0, #100
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0805C498  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0805C498  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	ldr r3, _0805C49C  @ =0x00002004
	add r2, r1, r3
	ldr r1, [r7, #4]
	add r2, r1, r2
	str r2, [r0, #116]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	lsr r1, r2, #4
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #24
	lsr r2, r1, #24
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #112
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	ldr r1, _0805C4A0  @ =gUnknown_081410CC
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #112
	ldrh r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	str r2, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805C4A4
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	add r0, r1, #0
	bl sub_08013D20
	ldr r1, [r7]
	str r0, [r1, #96]
	b _0805C4B8
_0805C498:
	.4byte gUnknown_03000450
_0805C49C:
	.4byte 0x00002004
_0805C4A0:
	.4byte gUnknown_081410CC
_0805C4A4:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_0805C4B8:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	lsr r1, r2, #6
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r0, #0
	add r0, r0, #104
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
	ldrb r2, [r1, #10]
	lsr r1, r2, #2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r0, #0
	add r0, r0, #114
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
	ldrb r2, [r1, #10]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #2
	add r1, r2, #0
	eor r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	lsl r0, r1, #2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	beq _0805C5C0
	cmp r0, #1
	bgt _0805C564
	cmp r0, #0
	beq _0805C56E
	b _0805C612
_0805C564:
	cmp r0, #2
	beq _0805C56E
	cmp r0, #3
	beq _0805C5C0
	b _0805C612
_0805C56E:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	add r1, r2, #0
	sub r1, r1, #16
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #122
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #124
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	b _0805C612
_0805C5C0:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	add r1, r2, #0
	sub r1, r1, #16
	add r2, r0, #0
	add r0, r0, #122
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	b _0805C612
_0805C612:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805C36C

	.byte 0x00
	.byte 0x00
