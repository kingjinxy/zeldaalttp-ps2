	THUMB_FUNC_START sub_08011E5C
sub_08011E5C: @ 0x08011E5C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _08011E8C
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r2, [r4, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r0, [r4, #31]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #31]
	add r0, r4, #0
	mov r1, #2
	bl 0x08003870
	ldr r0, _08011E98  @ =gUnknown_02016D60
	str r4, [r0, #8]
_08011E8C:
	add r0, r4, #0
	bl 0x08003828
	pop {r4}
	pop {r0}
	bx r0
_08011E98:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08011E5C

