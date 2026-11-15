	THUMB_FUNC_START sub_0804055C
sub_0804055C: @ 0x0804055C
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, _080406E0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #15
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08040592
	b _080407CE
_08040592:
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, _080406E4  @ =gUnknown_0813E8F0
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #41
	ldrb r2, [r3]
	mov r3, #15
	and r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	sub r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrb r2, [r1]
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #13
	ldr r1, _080406E4  @ =gUnknown_0813E8F0
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r3, r3, #41
	ldrb r2, [r3]
	mov r3, #15
	and r2, r2, r3
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	sub r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r3, #1
	add r1, r1, r2
	ldrb r2, [r1]
	strb r2, [r0]
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #15
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #3
	bhi _0804060E
	ldr r0, [r7, #4]
	ldrb r1, [r0, #28]
	lsl r2, r1, #29
	lsr r0, r2, #31
	cmp r0, #0
	beq _0804060E
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	neg r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0804060E:
	ldr r0, [r7]
	ldr r1, [r0, #56]
	cmp r1, #0
	beq _08040618
	b _080407CE
_08040618:
	ldr r0, _080406E0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #18]
	cmp r1, #172
	bne _08040630
	b _080407CE
_08040630:
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #12
	mov r2, #0
	ldrsb r2, [r1, r2]
	add r1, r2, #0
	ldrh r0, [r0, #50]
	add r1, r1, r0
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r2, r0, #16
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #13
	mov r3, #0
	ldrsb r3, [r1, r3]
	add r1, r3, #0
	ldrh r0, [r0, #54]
	add r1, r1, r0
	add r3, r1, #0
	lsl r0, r3, #16
	lsr r3, r0, #16
	ldr r0, [r7]
	mov r1, #0
	bl 0x080017EC
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804066E
	b _080407CE
_0804066E:
	ldr r0, _080406E0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #27]
	cmp r1, #0
	bne _08040686
	b _080407CE
_08040686:
	ldr r0, _080406E0  @ =gUnknown_03006A30
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
	beq _080406AA
	b _080407CE
_080406AA:
	add r4, r7, #0
	add r4, r4, #14
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	ldrsb r1, [r0, r1]
	add r0, r7, #0
	add r0, r0, #13
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r0, [r7]
	bl 0x0800934C
	add r1, r0, #0
	strb r1, [r4]
	add r0, r7, #0
	add r0, r0, #14
	ldrb r1, [r0]
	cmp r1, #59
	beq _080406E8
	add r0, r7, #0
	add r0, r0, #14
	ldrb r1, [r0]
	cmp r1, #81
	beq _080406E8
	b _0804070C
	.byte 0x00
	.byte 0x00
_080406E0:
	.4byte gUnknown_03006A30
_080406E4:
	.4byte gUnknown_0813E8F0
_080406E8:
	ldr r0, _08040708  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	mov r1, #31
	bl 0x08003E10
	b _08040728
	.byte 0x00
	.byte 0x00
_08040708:
	.4byte gUnknown_03006A30
_0804070C:
	ldr r0, _080407D8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	mov r1, #29
	bl 0x08003E10
_08040728:
	bl sub_080123E8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _080407CE
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
	mov r3, #26
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, _080407DC  @ =gUnknown_0813E904
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
	ldr r2, _080407DC  @ =gUnknown_0813E904
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
_080407CE:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080407D8:
	.4byte gUnknown_03006A30
_080407DC:
	.4byte gUnknown_0813E904
	THUMB_FUNC_END sub_0804055C

