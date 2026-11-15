	THUMB_FUNC_START sub_08021EA8
sub_08021EA8: @ 0x08021EA8
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08021EF8
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r4, #12]
	mov r0, #16
	strb r0, [r4, #20]
	mov r0, #32
	strb r0, [r4, #23]
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r2, #54
	ldrsh r1, [r4, r2]
	mov r3, #252
	lsl r3, r3, #1
	add r2, r3, #0
	bl 0x08003F54
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r0, _08021F04  @ =gUnknown_0813BCC4
	str r0, [r4, #72]
_08021EF8:
	add r0, r4, #0
	bl sub_08022734
	pop {r4}
	pop {r0}
	bx r0
_08021F04:
	.4byte gUnknown_0813BCC4
	THUMB_FUNC_END sub_08021EA8

