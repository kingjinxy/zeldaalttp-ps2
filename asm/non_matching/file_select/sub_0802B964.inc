	THUMB_FUNC_START sub_0802B964
sub_0802B964: @ 0x0802B964
	push {r4-r6,lr}
	ldr r0, _0802B974  @ =gUnknown_02016328
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802B978
	bl sub_0802BF30
	b _0802B9C0
_0802B974:
	.4byte gUnknown_02016328
_0802B978:
	mov r5, #0
	ldr r0, _0802B9C8  @ =gUnknown_0202A770
	ldrb r1, [r0, #6]
	cmp r5, r1
	bcs _0802B9A8
	ldr r6, _0802B9CC  @ =gUnknown_0813D68C
	add r4, r0, #0
_0802B986:
	ldrb r2, [r4, #1]
	lsl r2, r2, #2
	add r2, r2, r6
	lsl r0, r5, #3
	add r1, r4, #0
	add r1, r1, #24
	add r0, r0, r1
	ldr r2, [r2]
	add r1, r5, #0
	bl _call_via_r2
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	ldrb r0, [r4, #6]
	cmp r5, r0
	bcc _0802B986
_0802B9A8:
	ldr r1, _0802B9C8  @ =gUnknown_0202A770
	ldrh r0, [r1, #8]
	sub r0, r0, #1
	strh r0, [r1, #8]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802B9C0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #49
	strh r0, [r1, #8]
_0802B9C0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802B9C8:
	.4byte gUnknown_0202A770
_0802B9CC:
	.4byte gUnknown_0813D68C
	THUMB_FUNC_END sub_0802B964

