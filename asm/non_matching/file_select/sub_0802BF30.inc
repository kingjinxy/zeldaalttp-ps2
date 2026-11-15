	THUMB_FUNC_START sub_0802BF30
sub_0802BF30: @ 0x0802BF30
	push {r4,r5,lr}
	ldr r5, _0802BF5C  @ =gUnknown_0202A770
	add r0, r5, #0
	add r0, r0, #102
	ldrb r4, [r0]
	mov r0, #0
	strb r0, [r5]
	bl 0x0800099C
	add r2, r5, #0
	add r2, r2, #92
	sub r1, r4, #1
	and r1, r1, r0
	ldrh r2, [r2]
	add r1, r1, r2
	lsr r4, r4, #1
	sub r1, r1, r4
	strh r1, [r5, #8]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802BF5C:
	.4byte gUnknown_0202A770
	THUMB_FUNC_END sub_0802BF30

