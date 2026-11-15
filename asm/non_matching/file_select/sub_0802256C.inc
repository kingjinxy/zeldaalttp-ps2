	THUMB_FUNC_START sub_0802256C
sub_0802256C: @ 0x0802256C
	push {r4-r6,lr}
	add r5, r0, #0
	ldr r1, [r5, #84]
	ldrb r0, [r1, #20]
	cmp r0, #6
	beq _0802257C
	cmp r0, #2
	bne _08022594
_0802257C:
	ldrb r0, [r5, #23]
	cmp r0, #0
	beq _0802258C
	ldr r0, [r5, #48]
	str r0, [r1, #48]
	ldr r1, [r5, #84]
	ldr r0, [r5, #52]
	str r0, [r1, #52]
_0802258C:
	add r0, r5, #0
	bl DeleteThisEntity
	b _0802272C
_08022594:
	add r0, r5, #0
	bl 0x08003828
	add r0, r5, #0
	add r0, r0, #41
	ldrb r1, [r0]
	cmp r1, #0
	beq _080225A6
	b _080226FA
_080225A6:
	add r0, r5, #0
	bl sub_0803CC20
	add r6, r5, #0
	add r6, r6, #116
	ldrh r0, [r5, #50]
	ldrh r4, [r6]
	sub r0, r0, r4
	add r3, r5, #0
	add r3, r3, #118
	ldrh r1, [r5, #54]
	ldrh r2, [r3]
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r2, r1, #16
	lsl r0, r0, #16
	mov r1, #192
	lsl r1, r1, #10
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #6
	bhi _080225DC
	strh r4, [r5, #50]
	ldrb r1, [r5, #24]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r5, #24]
_080225DC:
	lsl r0, r2, #16
	mov r2, #192
	lsl r2, r2, #10
	add r0, r0, r2
	lsr r0, r0, #16
	cmp r0, #6
	bhi _080225F6
	ldrh r0, [r3]
	strh r0, [r5, #54]
	ldrb r1, [r5, #24]
	mov r0, #2
	orr r0, r0, r1
	strb r0, [r5, #24]
_080225F6:
	ldrb r0, [r5, #24]
	cmp r0, #3
	bne _080226C4
	add r1, r5, #0
	add r1, r1, #43
	mov r0, #255
	strb r0, [r1]
	mov r1, #128
	lsl r1, r1, #6
	add r0, r5, #0
	bl 0x08003594
	cmp r0, #0
	beq _08022614
	b _08022720
_08022614:
	add r0, r5, #0
	add r0, r0, #40
	mov r1, #1
	strb r1, [r0]
	ldrb r0, [r5, #23]
	cmp r0, #0
	beq _080226AE
	mov r0, #96
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _080226A8
	mov r0, #129
	strb r0, [r4, #27]
	add r1, r4, #0
	add r1, r1, #35
	mov r0, #13
	strb r0, [r1]
	ldrh r0, [r5, #50]
	strh r0, [r4, #50]
	ldrh r0, [r5, #54]
	strh r0, [r4, #54]
	ldrb r1, [r5, #30]
	lsl r1, r1, #28
	lsr r1, r1, #28
	add r1, r1, #1
	mov r0, #15
	and r1, r1, r0
	ldrb r2, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldrb r1, [r5, #29]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r3, [r4, #29]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldrb r1, [r5, #31]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r3, [r4, #31]
	add r0, r2, #0
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r4, #31]
	ldrb r0, [r5, #28]
	lsr r0, r0, #6
	lsl r0, r0, #6
	ldrb r1, [r4, #28]
	and r2, r2, r1
	orr r2, r2, r0
	strb r2, [r4, #28]
	add r0, r5, #0
	add r0, r0, #32
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #32
	strb r1, [r0]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2]
_080226A8:
	mov r0, #167
	bl play_sound
_080226AE:
	ldr r2, [r5, #84]
	add r2, r2, #121
	ldrb r0, [r5, #11]
	mov r1, #15
	and r1, r1, r0
	mov r0, #1
	lsl r0, r0, r1
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	b _08022720
_080226C4:
	mov r4, #50
	ldrsh r0, [r5, r4]
	mov r2, #54
	ldrsh r1, [r5, r2]
	mov r4, #0
	ldrsh r2, [r6, r4]
	mov r4, #0
	ldrsh r3, [r3, r4]
	bl 0x08003F54
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r0, [r5, #16]
	cmp r0, #0
	beq _080226F0
	mov r1, #128
	lsl r1, r1, #5
	add r0, r5, #0
	bl 0x08003594
	b _08022720
_080226F0:
	add r1, r5, #0
	add r1, r1, #40
	mov r0, #2
	strb r0, [r1]
	b _08022720
_080226FA:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08022720
	ldr r0, [r5, #84]
	add r0, r0, #121
	ldrb r0, [r0]
	cmp r0, #0
	bne _08022720
	add r2, r5, #0
	add r2, r2, #114
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #7
	and r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_08022508
_08022720:
	add r0, r5, #0
	bl sub_08022C24
	ldrb r1, [r5, #24]
	orr r1, r1, r0
	strb r1, [r5, #24]
_0802272C:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802256C

	.byte 0x00
	.byte 0x00
