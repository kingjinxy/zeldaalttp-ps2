	THUMB_FUNC_START sub_08056AE0
sub_08056AE0: @ 0x08056AE0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08056B14  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	cmp r1, #0
	bne _08056B3E
	ldr r0, [r7]
	ldr r1, _08056B18  @ =gUnknown_02016D60
	ldrb r2, [r1, #8]
	mov r3, #128
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _08056B20
	ldr r1, _08056B1C  @ =gSubState
	ldrb r2, [r1]
	cmp r2, #4
	bne _08056B20
	mov r1, #2
	b _08056B22
	.byte 0x00
	.byte 0x00
_08056B14:
	.4byte gLCDRegisterBuffer
_08056B18:
	.4byte gUnknown_02016D60
_08056B1C:
	.4byte gSubState
_08056B20:
	mov r1, #0
_08056B22:
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	bl GetNextFrame
	b _08056B4A
_08056B3E:
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_08056B4A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08056AE0

	.byte 0x00
	.byte 0x00
