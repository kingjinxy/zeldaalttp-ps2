	THUMB_FUNC_START sub_081351D4
sub_081351D4: @ 0x081351D4
	push {r4,lr}
	add r1, r0, #0
	ldrb r0, [r1, #2]
	lsl r2, r0, #24
	lsr r4, r2, #24
	ldrb r3, [r1, #3]
	lsl r0, r3, #24
	lsr r3, r0, #24
	cmp r4, r3
	bcc _081351F4
	lsr r0, r2, #25
	cmp r0, r3
	bcc _08135200
	mov r0, #15
	strb r0, [r1, #27]
	b _0813520E
_081351F4:
	lsr r0, r0, #25
	cmp r0, r4
	bcc _08135200
	mov r0, #240
	strb r0, [r1, #27]
	b _0813520E
_08135200:
	mov r0, #255
	strb r0, [r1, #27]
	ldrb r2, [r1, #3]
	ldrb r3, [r1, #2]
	add r0, r2, r3
	lsr r0, r0, #4
	b _0813521E
_0813520E:
	ldrb r2, [r1, #3]
	ldrb r3, [r1, #2]
	add r0, r2, r3
	lsr r0, r0, #4
	strb r0, [r1, #10]
	cmp r0, #15
	bls _08135220
	mov r0, #15
_0813521E:
	strb r0, [r1, #10]
_08135220:
	ldrb r2, [r1, #6]
	ldrb r3, [r1, #10]
	add r0, r2, #0
	mul r0, r3, r0
	add r0, r0, #15
	asr r0, r0, #4
	strb r0, [r1, #25]
	ldrb r0, [r1, #28]
	ldrb r2, [r1, #27]
	and r0, r0, r2
	strb r0, [r1, #27]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081351D4

