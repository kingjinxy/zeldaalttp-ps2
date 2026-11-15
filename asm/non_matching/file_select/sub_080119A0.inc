	THUMB_FUNC_START sub_080119A0
sub_080119A0: @ 0x080119A0
	push {r4,lr}
	add r4, r0, #0
	ldr r3, _080119D4  @ =gUnknown_02016D60
	ldrb r2, [r3, #28]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _08011A44
	mov r1, #3
	and r1, r1, r2
	strb r1, [r4, #11]
	mov r2, #64
	add r0, r1, #0
	orr r0, r0, r2
	strb r0, [r3, #28]
	mov r0, #1
	strb r0, [r3, #27]
	cmp r1, #2
	bls _080119E0
	ldr r2, _080119D8  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _080119DC  @ =0x0000F9FF
	and r0, r0, r1
	strh r0, [r2]
	b _08011A44
	.byte 0x00
	.byte 0x00
_080119D4:
	.4byte gUnknown_02016D60
_080119D8:
	.4byte gUnknown_030004A0
_080119DC:
	.4byte 0x0000F9FF
_080119E0:
	ldr r0, _08011A4C  @ =gUnknown_030004A0
	mov r12, r0
	ldrh r1, [r0]
	mov r2, #152
	lsl r2, r2, #6
	add r0, r2, #0
	mov r3, #0
	orr r0, r0, r1
	mov r1, r12
	strh r0, [r1]
	add r1, r1, #96
	mov r0, #63
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _08011A50  @ =0x00001F39
	strh r0, [r1]
	sub r1, r1, #10
	mov r0, #240
	strh r0, [r1]
	ldr r2, _08011A54  @ =gUnknown_084275D4
	ldrb r0, [r4, #11]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r1, [r0]
	mov r0, r12
	add r0, r0, #92
	strh r1, [r0]
	ldrb r0, [r4, #11]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	neg r0, r0
	mov r1, r12
	strh r0, [r1, #36]
	strh r0, [r1, #24]
	ldrb r0, [r4, #11]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strb r0, [r4, #23]
	strb r3, [r4, #24]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #11]
	bl sub_08010E90
	mov r0, #67
	bl play_sound
_08011A44:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08011A4C:
	.4byte gUnknown_030004A0
_08011A50:
	.4byte 0x00001F39
_08011A54:
	.4byte gUnknown_084275D4
	THUMB_FUNC_END sub_080119A0

