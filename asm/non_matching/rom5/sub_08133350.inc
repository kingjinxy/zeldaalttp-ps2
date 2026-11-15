	THUMB_FUNC_START sub_08133350
sub_08133350: @ 0x08133350
	push {r4-r6,lr}
	ldr r5, _08133388  @ =gUnknown_083BF758
	ldr r6, _0813338C  @ =gUnknown_02000900
	mov r4, #127
_08133358:
	ldrh r0, [r5]
	bl sub_08133468
	strh r0, [r6]
	add r5, r5, #2
	add r6, r6, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08133358
	ldr r5, _08133390  @ =gUnknown_083BF858
	ldr r6, _08133394  @ =gUnknown_02000B00
	mov r4, #127
_08133370:
	ldrh r0, [r5]
	bl sub_08133468
	strh r0, [r6]
	add r5, r5, #2
	add r6, r6, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08133370
	pop {r4-r6}
	pop {r0}
	bx r0
_08133388:
	.4byte gUnknown_083BF758
_0813338C:
	.4byte gUnknown_02000900
_08133390:
	.4byte gUnknown_083BF858
_08133394:
	.4byte gUnknown_02000B00
	THUMB_FUNC_END sub_08133350

