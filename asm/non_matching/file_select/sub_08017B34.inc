	THUMB_FUNC_START sub_08017B34
sub_08017B34: @ 0x08017B34
	push {r4,lr}
	add r4, r0, #0
	mov r1, #192
	lsl r1, r1, #5
	bl 0x08003594
	cmp r0, #0
	bne _08017B78
	add r0, r4, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08017B72
	mov r0, #30
	strb r0, [r4, #23]
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	add r0, r0, #4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_08017D78
_08017B72:
	add r0, r4, #0
	bl 0x0800963C
_08017B78:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017B34

	.byte 0x00
	.byte 0x00
