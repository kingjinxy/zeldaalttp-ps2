	THUMB_FUNC_START sub_08134550
sub_08134550: @ 0x08134550
	push {r4,r5}
	ldr r2, [r1, #64]
	ldrb r3, [r2]
	cmp r3, #128
	bcs _08134562
	strb r3, [r1, #5]
	add r2, r2, #1
	str r2, [r1, #64]
	b _08134564
_08134562:
	ldrb r3, [r1, #5]
_08134564:
	ldr r1, [r1, #32]
	cmp r1, #0
	beq _0813458C
	mov r4, #131
	mov r5, #64
_0813456E:
	ldrb r2, [r1]
	tst r2, r4
	beq _08134586
	tst r2, r5
	bne _08134586
	ldrb r0, [r1, #17]
	cmp r0, r3
	bne _08134586
	mov r0, #64
	orr r2, r2, r0
	strb r2, [r1]
	b _0813458C
_08134586:
	ldr r1, [r1, #52]
	cmp r1, #0
	bne _0813456E
_0813458C:
	pop {r4,r5}
	bx lr
	THUMB_FUNC_END sub_08134550

