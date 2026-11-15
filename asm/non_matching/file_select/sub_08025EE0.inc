	THUMB_FUNC_START sub_08025EE0
sub_08025EE0: @ 0x08025EE0
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #23]
	lsr r1, r1, #1
	bl sub_080261A0
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r2]
	sub r0, r0, #1
	mov r1, #31
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bhi _08025F2E
	mov r0, #7
	strb r0, [r4, #20]
	mov r0, #150
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #0
	strb r0, [r1]
	add r2, r2, #17
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_08026204
	mov r0, #48
	bl 0x08003DFC
_08025F2E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025EE0

