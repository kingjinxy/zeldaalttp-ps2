	THUMB_FUNC_START sub_08057F58
sub_08057F58: @ 0x08057F58
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805804C  @ =gUnknown_030004A0
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #0
	mov r2, #16
	sub r1, r2, r1
	add r2, r1, #0
	lsl r1, r2, #8
	ldr r2, [r7]
	ldrb r3, [r2, #23]
	add r2, r3, #0
	add r3, r1, #0
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r0, #0
	add r0, r0, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
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
	cmp r0, #0
	bne _08058042
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
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, _08058050  @ =gUnknown_08428F70
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrb r2, [r1]
	add r1, r2, #0
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldr r1, _08058050  @ =gUnknown_08428F70
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	lsl r3, r2, #1
	add r2, r3, #1
	add r1, r1, r2
	ldrb r2, [r1]
	add r1, r2, #0
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	ldr r0, _08058054  @ =gUnknown_02016D60
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
_08058042:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805804C:
	.4byte gUnknown_030004A0
_08058050:
	.4byte gUnknown_08428F70
_08058054:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08057F58

