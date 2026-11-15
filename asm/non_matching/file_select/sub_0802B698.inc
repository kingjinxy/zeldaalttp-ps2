	THUMB_FUNC_START sub_0802B698
sub_0802B698: @ 0x0802B698
	push {r4,lr}
	ldr r1, _0802B6B4  @ =gUnknown_0202A770
	str r0, [r1, #88]
	add r1, r1, #92
	ldm r0!, {r2-r4}
	stm r1!, {r2-r4}
	ldr r1, _0802B6B8  @ =gUnknown_02016328
	mov r0, #1
	strb r0, [r1]
	bl sub_0802BF30
	pop {r4}
	pop {r0}
	bx r0
_0802B6B4:
	.4byte gUnknown_0202A770
_0802B6B8:
	.4byte gUnknown_02016328
	THUMB_FUNC_END sub_0802B698

