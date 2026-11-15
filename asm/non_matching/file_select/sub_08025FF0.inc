	THUMB_FUNC_START sub_08025FF0
sub_08025FF0: @ 0x08025FF0
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r0, [r5, #84]
	mov r12, r0
	ldrb r0, [r0, #20]
	cmp r0, #4
	beq _08026040
	ldr r1, _0802603C  @ =gUnknown_0813C5E4
	mov r3, r12
	add r3, r3, #41
	mov r2, r12
	add r2, r2, #42
	ldrb r0, [r2]
	lsl r0, r0, #3
	ldrb r4, [r3]
	add r0, r0, r4
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r6, r12
	ldrh r6, [r6, #50]
	add r0, r0, r6
	strh r0, [r5, #50]
	ldrb r0, [r2]
	lsl r0, r0, #3
	ldrb r3, [r3]
	add r0, r0, r3
	add r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r1, r12
	ldrh r1, [r1, #54]
	add r0, r0, r1
	b _08026086
	.byte 0x00
	.byte 0x00
_0802603C:
	.4byte gUnknown_0813C5E4
_08026040:
	ldr r4, _08026090  @ =gUnknown_0813C604
	mov r7, r12
	add r7, r7, #41
	ldrb r0, [r7]
	mov r2, #15
	add r1, r2, #0
	and r1, r1, r0
	mov r6, r12
	add r6, r6, #42
	ldrb r3, [r6]
	lsl r0, r3, #1
	add r0, r0, r3
	lsl r0, r0, #1
	add r1, r1, r0
	add r1, r1, r4
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r3, r12
	ldrh r3, [r3, #50]
	add r0, r0, r3
	strh r0, [r5, #50]
	ldrb r0, [r7]
	and r2, r2, r0
	ldrb r1, [r6]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #1
	add r2, r2, r0
	add r2, r2, #1
	add r2, r2, r4
	mov r0, #0
	ldrsb r0, [r2, r0]
	mov r4, r12
	ldrh r4, [r4, #54]
	add r0, r0, r4
_08026086:
	strh r0, [r5, #54]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08026090:
	.4byte gUnknown_0813C604
	THUMB_FUNC_END sub_08025FF0

