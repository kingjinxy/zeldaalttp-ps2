	THUMB_FUNC_START sub_0803CE38
sub_0803CE38: @ 0x0803CE38
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r4, _0803CE5C  @ =gUnknown_0201F020
	ldr r0, [r7]
	bl sub_0803CC9C
	lsl r1, r0, #16
	lsr r0, r1, #16
	add r1, r0, #0
	lsl r0, r1, #1
	add r1, r4, #4
	add r0, r1, r0
	ldrh r1, [r0]
	add r0, r1, #0
	b _0803CE60
	.byte 0x00
	.byte 0x00
_0803CE5C:
	.4byte gUnknown_0201F020
_0803CE60:
	add sp, sp, #4
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803CE38

