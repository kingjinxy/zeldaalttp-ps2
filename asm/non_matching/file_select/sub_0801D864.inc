	THUMB_FUNC_START sub_0801D864
sub_0801D864: @ 0x0801D864
	push {r4,lr}
	add r4, r0, #0
	ldrh r1, [r4, #50]
	add r0, r0, #112
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #114
	strh r0, [r1]
	ldr r1, _0801D88C  @ =gUnknown_0813A8E8
	add r0, r4, #0
	bl sub_08009924
	add r0, r4, #0
	bl sub_0801DC14
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801D88C:
	.4byte gUnknown_0813A8E8
	THUMB_FUNC_END sub_0801D864

