	THUMB_FUNC_START sub_08037D64
sub_08037D64: @ 0x08037D64
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08037D78  @ =gUnknown_03000FC0
	ldrb r1, [r0, #14]
	cmp r1, #0
	beq _08037D7C
	b _08037DDE
	.byte 0x00
	.byte 0x00
_08037D78:
	.4byte gUnknown_03000FC0
_08037D7C:
	ldr r4, _08037D9C  @ =gUnknown_03000FC0
	ldr r1, [r7]
	add r0, r1, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	bl sub_08037C58
	cmp r0, #0
	bne _08037DA0
	ldr r0, _08037D9C  @ =gUnknown_03000FC0
	ldrh r1, [r0, #12]
	add r2, r1, #1
	add r0, r2, #0
	b _08037DA2
	.byte 0x00
	.byte 0x00
_08037D9C:
	.4byte gUnknown_03000FC0
_08037DA0:
	mov r0, #0
_08037DA2:
	ldrh r1, [r4, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	orr r0, r0, r2
	add r1, r0, #0
	strh r1, [r4, #12]
	ldr r0, _08037DCC  @ =gUnknown_03000BF0
	ldr r1, [r0]
	mov r2, #192
	lsl r2, r2, #6
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	bne _08037DD4
	ldr r0, _08037DD0  @ =gUnknown_03000FC0
	ldrh r1, [r0, #12]
	cmp r1, #60
	bhi _08037DD4
	b _08037DDE
	.byte 0x00
	.byte 0x00
_08037DCC:
	.4byte gUnknown_03000BF0
_08037DD0:
	.4byte gUnknown_03000FC0
_08037DD4:
	bl sub_08036760
	mov r0, #10
	bl set_main_state
_08037DDE:
	add sp, sp, #4
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08037D64

	.byte 0x00
	.byte 0x00
