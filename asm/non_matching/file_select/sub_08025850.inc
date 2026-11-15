	THUMB_FUNC_START sub_08025850
sub_08025850: @ 0x08025850
	push {lr}
	mov r1, #2
	strb r1, [r0, #20]
	mov r1, #64
	str r1, [r0, #12]
	mov r1, #160
	lsl r1, r1, #9
	str r1, [r0, #16]
	add r0, r0, #60
	ldrb r2, [r0]
	mov r1, #127
	and r1, r1, r2
	strb r1, [r0]
	mov r0, #23
	bl 0x08003DFC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025850

