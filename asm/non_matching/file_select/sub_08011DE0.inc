	THUMB_FUNC_START sub_08011DE0
sub_08011DE0: @ 0x08011DE0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _08011E12
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	strb r1, [r4, #29]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
_08011E12:
	ldr r0, _08011E24  @ =gUnknown_02016D60
	add r1, r0, #0
	add r1, r1, #34
	ldrb r0, [r1]
	cmp r0, #5
	bhi _08011E28
	lsl r0, r0, #3
	add r0, r0, #36
	b _08011E2A
_08011E24:
	.4byte gUnknown_02016D60
_08011E28:
	mov r0, #76
_08011E2A:
	strh r0, [r4, #50]
	mov r0, #13
	strh r0, [r4, #54]
	ldr r2, _08011E54  @ =gUnknown_08427614
	ldr r0, _08011E58  @ =gUnknown_03000948
	ldrh r0, [r0]
	lsr r0, r0, #2
	mov r1, #7
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	strh r0, [r4, #58]
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08011E54:
	.4byte gUnknown_08427614
_08011E58:
	.4byte gUnknown_03000948
	THUMB_FUNC_END sub_08011DE0

