	THUMB_FUNC_START sub_08022044
sub_08022044: @ 0x08022044
	push {r4-r6,lr}
	add r5, r0, #0
	ldrb r0, [r5, #20]
	cmp r0, #2
	beq _08022050
	b _08022328
_08022050:
	add r3, r5, #0
	add r3, r3, #65
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	add r6, r5, #0
	add r6, r6, #61
	cmp r0, #0
	bne _08022064
	b _080222C2
_08022064:
	mov r0, #240
	strb r0, [r6]
	ldr r1, [r5, #76]
	ldrb r2, [r5, #11]
	mov r0, #15
	ldrb r1, [r1, #10]
	and r0, r0, r2
	cmp r1, r0
	bne _0802216A
	ldrb r0, [r3]
	mov r2, #127
	and r2, r2, r0
	cmp r2, #24
	bls _08022082
	b _080222C2
_08022082:
	lsl r0, r2, #2
	ldr r1, _0802208C  @ =0x08022090
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802208C:
	.4byte _0802208C+0x4
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _08022118
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _08022118
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _08022118
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080220F4
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _08022118
_080220F4:
	ldr r2, _0802213C  @ =gUnknown_03006A30
	ldr r0, [r5, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r1, #6
	strb r1, [r0, #12]
	ldr r0, [r5, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #56
	mov r1, #1
	strb r1, [r0]
_08022118:
	ldr r0, [r5, #84]
	add r0, r0, #61
	mov r1, #24
	strb r1, [r0]
	strb r1, [r6]
	ldr r0, [r5, #84]
	add r2, r0, #0
	add r2, r2, #69
	ldrb r1, [r2]
	ldr r0, [r5, #76]
	add r0, r0, #68
	ldrb r0, [r0]
	sub r1, r1, r0
	cmp r1, #0
	bgt _08022140
	mov r0, #0
	strb r0, [r2]
	b _08022142
_0802213C:
	.4byte gUnknown_03006A30
_08022140:
	strb r1, [r2]
_08022142:
	ldrb r0, [r5, #11]
	mov r2, #15
	mov r3, #15
	add r1, r3, #0
	and r1, r1, r0
	add r1, r1, #7
	and r1, r1, r2
	ldrb r2, [r5, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	lsl r1, r1, #4
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r5, #30]
	mov r0, #45
	bl play_sound
	b _080222C2
_0802216A:
	ldrb r0, [r3]
	mov r2, #127
	and r2, r2, r0
	cmp r2, #16
	bls _08022176
	b _080222C2
_08022176:
	lsl r0, r2, #2
	ldr r1, _08022180  @ =0x08022184
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08022180:
	.4byte _08022180+0x4
	.4byte _08022292
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080221C8
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080221C8
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080221C8
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080222C2
	.4byte _080221C8
_080221C8:
	ldr r2, _080222F8  @ =gUnknown_03006A30
	ldr r0, [r5, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r2, [r0]
	add r0, r2, #0
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	bne _080221EE
	mov r1, #4
	neg r1, r1
	add r0, r2, #0
	bl sub_0802C3F0
_080221EE:
	ldr r0, [r5, #76]
	add r0, r0, #61
	mov r1, #24
	strb r1, [r0]
	ldr r0, [r5, #84]
	ldrb r0, [r0, #20]
	cmp r0, #14
	beq _080222C2
	mov r0, #96
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08022292
	mov r0, #129
	strb r0, [r4, #27]
	add r1, r4, #0
	add r1, r1, #35
	mov r0, #33
	strb r0, [r1]
	ldr r0, [r5, #84]
	ldrh r0, [r0, #50]
	strh r0, [r4, #50]
	ldr r0, [r5, #84]
	ldrh r0, [r0, #54]
	add r0, r0, #1
	strh r0, [r4, #54]
	ldr r0, [r5, #84]
	ldrb r1, [r0, #30]
	lsr r1, r1, #4
	add r1, r1, #1
	mov r0, #15
	add r2, r1, #0
	and r2, r2, r0
	ldrb r3, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r3
	orr r0, r0, r2
	mov r2, #15
	and r1, r1, r2
	lsl r1, r1, #4
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #30]
	ldr r0, [r5, #84]
	ldrb r1, [r0, #29]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r3, [r4, #29]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldr r0, [r5, #84]
	ldrb r1, [r0, #31]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r3, [r4, #31]
	add r0, r2, #0
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r4, #31]
	ldr r0, [r5, #84]
	ldrb r0, [r0, #28]
	lsr r0, r0, #6
	lsl r0, r0, #6
	ldrb r1, [r4, #28]
	and r2, r2, r1
	orr r2, r2, r0
	strb r2, [r4, #28]
	ldr r0, [r5, #84]
	add r0, r0, #32
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #32
	strb r1, [r0]
	mov r0, #120
	strb r0, [r4, #23]
_08022292:
	ldr r1, [r5, #84]
	ldrb r0, [r1, #20]
	cmp r0, #14
	beq _080222C2
	mov r0, #120
	strb r0, [r1, #23]
	ldr r1, [r5, #84]
	mov r0, #14
	strb r0, [r1, #20]
	ldr r2, _080222F8  @ =gUnknown_03006A30
	ldr r0, [r5, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	add r0, r0, #61
	mov r1, #24
	strb r1, [r0]
	ldr r0, [r5, #76]
	bl sub_080023C8
_080222C2:
	ldrb r0, [r6]
	cmp r0, #0
	bne _08022314
	ldr r0, _080222FC  @ =gLCDRegisterBuffer
	add r1, r5, #0
	add r1, r1, #115
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08022300
	ldrb r0, [r5, #11]
	mov r2, #15
	mov r3, #15
	add r1, r3, #0
	and r1, r1, r0
	add r1, r1, #7
	and r1, r1, r2
	ldrb r2, [r5, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	lsl r1, r1, #4
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r5, #30]
	b _08022314
_080222F8:
	.4byte gUnknown_03006A30
_080222FC:
	.4byte gLCDRegisterBuffer
_08022300:
	ldr r0, [r5, #84]
	ldrb r0, [r0, #30]
	lsl r0, r0, #28
	lsr r0, r0, #28
	add r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	lsl r1, r0, #4
	orr r1, r1, r0
	strb r1, [r5, #30]
_08022314:
	ldr r0, [r5, #84]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _08022320
	b _08022420
_08022320:
	add r0, r5, #0
	bl sub_08043F20
	b _08022420
_08022328:
	ldr r0, [r5, #84]
	ldrb r0, [r0, #20]
	cmp r0, #9
	bne _080223BC
	mov r3, #1
	mov r6, #1
	strb r6, [r5, #20]
	add r2, r5, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r3
	strb r0, [r5, #28]
	ldr r0, [r5, #84]
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r5, #0
	add r0, r0, #80
	strh r1, [r0]
	ldrb r0, [r5, #23]
	mov r4, #15
	mov r1, #15
	and r1, r1, r0
	ldrb r0, [r5, #10]
	add r0, r0, #7
	add r1, r1, r0
	and r1, r1, r4
	ldrb r0, [r5, #30]
	mov r3, #16
	neg r3, r3
	add r2, r3, #0
	and r2, r2, r0
	orr r2, r2, r1
	strb r2, [r5, #30]
	lsl r0, r2, #28
	lsr r0, r0, #28
	cmp r0, #10
	ble _0802238A
	sub r0, r0, #4
	and r0, r0, r4
	and r2, r2, r3
	orr r2, r2, r0
	strb r2, [r5, #30]
_0802238A:
	ldrb r0, [r5, #24]
	sub r0, r0, #1
	strb r0, [r5, #24]
	mov r2, #255
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _08022420
	add r1, r5, #0
	add r1, r1, #116
	ldrb r0, [r1]
	cmp r0, #0
	beq _080223AE
	sub r0, r0, #1
	strb r0, [r1]
	and r0, r0, r2
	strb r0, [r5, #24]
	b _080223B0
_080223AE:
	strb r6, [r5, #24]
_080223B0:
	ldrb r0, [r5, #10]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r5, #10]
	b _08022420
_080223BC:
	mov r0, #2
	strb r0, [r5, #20]
	add r2, r5, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _080223FC  @ =gLCDRegisterBuffer
	add r1, r5, #0
	add r1, r1, #115
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08022400
	ldrb r0, [r5, #11]
	mov r2, #15
	mov r3, #15
	add r1, r3, #0
	and r1, r1, r0
	add r1, r1, #7
	and r1, r1, r2
	ldrb r2, [r5, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	lsl r1, r1, #4
	and r0, r0, r3
	orr r0, r0, r1
	strb r0, [r5, #30]
	b _08022414
_080223FC:
	.4byte gLCDRegisterBuffer
_08022400:
	ldr r0, [r5, #84]
	ldrb r0, [r0, #30]
	lsl r0, r0, #28
	lsr r0, r0, #28
	add r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	lsl r1, r0, #4
	orr r1, r1, r0
	strb r1, [r5, #30]
_08022414:
	ldr r0, _08022444  @ =gUnknown_08427678
	ldrb r1, [r5, #23]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	str r0, [r5, #72]
_08022420:
	ldr r0, [r5, #84]
	ldr r1, [r0, #48]
	str r1, [r5, #48]
	ldr r3, [r0, #52]
	str r3, [r5, #52]
	add r0, r0, #41
	ldrb r1, [r0]
	ldrb r2, [r5, #23]
	mov r0, #15
	and r0, r0, r2
	asr r1, r1, r0
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08022448
	add r0, r3, #1
	str r0, [r5, #52]
	b _0802245A
_08022444:
	.4byte gUnknown_08427678
_08022448:
	add r2, r5, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
_0802245A:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022044

