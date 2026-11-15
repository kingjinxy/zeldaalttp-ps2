	THUMB_FUNC_START sub_08025F68
sub_08025F68: @ 0x08025F68
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #23]
	lsr r1, r1, #3
	bl sub_080261A0
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r2]
	sub r0, r0, #1
	mov r1, #31
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r4, #23]
	add r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08025F98
	mov r0, #1
	strb r0, [r4, #20]
	ldr r1, [r4, #84]
	mov r0, #0
	strb r0, [r1, #24]
_08025F98:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025F68

	.byte 0x00
	.byte 0x00
