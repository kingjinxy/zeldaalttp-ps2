	THUMB_FUNC_START sub_08055688
sub_08055688: @ 0x08055688
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _080556CA
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
	bne _080556C8
	ldr r0, [r7]
	bl DeleteThisEntity
_080556C8:
	b _080559F2
_080556CA:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	bl sub_08013D54
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #32
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r0
	add r0, r2, #0
	strb r0, [r1]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #71
	ldrb r0, [r1]
	cmp r0, #0
	bne _080556F8
	b _080559F2
_080556F8:
	bl sub_080123E8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080557FE
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #33
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #11]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #11]
	ldr r0, [r7, #4]
	ldr r1, _080559FC  @ =gUnknown_03006A30
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #71
	ldrb r4, [r3]
	sub r2, r4, #1
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, _080559FC  @ =gUnknown_03006A30
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #71
	ldrb r4, [r3]
	sub r2, r4, #1
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	ldr r2, [r1, #52]
	add r1, r2, #1
	str r1, [r0, #52]
	ldr r0, [r7, #4]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _08055A00  @ =0x0000FFEC
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
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
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r1, [r7, #4]
	mov r0, #6
	bl sub_08012728
_080557FE:
	ldr r0, _080559FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #71
	ldrb r3, [r2]
	sub r1, r3, #1
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _080559FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #71
	ldrb r3, [r2]
	sub r1, r3, #1
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080559FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #71
	ldrb r3, [r2]
	sub r1, r3, #1
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080559FC  @ =gUnknown_03006A30
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #71
	ldrb r4, [r3]
	sub r2, r4, #1
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r1, #11]
	mov r3, #127
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r0, _080559FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #71
	ldrb r3, [r2]
	sub r1, r3, #1
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080559FC  @ =gUnknown_03006A30
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #71
	ldrb r4, [r3]
	sub r2, r4, #1
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	mov r3, #1
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
	ldr r0, [r7]
	ldr r1, _080559FC  @ =gUnknown_03006A30
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #71
	ldrb r4, [r3]
	sub r2, r4, #1
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #28]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, _080559FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #71
	ldrb r3, [r2]
	sub r1, r3, #1
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, [r7]
	ldrb r2, [r0, #28]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, _08055A04  @ =gUnknown_03006C80
	ldr r1, _080559FC  @ =gUnknown_03006A30
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #71
	ldrb r4, [r3]
	sub r2, r4, #1
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r3, [r2]
	ldrb r1, [r3, #10]
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #88
	add r0, r3, r1
	ldr r1, [r7]
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, _080559FC  @ =gUnknown_03006A30
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #71
	ldrb r3, [r2]
	sub r1, r3, #1
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	bl sub_08055A08
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #23]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	bl sub_0802C3E0
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, [r7]
	lsl r3, r2, #24
	lsr r2, r3, #24
	add r3, r2, #0
	mov r4, #15
	and r3, r3, r4
	ldrb r4, [r1, #30]
	mov r5, #240
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #4
	ldrb r2, [r0, #30]
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #71
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_080559F2:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080559FC:
	.4byte gUnknown_03006A30
_08055A00:
	.4byte 0x0000FFEC
_08055A04:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08055688

