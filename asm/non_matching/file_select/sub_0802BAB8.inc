	THUMB_FUNC_START sub_0802BAB8
sub_0802BAB8: @ 0x0802BAB8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #6]
	cmp r0, #0
	bne _0802BAD0
	add r0, r0, #1
	strb r0, [r4, #6]
	bl sub_0800099C
	mov r1, #63
	and r0, r0, r1
	strb r0, [r4, #4]
_0802BAD0:
	ldr r2, _0802BB08  @ =gUnknown_0813E4CC
	ldrb r0, [r4, #4]
	lsl r0, r0, #3
	add r0, r0, r2
	mov r1, #0
	ldrsh r0, [r0, r1]
	asr r0, r0, #4
	ldrh r3, [r4]
	add r0, r0, r3
	ldr r3, _0802BB0C  @ =0x000003FF
	add r1, r3, #0
	and r0, r0, r1
	strh r0, [r4]
	ldrb r0, [r4, #4]
	lsl r0, r0, #3
	add r0, r0, #128
	add r0, r0, r2
	mov r2, #0
	ldrsh r0, [r0, r2]
	asr r0, r0, #4
	ldrh r3, [r4, #2]
	add r0, r0, r3
	and r0, r0, r1
	strh r0, [r4, #2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802BB08:
	.4byte gUnknown_0813E4CC
_0802BB0C:
	.4byte 0x000003FF
	THUMB_FUNC_END sub_0802BAB8

