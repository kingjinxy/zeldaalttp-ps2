	THUMB_FUNC_START sub_08025210
sub_08025210: @ 0x08025210
	push {lr}
	mov r1, #2
	strb r1, [r0, #20]
	mov r1, #64
	str r1, [r0, #12]
	mov r1, #160
	lsl r1, r1, #9
	str r1, [r0, #16]
	add r3, r0, #0
	add r3, r3, #60
	ldrb r2, [r3]
	mov r1, #127
	and r1, r1, r2
	strb r1, [r3]
	add r1, r0, #0
	add r1, r1, #43
	ldrb r1, [r1]
	lsr r1, r1, #4
	add r1, r1, #2
	bl sub_08003870
	mov r0, #29
	bl sub_08003DFC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025210

