	THUMB_FUNC_START sub_08040074
sub_08040074: @ 0x08040074
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #33
	ldrb r3, [r2]
	add r1, r3, #0
	sub r1, r1, #37
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _080400D0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #64
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080400D4
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #251
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	b _0804013C
_080400D0:
	.4byte gUnknown_03006A30
_080400D4:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #2
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08040116
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #28]
	lsl r3, r2, #29
	lsr r1, r3, #31
	mov r2, #1
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	b _0804013C
_08040116:
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #28]
	lsl r3, r2, #29
	lsr r1, r3, #31
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
_0804013C:
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
	bne _08040154
	b _0804041E
_08040154:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804016E
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #129
	beq _0804016E
	b _080401F8
_0804016E:
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #61
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #62
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #66
	add r2, r0, #0
	add r0, r0, #66
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	add r3, r2, #0
	add r2, r2, #66
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strb r4, [r2]
	add r2, r1, #0
	add r1, r1, #62
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_080401F8:
	ldr r0, _08040234  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	cmp r1, #0
	bne _08040210
	b _0804041E
_08040210:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #52
	beq _0804023E
	cmp r0, #52
	bgt _08040238
	cmp r0, #12
	beq _08040240
	cmp r0, #38
	beq _08040240
	b _0804039C
_08040234:
	.4byte gUnknown_03006A30
_08040238:
	cmp r0, #63
	beq _0804023E
	b _0804039C
_0804023E:
	b _0804041E
_08040240:
	ldr r0, _08040394  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08040394  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r1, #27]
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #27]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #27]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #66
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	bl sub_080123E8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _08040336
	ldr r0, [r7, #8]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _08040398  @ =gUnknown_0813E8DC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
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
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _08040398  @ =gUnknown_0813E8DC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #42
	ldrb r3, [r4]
	add r4, r3, #1
	add r2, r2, r4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #54]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r1, [r7, #8]
	mov r0, #6
	bl sub_08012728
_08040336:
	ldr r0, _08040394  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #32
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08040390
	ldr r0, _08040394  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08040394  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r1, #27]
	mov r3, #254
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #27]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #27]
_08040390:
	b _0804041E
	.byte 0x00
	.byte 0x00
_08040394:
	.4byte gUnknown_03006A30
_08040398:
	.4byte gUnknown_0813E8DC
_0804039C:
	ldr r0, _08040460  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #192
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804041E
	ldr r0, _08040460  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, _08040460  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, _08040460  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r0, #72]
	add r0, r1, #0
	bl sub_0800BE50
	ldr r0, [r7]
	bl DeleteThisEntity
_0804041E:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804048A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _08040464
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #61
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0804048A
_08040460:
	.4byte gUnknown_03006A30
_08040464:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #61
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #61
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #61
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804048A:
	add r0, r7, #0
	add r0, r0, #12
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #33
	ldrb r1, [r2]
	add r2, r1, #0
	sub r2, r2, #37
	add r1, r2, #0
	lsl r2, r1, #2
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _08040558  @ =gUnknown_0813E918
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r1, r1, r3
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _08040558  @ =gUnknown_0813E918
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r2, r3, #1
	add r1, r1, r2
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _08040558  @ =gUnknown_0813E918
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r2, r3, #2
	add r1, r1, r2
	ldrb r2, [r0, #6]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #6]
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _08040558  @ =gUnknown_0813E918
	add r2, r7, #0
	add r2, r2, #12
	ldrh r3, [r2]
	add r2, r3, #3
	add r1, r1, r2
	ldrb r2, [r0, #7]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #7]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	lsl r2, r1, #29
	lsr r0, r2, #31
	cmp r0, #0
	beq _08040550
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, [r7]
	ldr r2, [r1, #72]
	ldrb r3, [r2]
	neg r1, r3
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08040550:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
_08040558:
	.4byte gUnknown_0813E918
	THUMB_FUNC_END sub_08040074

