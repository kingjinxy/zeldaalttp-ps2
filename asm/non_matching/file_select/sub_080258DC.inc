	THUMB_FUNC_START sub_080258DC
sub_080258DC: @ 0x080258DC
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	asr r0, r0, #3
	add r5, r4, #0
	add r5, r5, #42
	strb r0, [r5]
	ldr r0, _08025948  @ =gUnknown_0813C598
	str r0, [r4, #72]
	ldrb r0, [r4, #10]
	cmp r0, #3
	bne _0802591E
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #6
	strb r0, [r1]
	strh r2, [r4, #58]
	add r1, r1, #22
	mov r0, #4
	strb r0, [r1]
_0802591E:
	ldrb r0, [r4, #11]
	cmp r0, #0
	bne _08025950
	mov r0, #1
	strb r0, [r4, #20]
	ldr r0, [r4, #84]
	ldr r2, _0802594C  @ =gUnknown_0813C468
	ldrb r1, [r5]
	add r1, r1, r2
	mov r3, #0
	ldrsb r3, [r1, r3]
	lsl r3, r3, #16
	add r1, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	ldrb r1, [r5]
	add r0, r4, #0
	bl sub_08003870
	b _08025956
_08025948:
	.4byte gUnknown_0813C598
_0802594C:
	.4byte gUnknown_0813C468
_08025950:
	add r0, r4, #0
	bl sub_08025A60
_08025956:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080258DC

