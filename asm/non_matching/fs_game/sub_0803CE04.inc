	THUMB_FUNC_START sub_0803CE04
sub_0803CE04: @ 0x0803CE04
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r4, _0803CE28  @ =gUnknown_0201F020
	ldr r0, [r7]
	bl sub_0803CC9C
	lsl r1, r0, #16
	lsr r0, r1, #16
	add r1, r4, #0
	ldr r1, _0803CE2C  @ =0x00002004
	add r2, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r0, r1, #0
	b _0803CE30
	.byte 0x00
	.byte 0x00
_0803CE28:
	.4byte gUnknown_0201F020
_0803CE2C:
	.4byte 0x00002004
_0803CE30:
	add sp, sp, #4
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803CE04

