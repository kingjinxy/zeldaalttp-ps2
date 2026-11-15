	THUMB_FUNC_START sub_0803CE68
sub_0803CE68: @ 0x0803CE68
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r2, r0, #0
	add r0, r1, #0
	add r1, r7, #0
	strh r2, [r1]
	add r1, r7, #2
	strh r0, [r1]
	add r0, r7, #4
	add r1, r7, #0
	ldrh r2, [r1]
	lsr r1, r2, #4
	add r2, r1, #0
	mov r3, #63
	add r1, r2, #0
	and r1, r1, r3
	add r2, r7, #2
	ldrh r3, [r2]
	mov r4, #252
	lsl r4, r4, #2
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #16
	lsr r2, r3, #16
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _0803CEC0  @ =gUnknown_0201F020
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, #4
	add r1, r0, r2
	ldrh r2, [r1]
	add r0, r2, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	b _0803CEC4
_0803CEC0:
	.4byte gUnknown_0201F020
_0803CEC4:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803CE68

