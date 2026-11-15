	THUMB_FUNC_START sub_0802B9D0
sub_0802B9D0: @ 0x0802B9D0
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r0, [r4, #5]
	cmp r0, #0
	bne _0802BA58
	ldr r3, _0802BA3C  @ =gUnknown_0813E4CC
	ldrb r1, [r4, #4]
	lsl r0, r1, #4
	add r0, r0, r3
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #20
	ldrh r2, [r4]
	add r5, r0, r2
	ldr r0, _0802BA40  @ =0x000003FF
	add r2, r0, #0
	and r5, r5, r2
	lsl r1, r1, #4
	add r1, r1, #128
	add r1, r1, r3
	ldrh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #20
	ldrh r1, [r4, #2]
	add r3, r0, r1
	and r3, r3, r2
	ldr r0, _0802BA44  @ =gUnknown_03000450
	ldrh r1, [r0, #24]
	sub r1, r5, r1
	asr r1, r1, #4
	ldrh r0, [r0, #26]
	sub r0, r3, r0
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _0802BA48  @ =gUnknown_0201F020
	ldr r2, _0802BA4C  @ =0x00002004
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802BA34
	ldr r0, _0802BA50  @ =gUnknown_0200B320
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802BA54
_0802BA34:
	mov r0, #1
	strb r0, [r4, #5]
	b _0802BA58
	.byte 0x00
	.byte 0x00
_0802BA3C:
	.4byte gUnknown_0813E4CC
_0802BA40:
	.4byte 0x000003FF
_0802BA44:
	.4byte gUnknown_03000450
_0802BA48:
	.4byte gUnknown_0201F020
_0802BA4C:
	.4byte 0x00002004
_0802BA50:
	.4byte gUnknown_0200B320
_0802BA54:
	strh r5, [r4]
	strh r3, [r4, #2]
_0802BA58:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B9D0

	.byte 0x00
	.byte 0x00
