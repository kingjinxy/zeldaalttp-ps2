	THUMB_FUNC_START sub_0802BD58
sub_0802BD58: @ 0x0802BD58
	push {r4-r7,lr}
	ldr r1, _0802BD68  @ =gUnknown_0202A770
	ldr r0, [r1, #16]
	ldrh r7, [r0, #50]
	ldrh r6, [r0, #54]
	mov r4, #0
	add r5, r1, #0
	b _0802BE28
_0802BD68:
	.4byte gUnknown_0202A770
_0802BD6C:
	lsl r0, r4, #3
	ldr r1, _0802BD88  @ =gUnknown_0202A788
	add r3, r0, r1
	mov r0, #0
	strb r0, [r3, #5]
	sub r1, r1, #24
	ldrb r0, [r1, #1]
	cmp r0, #7
	bhi _0802BDB0
	lsl r0, r0, #2
	ldr r1, _0802BD8C  @ =0x0802BD90
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802BD88:
	.4byte gUnknown_0202A788
_0802BD8C:
	.4byte 0x0802BD90
	.4byte _0802BDB0
	.4byte _0802BDB0
	.4byte _0802BDB0
	.4byte _0802BDFE
	.4byte _0802BE22
	.4byte _0802BDB0
	.4byte _0802BDB0
	.4byte _0802BDB0
_0802BDB0:
	ldrh r2, [r3]
	mov r1, #252
	lsl r1, r1, #2
	add r0, r1, #0
	and r0, r0, r2
	add r0, r0, #8
	strh r0, [r3]
	ldrh r0, [r3, #2]
	and r1, r1, r0
	add r1, r1, #8
	strh r1, [r3, #2]
	ldrh r2, [r3]
	ldr r1, _0802BE3C  @ =gUnknown_03000450
	ldrh r0, [r1, #24]
	sub r2, r2, r0
	asr r2, r2, #4
	ldrh r0, [r3, #2]
	ldrh r1, [r1, #26]
	sub r0, r0, r1
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r0, _0802BE40  @ =gUnknown_0201F020
	ldr r1, _0802BE44  @ =0x00002004
	add r0, r0, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802BDFA
	ldr r0, _0802BE48  @ =gUnknown_0200B320
	add r0, r0, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802BDFE
_0802BDFA:
	mov r0, #1
	strb r0, [r3, #5]
_0802BDFE:
	ldrh r0, [r3]
	sub r0, r0, r7
	lsl r0, r0, #16
	mov r1, #248
	lsl r1, r1, #13
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #62
	bhi _0802BE22
	ldrh r0, [r3, #2]
	sub r0, r0, r6
	lsl r0, r0, #16
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #62
	bhi _0802BE22
	mov r0, #1
	strb r0, [r3, #5]
_0802BE22:
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
_0802BE28:
	ldrb r0, [r5, #6]
	cmp r4, r0
	bcc _0802BD6C
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802BE3C:
	.4byte gUnknown_03000450
_0802BE40:
	.4byte gUnknown_0201F020
_0802BE44:
	.4byte 0x00002004
_0802BE48:
	.4byte gUnknown_0200B320
	THUMB_FUNC_END sub_0802BD58

