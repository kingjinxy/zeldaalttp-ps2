	THUMB_FUNC_START sub_08031AA0
sub_08031AA0: @ 0x08031AA0
	push {r4,r5,lr}
	ldr r5, _08031AB0  @ =gSubState
	ldrb r0, [r5]
	cmp r0, #0
	beq _08031AB4
	cmp r0, #1
	beq _08031AFC
	b _08031B38
_08031AB0:
	.4byte gSubState
_08031AB4:
	ldr r1, _08031AF0  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08031B38
	ldr r4, _08031AF4  @ =gUnknown_030004A0
	add r1, r4, #0
	add r1, r1, #102
	mov r0, #253
	lsl r0, r0, #6
	strh r0, [r1]
	add r1, r1, #2
	ldr r0, _08031AF8  @ =0x0000070C
	strh r0, [r1]
	mov r0, #0
	mov r1, #1
	bl sub_080599A8
	ldrh r0, [r4]
	mov r2, #184
	lsl r2, r2, #5
	add r1, r2, #0
	orr r0, r0, r1
	strh r0, [r4]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	b _08031B38
_08031AF0:
	.4byte gUnknown_02016D60
_08031AF4:
	.4byte gUnknown_030004A0
_08031AF8:
	.4byte 0x0000070C
_08031AFC:
	bl sub_08059A2C
	cmp r0, #0
	beq _08031B38
	ldr r0, _08031B40  @ =gUnknown_03005050
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #0
	strb r0, [r5]
	mov r1, #0
	ldr r2, _08031B44  @ =gUnknown_03006C80
	ldrb r0, [r2]
	cmp r1, r0
	bcs _08031B34
	ldr r4, _08031B48  @ =gUnknown_03006A30
	mov r3, #3
_08031B1E:
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r4
	strb r3, [r0, #12]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldrb r0, [r2]
	cmp r1, r0
	bcc _08031B1E
_08031B34:
	bl sub_08059A44
_08031B38:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031B40:
	.4byte gUnknown_03005050
_08031B44:
	.4byte gUnknown_03006C80
_08031B48:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08031AA0

