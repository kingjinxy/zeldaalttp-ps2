	THUMB_FUNC_START sub_08035E08
sub_08035E08: @ 0x08035E08
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08035E38
	mov r0, #15
	strb r0, [r4, #20]
	mov r0, #90
	strb r0, [r4, #23]
	mov r0, #128
	lsl r0, r0, #3
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #16
	strb r0, [r1]
	ldr r1, _08035E40  @ =gUnknown_0201F000
	mov r0, #1
	str r0, [r1]
_08035E38:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08035E40:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08035E08

