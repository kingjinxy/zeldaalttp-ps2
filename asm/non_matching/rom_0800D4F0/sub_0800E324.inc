	THUMB_FUNC_START sub_0800E324
sub_0800E324: @ 0x0800E324
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #27]
	cmp r0, #2
	beq _0800E35C
	mov r0, #6
	bl sub_0800E69C
	add r0, r4, #0
	add r0, r0, #254
	ldrb r0, [r0]
	cmp r0, #0
	bne _0800E394
	ldr r1, _0800E354  @ =gUnknown_03005E10
	ldr r0, _0800E358  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #243
	and r0, r0, r1
	cmp r0, #0
	beq _0800E394
	b _0800E38C
_0800E354:
	.4byte gUnknown_03005E10
_0800E358:
	.4byte gLCDRegisterBuffer
_0800E35C:
	ldr r0, _0800E374  @ =gUnknown_0201ED90
	ldrh r1, [r0, #6]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0800E378
	mov r0, #130
	lsl r0, r0, #1
	add r1, r4, r0
	mov r0, #1
	b _0800E392
_0800E374:
	.4byte gUnknown_0201ED90
_0800E378:
	mov r0, #130
	lsl r0, r0, #1
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _0800E394
_0800E38C:
	add r1, r4, #0
	add r1, r1, #249
	mov r0, #3
_0800E392:
	strb r0, [r1]
_0800E394:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800E324

	.byte 0x00
	.byte 0x00
