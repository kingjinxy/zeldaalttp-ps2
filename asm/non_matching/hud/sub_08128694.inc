	THUMB_FUNC_START sub_08128694
sub_08128694: @ 0x08128694
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _081286F4  @ =gUnknown_0816B5A8
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _081286F8  @ =gBow
	add r0, r2, r1
	ldrb r3, [r0]
	cmp r2, #32
	beq _081286B0
	cmp r2, #3
	bne _081286B2
_081286B0:
	mov r3, #1
_081286B2:
	lsl r2, r3, #27
	lsr r3, r2, #24
	ldr r0, _081286FC  @ =gRam
	ldr r1, _08128700  @ =0x0000098E
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08128708
	ldr r1, _08128704  @ =gUnknown_020101E0
	add r0, r3, #0
	add r0, r0, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	mov r0, #2
	orr r0, r0, r3
	add r0, r0, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #38
	mov r0, #4
	orr r0, r0, r3
	add r0, r0, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	mov r0, #6
	orr r3, r3, r0
	add r0, r3, r4
	b _08128738
	.byte 0x00
	.byte 0x00
_081286F4:
	.4byte gUnknown_0816B5A8
_081286F8:
	.4byte gBow
_081286FC:
	.4byte gRam
_08128700:
	.4byte 0x0000098E
_08128704:
	.4byte gUnknown_020101E0
_08128708:
	ldr r1, _08128744  @ =gUnknown_02010232
	lsr r0, r2, #24
	add r0, r0, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r0, r3, #2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #40
	add r0, r3, #4
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r0, [r0]
	strh r0, [r1]
	add r1, r1, #2
	add r0, r3, #6
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r4
_08128738:
	ldrh r0, [r0]
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08128744:
	.4byte gUnknown_02010232
	THUMB_FUNC_END sub_08128694

