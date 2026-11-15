	THUMB_FUNC_START sub_0800C75C
sub_0800C75C: @ 0x0800C75C
	ldr r3, _0800C7B0  @ =gUnknown_02030790
	ldrb r1, [r3]
	cmp r1, #0
	beq _0800C7C0
	ldrb r0, [r3, #4]
	cmp r0, #0
	beq _0800C7DE
	ldrb r0, [r3, #1]
	cmp r0, #0
	beq _0800C7DE
	ldrb r0, [r3, #6]
	cmp r0, #0
	beq _0800C7DE
	mov r0, #1
	neg r0, r0
	str r0, [r3, #24]
	ldr r1, [r3, #40]
	ldr r0, [r3, #36]
	str r0, [r3, #40]
	str r1, [r3, #36]
	ldr r1, [r3, #32]
	ldr r0, [r3, #28]
	str r0, [r3, #32]
	str r1, [r3, #28]
	mov r0, #0
	strb r0, [r3, #4]
	str r0, [r3, #20]
	ldr r2, _0800C7B4  @ =0x04000128
	ldr r0, [r2]
	lsl r0, r0, #25
	lsr r0, r0, #31
	strb r0, [r3, #7]
	ldr r0, _0800C7B8  @ =0x0000FEFE
	strh r0, [r2, #2]
	ldrh r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _0800C7BC  @ =0x0400010E
	mov r0, #192
	strh r0, [r1]
	b _0800C7DE
_0800C7B0:
	.4byte gUnknown_02030790
_0800C7B4:
	.4byte 0x04000128
_0800C7B8:
	.4byte 0x0000FEFE
_0800C7BC:
	.4byte 0x0400010E
_0800C7C0:
	ldrb r0, [r3, #9]
	cmp r0, #3
	bhi _0800C7CC
	add r0, r0, #1
	strb r0, [r3, #9]
	b _0800C7DE
_0800C7CC:
	ldr r3, _0800C7E0  @ =0x04000208
	strh r1, [r3]
	ldr r2, _0800C7E4  @ =gUnknown_03007FF8
	ldrh r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #1
	strh r0, [r3]
_0800C7DE:
	bx lr
_0800C7E0:
	.4byte 0x04000208
_0800C7E4:
	.4byte gUnknown_03007FF8
	THUMB_FUNC_END sub_0800C75C

