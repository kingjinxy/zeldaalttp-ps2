	THUMB_FUNC_START sub_080637F4
sub_080637F4: @ 0x080637F4
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #100
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #100
	ldrh r3, [r2]
	sub r1, r3, #1
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
	ldr r0, _08063854  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	ldr r2, _08063858  @ =0x00001810
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0806385C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #100
	ldrh r0, [r1]
	cmp r0, #0
	bne _080638A8
	b _0806385C
_08063854:
	.4byte gUnknown_03006A30
_08063858:
	.4byte 0x00001810
_0806385C:
	ldr r0, _080638A0  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080638A0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #88]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _080638A4  @ =0x0000FBFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08063C54
_080638A0:
	.4byte gUnknown_03006A30
_080638A4:
	.4byte 0x0000FBFF
_080638A8:
	ldr r0, _08063924  @ =gUnknown_03005E10
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r2, r1, #0
	lsl r1, r2, #1
	add r0, r0, r1
	ldrh r1, [r0]
	cmp r1, #0
	beq _080638D6
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
_080638D6:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #30
	bls _08063930
	ldr r0, _08063928  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08063928  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #88]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _0806392C  @ =0x0000FBFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08063C54
	.byte 0x00
	.byte 0x00
_08063924:
	.4byte gUnknown_03005E10
_08063928:
	.4byte gUnknown_03006A30
_0806392C:
	.4byte 0x0000FBFF
_08063930:
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #88]
	ldr r2, _08063A14  @ =gUnknown_081420A8
	ldr r3, [r7]
	ldr r4, [r3, #88]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
	lsr r4, r3, #1
	add r3, r4, #0
	lsl r4, r3, #24
	lsr r3, r4, #24
	add r2, r2, r3
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrh r3, [r2, #54]
	sub r1, r3, #6
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldr r1, [r2, #56]
	str r1, [r0, #56]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #88]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #29]
	lsl r2, r1, #24
	lsr r1, r2, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	lsr r1, r0, #1
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #2
	bne _08063A18
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08063A28
_08063A14:
	.4byte gUnknown_081420A8
_08063A18:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #3
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_08063A28:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08063AB2
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _08063AB2
	ldr r0, [r7]
	ldr r1, [r0, #88]
	mov r2, #4
	neg r2, r2
	add r0, r1, #0
	add r1, r2, #0
	bl sub_0802C3F0
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldr r2, [r0, #88]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	mov r1, #195
	bl sub_08003E10
_08063AB2:
	ldr r0, _08063B30  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08063ADA
	b _08063C4E
_08063ADA:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #128
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08063AF6
	b _08063C4C
_08063AF6:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08063B0E
	b _08063C4C
_08063B0E:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #16
	bls _08063B26
	b _08063C4C
_08063B26:
	lsl r1, r0, #2
	ldr r2, _08063B34  @ =0x08063B38
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
_08063B30:
	.4byte gUnknown_03006A30
_08063B34:
	.4byte _08063B34+0x4
	.4byte _08063BC8
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063B7C
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063B7C
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063B7C
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063C4C
	.4byte _08063B7C
_08063B7C:
	ldr r0, _08063BC0  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08063BC0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #88]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _08063BC4  @ =0x0000FBFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08063C4C
_08063BC0:
	.4byte gUnknown_03006A30
_08063BC4:
	.4byte 0x0000FBFF
_08063BC8:
	ldr r0, _08063C48  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08063C46
	mov r0, #85
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08063C46
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	str r2, [r0, #88]
	ldr r0, _08063C48  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08063C48  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #76]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	mov r3, #128
	lsl r3, r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08063C46:
	b _08063C4C
_08063C48:
	.4byte gUnknown_03006A30
_08063C4C:
	b _08063C54
_08063C4E:
	ldr r0, [r7]
	bl DeleteThisEntity
_08063C54:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080637F4

