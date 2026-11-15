	THUMB_FUNC_START sub_08026204
sub_08026204: @ 0x08026204
	push {r4,lr}
	ldr r2, [r0, #84]
	ldr r3, _08026240  @ =gUnknown_0813C644
	mov r1, #42
	add r1, r1, r2
	mov r12, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	add r1, r1, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r4, [r2, #50]
	add r1, r1, r4
	strh r1, [r0, #50]
	mov r4, r12
	ldrb r1, [r4]
	lsl r1, r1, #1
	add r1, r1, #1
	add r1, r1, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2, #54]
	add r1, r1, r2
	strh r1, [r0, #54]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08026240:
	.4byte gUnknown_0813C644
	THUMB_FUNC_END sub_08026204

