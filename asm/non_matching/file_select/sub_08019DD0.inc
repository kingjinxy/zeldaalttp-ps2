	THUMB_FUNC_START sub_08019DD0
sub_08019DD0: @ 0x08019DD0
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #23]
	sub r0, r0, #1
	strb r0, [r2, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08019DF6
	mov r0, #8
	strb r0, [r2, #20]
	mov r0, #192
	str r0, [r2, #12]
	add r3, r2, #0
	add r3, r3, #118
	ldrb r1, [r3]
	mov r0, #15
	and r0, r0, r1
	add r0, r0, #16
	strb r0, [r3]
_08019DF6:
	add r0, r2, #0
	bl GetNextFrame
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019DD0

