	THUMB_FUNC_START sub_0802C1C0
sub_0802C1C0: @ 0x0802C1C0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	lsl r1, r1, #16
	lsr r7, r1, #16
	lsl r2, r2, #24
	lsr r4, r2, #24
	ldr r0, _0802C230  @ =gUnknown_0202A3F0
	sub r0, r5, r0
	lsr r0, r0, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, #0
	ldr r0, _0802C234  @ =gUnknown_02016C50
	mov r12, r0
	ldr r0, _0802C238  @ =gUnknown_0842AA54
	mov r8, r0
	cmp r1, r4
	bcs _0802C204
	mov r0, #128
	mov r2, #0
	add r3, r6, #0
	orr r3, r3, r0
_0802C1F0:
	lsl r0, r1, #2
	add r0, r0, r5
	strb r3, [r0]
	strb r2, [r0, #1]
	strh r2, [r0, #2]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, r4
	bcc _0802C1F0
_0802C204:
	lsl r1, r4, #8
	mov r0, #255
	and r0, r0, r7
	orr r1, r1, r0
	strh r1, [r5, #2]
	mov r0, #128
	lsl r0, r0, #19
	ldrh r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r6, #2
	add r0, r0, r12
	lsl r1, r7, #2
	add r1, r1, r8
	ldr r1, [r1]
	str r1, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802C230:
	.4byte gUnknown_0202A3F0
_0802C234:
	.4byte gUnknown_02016C50
_0802C238:
	.4byte gUnknown_0842AA54
	THUMB_FUNC_END sub_0802C1C0

