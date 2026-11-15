	THUMB_FUNC_START sub_08018450
sub_08018450: @ 0x08018450
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #24]
	sub r0, r0, #1
	strb r0, [r1, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801846A
	ldrb r0, [r1, #20]
	sub r0, r0, #2
	strb r0, [r1, #20]
	mov r0, #1
	strb r0, [r1, #23]
_0801846A:
	add r0, r1, #0
	bl sub_08018514
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018450

