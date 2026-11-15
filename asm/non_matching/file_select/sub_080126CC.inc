	THUMB_FUNC_START sub_080126CC
sub_080126CC: @ 0x080126CC
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r5, _08012718  @ =gUnknown_0202A370
	ldr r1, _0801271C  @ =gUnknown_0202A8C4
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	beq _08012708
	add r4, r1, #0
_080126E4:
	mov r0, #0
	str r0, [sp]
	ldrb r1, [r5]
	lsl r1, r1, #7
	ldr r0, _08012720  @ =gEntityList
	add r1, r1, r0
	add r5, r5, #1
	mov r0, sp
	ldr r2, _08012724  @ =0x05000020
	bl CpuSet
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _080126E4
_08012708:
	ldr r1, _0801271C  @ =gUnknown_0202A8C4
	mov r0, #0
	strb r0, [r1]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08012718:
	.4byte gUnknown_0202A370
_0801271C:
	.4byte gUnknown_0202A8C4
_08012720:
	.4byte gEntityList
_08012724:
	.4byte 0x05000020
	THUMB_FUNC_END sub_080126CC

