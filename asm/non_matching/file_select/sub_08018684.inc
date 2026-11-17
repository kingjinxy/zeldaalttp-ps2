	THUMB_FUNC_START sub_08018684
sub_08018684: @ 0x08018684
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, [r4, #88]
	cmp r0, #0
	bne _080186B0
	ldrb r1, [r4, #23]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0801869E
	ldrb r0, [r4, #24]
	add r0, r0, #16
	strb r0, [r4, #24]
_0801869E:
	ldrb r2, [r4, #24]
	add r0, r4, #0
	add r1, r2, #0
	bl sub_08009E6C
	add r1, r0, #0
	cmp r1, #0
	beq _080186B0
	str r1, [r4, #88]
_080186B0:
	ldrb r1, [r4, #23]
	sub r1, r1, #1
	strb r1, [r4, #23]
	ldr r2, _080186E8  @ =gUnknown_081398A0
	mov r0, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r4, #54]
	add r0, r0, r2
	strh r0, [r4, #54]
	lsl r1, r1, #24
	cmp r1, #0
	bne _08018792
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #128
	lsl r0, r0, #10
	str r0, [r4, #16]
	ldrb r0, [r4, #10]
	cmp r0, #0
	beq _080186EC
	cmp r0, #1
	beq _08018750
	b _0801877C
_080186E8:
	.4byte gUnknown_081398A0
_080186EC:
	add r3, r4, #0
	add r3, r3, #80
	ldrh r0, [r3]
	lsr r0, r0, #14
	cmp r0, #2
	beq _08018724
	mov r5, #50
	ldrsh r1, [r4, r5]
	ldr r2, _08018720  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r5, #54
	ldrsh r0, [r4, r5]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r3]
	mov r0, #47
	bl sub_08014658
	b _0801877C
_08018720:
	.4byte gUnknown_03000450
_08018724:
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r2, _0801874C  @ =gUnknown_03000450
	ldrh r0, [r2, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r5, #54
	ldrsh r0, [r4, r5]
	ldrh r2, [r2, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r3]
	mov r0, #88
	bl sub_08014658
	b _0801877C
_0801874C:
	.4byte gUnknown_03000450
_08018750:
	mov r0, #173
	lsl r0, r0, #1
	mov r2, #50
	ldrsh r1, [r4, r2]
	ldr r3, _08018798  @ =gUnknown_03000450
	ldrh r2, [r3, #24]
	sub r1, r1, r2
	asr r1, r1, #4
	mov r5, #54
	ldrsh r2, [r4, r5]
	ldrh r3, [r3, #26]
	sub r2, r2, r3
	asr r2, r2, #4
	lsl r2, r2, #6
	orr r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r4, #0
	add r2, r2, #80
	ldrh r2, [r2]
	bl sub_08014658
_0801877C:
	mov r0, #15
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08018792
	add r0, r4, #0
	bl sub_0803D3D0
_08018792:
	pop {r4,r5}
	pop {r0}
	bx r0
_08018798:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08018684

