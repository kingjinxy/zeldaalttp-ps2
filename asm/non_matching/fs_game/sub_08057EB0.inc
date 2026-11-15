	THUMB_FUNC_START sub_08057EB0
sub_08057EB0: @ 0x08057EB0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08057F50  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	cmp r1, #2
	bls _08057F46
	ldr r0, _08057F50  @ =gUnknown_02016D60
	ldr r1, [r7]
	ldrb r0, [r0, #2]
	ldrb r1, [r1, #11]
	cmp r0, r1
	bne _08057F46
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #243
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, _08057F54  @ =gUnknown_030004A0
	add r1, r0, #0
	add r0, r0, #102
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #253
	lsl r3, r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08057F54  @ =gUnknown_030004A0
	add r1, r0, #0
	add r0, r0, #104
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	mov r0, #127
	bl play_sound
_08057F46:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08057F50:
	.4byte gUnknown_02016D60
_08057F54:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_08057EB0

