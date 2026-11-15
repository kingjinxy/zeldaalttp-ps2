	THUMB_FUNC_START sub_0802FC84
sub_0802FC84: @ 0x0802FC84
	push {lr}
	ldr r1, _0802FCB8  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802FCB4
	ldr r1, _0802FCBC  @ =gUnknown_030004A0
	mov r0, #250
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r1, _0802FCC0  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _0802FCC4  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0802FCB4:
	pop {r0}
	bx r0
_0802FCB8:
	.4byte gUnknown_02016D60
_0802FCBC:
	.4byte gUnknown_030004A0
_0802FCC0:
	.4byte gUnknown_03000520
_0802FCC4:
	.4byte gSubState
	THUMB_FUNC_END sub_0802FC84

