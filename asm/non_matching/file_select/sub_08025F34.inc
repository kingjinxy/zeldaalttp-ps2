	THUMB_FUNC_START sub_08025F34
sub_08025F34: @ 0x08025F34
	push {r4,lr}
	add r4, r0, #0
	bl sub_08026204
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08025F62
	mov r1, #8
	strb r1, [r4, #20]
	mov r0, #4
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #46
	strb r1, [r0]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
_08025F62:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025F34

