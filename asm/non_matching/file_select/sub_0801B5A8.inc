	THUMB_FUNC_START sub_0801B5A8
sub_0801B5A8: @ 0x0801B5A8
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #50
	ldrsh r4, [r5, r0]
	ldr r1, _0801B614  @ =gUnknown_03000450
	ldrh r0, [r1, #24]
	add r0, r0, #8
	sub r4, r4, r0
	asr r4, r4, #4
	mov r2, #54
	ldrsh r0, [r5, r2]
	ldrh r1, [r1, #26]
	add r1, r1, #8
	sub r0, r0, r1
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r0, #169
	lsl r0, r0, #1
	add r5, r5, #80
	ldrh r2, [r5]
	add r1, r4, #0
	bl sub_08014658
	ldr r0, _0801B618  @ =0x00000153
	add r1, r4, #1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	bl sub_08014658
	mov r0, #170
	lsl r0, r0, #1
	add r1, r4, #0
	add r1, r1, #64
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5]
	bl sub_08014658
	ldr r0, _0801B61C  @ =0x00000155
	add r4, r4, #65
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldrh r2, [r5]
	add r1, r4, #0
	bl sub_08014658
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801B614:
	.4byte gUnknown_03000450
_0801B618:
	.4byte 0x00000153
_0801B61C:
	.4byte 0x00000155
	THUMB_FUNC_END sub_0801B5A8

