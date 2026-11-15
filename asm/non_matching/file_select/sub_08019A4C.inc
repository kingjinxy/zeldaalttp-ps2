	THUMB_FUNC_START sub_08019A4C
sub_08019A4C: @ 0x08019A4C
	push {r4,lr}
	add r4, r0, #0
	mov r2, #1
	mov r3, #1
	strb r3, [r4, #20]
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #8
	strb r0, [r1]
	ldrb r1, [r4, #28]
	sub r0, r0, #57
	and r0, r0, r1
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldr r0, _08019ACC  @ =0x0000FFE0
	strh r0, [r4, #58]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #16
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _08019AD0  @ =gUnknown_08139D10
	str r0, [r4, #72]
	ldrb r2, [r4, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r0, [r4, #31]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #31]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #106
	strb r3, [r0]
	bl sub_08044594
	str r0, [r4, #100]
	add r0, r4, #0
	mov r1, #5
	bl 0x08003870
	bl sub_0803DF84
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08019ACC:
	.4byte 0x0000FFE0
_08019AD0:
	.4byte gUnknown_08139D10
	THUMB_FUNC_END sub_08019A4C

