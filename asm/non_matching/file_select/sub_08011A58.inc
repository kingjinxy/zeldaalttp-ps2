	THUMB_FUNC_START sub_08011A58
sub_08011A58: @ 0x08011A58
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r3, _08011A80  @ =gUnknown_02016D60
	mov r5, #1
	strb r5, [r3, #27]
	ldrb r0, [r4, #24]
	cmp r0, #39
	bhi _08011A88
	add r0, r0, #4
	strb r0, [r4, #24]
	ldr r3, _08011A84  @ =gUnknown_030004A0
	ldrb r0, [r4, #23]
	lsl r2, r0, #8
	ldrb r1, [r4, #24]
	add r0, r0, r1
	orr r2, r2, r0
	add r3, r3, #92
	strh r2, [r3]
	b _08011A98
	.byte 0x00
	.byte 0x00
_08011A80:
	.4byte gUnknown_02016D60
_08011A84:
	.4byte gUnknown_030004A0
_08011A88:
	ldr r2, _08011AA0  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _08011AA4  @ =0x0000DFFF
	and r0, r0, r1
	strh r0, [r2]
	ldrb r0, [r4, #11]
	strb r0, [r3, #28]
	strb r5, [r4, #20]
_08011A98:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08011AA0:
	.4byte gUnknown_030004A0
_08011AA4:
	.4byte 0x0000DFFF
	THUMB_FUNC_END sub_08011A58

